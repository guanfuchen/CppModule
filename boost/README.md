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
## 参考资料
- [FindBoost](https://cmake.org/cmake/help/v3.8/module/FindBoost.html)
- [How to create a new folder using boost when a folder with the same name already exists?](https://stackoverflow.com/questions/45196838/how-to-create-a-new-folder-using-boost-when-a-folder-with-the-same-name-already)
- [Filesystem Tutorial](https://www.boost.org/doc/libs/1_44_0/libs/filesystem/v3/doc/tutorial.html)，这是boost中关于文件系统相关的教程。
