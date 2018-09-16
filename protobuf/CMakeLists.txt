find_package (Glog REQUIRED)
include_directories (${GLOG_INCLUDE_DIR})

find_package(Boost REQUIRED COMPONENTS date_time filesystem iostreams)
include_directories(${Boost_INCLUDE_DIRS})

find_package(Protobuf REQUIRED)

INCLUDE_DIRECTORIES(${PROTOBUF_INCLUDE_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER proto/addressbook.proto)

#message ("PROTO_SRC = ${PROTO_SRC}")
#message ("PROTO_HEADER = ${PROTO_HEADER}")
#message ("CMAKE_CURRENT_BINARY_DIR = ${CMAKE_CURRENT_BINARY_DIR}")

ADD_LIBRARY(proto ${PROTO_HEADER} ${PROTO_SRC})

add_executable(protobuf_test protobuf_test.cpp ${PROTO_SRC} ${PROTO_HEADER})
target_include_directories(protobuf_test PUBLIC ${PROTOBUF_INCLUDE_DIRS} ${CMAKE_CURRENT_BINARY_DIR})
target_link_libraries (protobuf_test PUBLIC proto ${PROTOBUF_LIBRARY} glog Boost::date_time Boost::filesystem Boost::iostreams)
