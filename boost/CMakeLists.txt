find_package (Glog REQUIRED)
include_directories (${GLOG_INCLUDE_DIR})

find_package(Boost REQUIRED COMPONENTS date_time filesystem iostreams)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(boost_test boost_test.cpp)
target_link_libraries (boost_test glog Boost::date_time Boost::filesystem Boost::iostreams)
