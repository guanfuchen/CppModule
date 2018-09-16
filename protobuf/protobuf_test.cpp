#include <iostream>
#include <glog/logging.h>
#include <fstream>
#include <fcntl.h>

#include "proto/addressbook.pb.h"

using namespace std;

void set_person(addressbook::Person wp, char* path)
{
    int fd = open(path, O_CREAT|O_TRUNC|O_RDWR, 0644);
    if(fd <= 0){
        perror("open");
        exit(0);
    }
    wp.SerializeToFileDescriptor(fd);
    close(fd);
}

void get_person(addressbook::Person rp, char* path)
{
    int fd = open(path, O_RDONLY);
    if(fd <= 0){
        perror("open");
        exit(0);
    }
    rp.ParseFromFileDescriptor(fd);
    close(fd);
}

int main(int argc, char** argv) {
    if(argc < 2) {
        cout << "Usage:" << argv[0] << " ADDRESS_BOOK_FILE" << endl;
        return -1;
    }
    cout<<"protobuf_test----in----"<<endl;

    addressbook::Person p;

    p.set_id(1);
    p.set_name("guanfuchen");
    p.set_email("guanfuchen@zju.eud.cn");
//    cout<<p.email()<<endl;
    set_person(p, argv[1]);

    cout<<"protobuf_test----out----"<<endl;
    return 0;
}
