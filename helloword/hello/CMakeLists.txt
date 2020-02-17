cmake_minimum_required(VERSION 3.0)
aux_source_directory(. DIR_HELLO_SRCS)
add_library(hello ${DIR_HELLO_SRCS})
