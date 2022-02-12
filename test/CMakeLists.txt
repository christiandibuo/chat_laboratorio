add_subdirectory(./lib/googletest-release-1.11.0)
set(gtest_SOURCE_DIR, ./lib/googletest-release-1.11.0)
include_directories(${gtest_SOURCE_DIR} /include ${gtest_SOURCE_DIR})

set(SOURCE_FILES_TEST runAllTests.cpp UserTest.cpp ChatTest.cpp NotifierTest.cpp)
add_executable(runAllTests ${SOURCE_FILES_TEST})
target_link_libraries(runAllTests gtest gtest_main core)
