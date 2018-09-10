#include <iostream>
#include <glog/logging.h>

using namespace std;

int main(int argc, char** argv) {
    cout<<"glog_test----in----"<<endl;

    FLAGS_alsologtostderr = 1;
    FLAGS_colorlogtostderr = true;
    FLAGS_log_dir = "/tmp/log/";
    google::InitGoogleLogging(argv[0]);

    LOG(INFO) << "I am INFO!";
    LOG(WARNING) << "I am WARNING!";
    LOG(ERROR) << "I am ERROR!";
//    LOG(FATAL) << "I am FATAL!";
    for(int i=0; i<1024; ++i) {
        // 打印最先的5次日志
        LOG_FIRST_N(INFO, 5) << "LOG_FIRST_N " << google::COUNTER;
        // 当满足条件时打印日志
        LOG_IF(INFO, i==5) << "LOG_IF " << i;
        // 尽管程序执行1024次，但是每隔1000次打印一次
        LOG_EVERY_N(INFO, 1000) << "LOG_EVERY_N " << google::COUNTER;
    }

    // D+LOG表示调试模式下的输出
    for(int i=0; i<1024; ++i) {
        // 当满足条件时打印日志
        DLOG_IF(INFO, i==5) << "DLOG_IF " << i;
        // 尽管程序执行1024次，但是每隔1000次打印一次
        DLOG_EVERY_N(INFO, 1000) << "DLOG_EVERY_N " << google::COUNTER;
    }

//    CHECK_EQ(1, 1) << "CHECK_EQ 1 1";
//    CHECK_EQ(1, 2) << "CHECK_EQ 1 2";

    cout<<"glog_test----out----"<<endl;
    return 0;
}
