#include <iostream>
#include <gflags/gflags.h>

using namespace std;

// 定义参数列表，目前支持DEFINE_bool、DEFINE_int32、DEFINE_int64、DEFINE_uint64、DEFINE_double和DEFINE_string
// 定义列表包括参数名，参数默认值，参数的帮助信息
DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
DEFINE_string(languages, "english,french,german", "comma-separated list of languages to offer in the 'lang' menu");

int main(int argc, char** argv) {
    // 传入argc和argv来初始化所有参数，将命令行中的参数列表输入gflags进行处理
    gflags::SetVersionString("1.0");
    gflags::SetUsageMessage("command line\n"
                            "usage: gflags_test <command> <args>\n\n"
                            "commands:\n");

    google::ParseCommandLineFlags(&argc, &argv, true);
    if (FLAGS_big_menu) {
      cout << "big menu is ture" << endl;
    } else {
      cout << "big menu is flase" << endl;
    }

    // 通过FLAGS_name来访问参数
    cout << "languages=" << FLAGS_languages << endl;

    if(argc<2) {
        // 显示帮助
        google::ShowUsageWithFlagsRestrict(argv[0], "gflags_test");
    }

    cout<<"gflags_test----in----"<<endl;
    cout<<"gflags_test----out----"<<endl;
    return 0;
}
