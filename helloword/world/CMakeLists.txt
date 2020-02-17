cmake_minimum_required(VERSION 3.0)
aux_source_directory(. DIR_WORLD_SRCS)
add_library(world ${DIR_WORLD_SRCS})
