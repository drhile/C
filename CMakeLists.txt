cmake_minimum_required(VERSION 3.10)
project(MathQuestions)

set(HEADERS
	src/msg.h
	src/seed.h
)

set(SOURCES
	src/main.c
)

add_executable(${CMAKE_PROJECT_NAME} ${HEADERS} ${SOURCES})
target_link_libraries(${CMAKE_PROJECT_NAME})
