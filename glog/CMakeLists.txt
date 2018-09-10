find_package (Glog REQUIRED)
include_directories (${GLOG_INCLUDE_DIR})

find_package(Boost REQUIRED COMPONENTS date_time filesystem iostreams)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(glog_test glog_test.cpp)
target_link_libraries (glog_test glog Boost::date_time Boost::filesystem Boost::iostreams)
