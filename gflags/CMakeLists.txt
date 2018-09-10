find_package (GFlags REQUIRED)
include_directories (${GFLAGS_INCLUDE_DIR})

add_executable(gflags_test gflags_test.cpp)
target_link_libraries (gflags_test gflags)
