#include <iostream>
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost::filesystem;

int main(int argc, char** argv) {
    cout<<"boost_test----in----"<<endl;

    vector<string> strings;
    boost::split(strings, "0,1,2", boost::is_any_of(","));
    for(int i=0; i<strings.size();++i){
        cout << strings[i] << endl;
        int temp = boost::lexical_cast<int>(strings[i]);
        cout << temp << endl;
    }

    cout<<"boost_test----out----"<<endl;
    return 0;
}
