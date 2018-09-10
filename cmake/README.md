# cmake

通过cmake组织cpp相关的项目。

---
## 常用第三方库

- boost
find_package(Boost 1.56 REQUIRED COMPONENTS date_time filesystem iostreams)
add_executable(foo foo.cc)
target_link_libraries(foo Boost::date_time Boost::filesystem Boost::iostreams)
- glog
find_package (Glog REQUIRED)
include_directories (${GLOG_INCLUDE_DIR})
add_executable(foo foo.cc)
target_link_libraries(foo glog)
- gflags
find_package (GFlags REQUIRED)
include_directories (${GFLAGS_INCLUDE_DIR})
add_executable(foo foo.cc)
target_link_libraries(foo gflags)

---
## 参考资料
- [cmake example](https://cmake.org/examples/)
- [CMake 使用方法 & CMakeList.txt](https://blog.csdn.net/u012150179/article/details/17852273)
