find_package (Glog REQUIRED)
include_directories (${GLOG_INCLUDE_DIR})

add_executable(glog_test glog_test.cpp)
target_link_libraries (glog_test glog)
