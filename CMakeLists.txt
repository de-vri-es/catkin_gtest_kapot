cmake_minimum_required(VERSION 3.1)
project(catkin_gtest_kapot)

find_package(catkin)
catkin_package()

catkin_add_gtest(catkin_gtest_kapot_test_boolean "test/boolean.cpp")
