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

