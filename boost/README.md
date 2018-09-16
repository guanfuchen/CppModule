# boost

---
## 文件

### 存在文件

exists(path)

### 创建文件

create_directory(path)

```cpp
// 使用示例
FLAGS_log_dir = "/tmp/glog/";
if(!exists(FLAGS_log_dir)) {
    create_directory(FLAGS_log_dir);
}
```

---
## 字符串

### 分割字符串

```cpp
vector<string> strings;
// 分割,号间隔的字符串
boost::split(strings, "0,1,2", boost::is_any_of(","));
for(int i=0; i<strings.size();++i){
    cout << strings[i] << endl;
}
```

### 字符串转换为数字

```cpp
for(int i=0; i<strings.size();++i){
    cout << strings[i] << endl;
    // 转换为int
    int temp = boost::lexical_cast<int>(strings[i]);
    cout << temp << endl;
}
```

---
## 参考资料
- [FindBoost](https://cmake.org/cmake/help/v3.8/module/FindBoost.html)
- [How to create a new folder using boost when a folder with the same name already exists?](https://stackoverflow.com/questions/45196838/how-to-create-a-new-folder-using-boost-when-a-folder-with-the-same-name-already)
- [Filesystem Tutorial](https://www.boost.org/doc/libs/1_44_0/libs/filesystem/v3/doc/tutorial.html)，这是boost中关于文件系统相关的教程。
