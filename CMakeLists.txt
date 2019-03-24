cmake_minimum_required( VERSION 3.0 )

# project name
project( firstUnitTest )
enable_testing()

find_package(Boost COMPONENTS unit_test_framework REQUIRED)
                      
# include files
include_directories( ./include ./src ./tests )
include_directories(${Boost_INCLUDE_DIRS})

# target
add_executable( test_constructors ./src/my_class.cpp ./tests/my_test.cpp)

target_link_libraries(test_constructors ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

# tests
add_test( NAME test_constructors COMMAND test_constructors)
