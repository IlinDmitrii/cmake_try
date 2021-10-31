add_library(
	fun
	fun.h
	secondary.cpp
)
target_include_directories(fun PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")