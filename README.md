# CppModule

该仓库记录常用Cpp应用库的使用方法，目前主要计划记录Caffe中相关的这些依赖库的使用方法，同时其中测试相关第三方库均以CMake进行组织。

```
# 命令行下编译运行
mkdir build
cd build
cmake ..
make
./build/gflags/gflags_test
./build/glog/glog_test
```

---
## CMake

CMake使用相关参考[cmake使用](./cmake/README.md)。

---
## 常用第三方库

- OpenCV
- Boost，具体使用参考[boost使用](./boost/README.md)
- CUDA
- BLAS
- LevelDB
- LMDB
- GLog，具体使用参考[glog使用](./glog/README.md)
- GFlags，具体使用参考[flags使用](./gflags/README.md)
- Protobuff
- HDF5
- Snappy

---
## 参考资料
- [Caffe使用的第三方库（一）](http://blog.leanote.com/post/fishing_piggy/Caffe%E4%BD%BF%E7%94%A8%E7%9A%84%E7%AC%AC%E4%B8%89%E6%96%B9%E5%BA%93)，这个系列较好地对Caffe源码进行了解析，其中包括前期对Caffe依赖地第三方库地学习，然后对整个结构框架进行了分析。
