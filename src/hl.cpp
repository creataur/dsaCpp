/**
  * @file hl.cpp
  * @author Pankaj Sharma (pankajmain@live.com)
  * @brief The obligatory hello world program to test programming environment
  * @version 0.1
  * @date 2023-01-21
  *
//////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
  * @copyright Copyright (c) 2023
  *
  */

#include <iostream>
#include <format>
#include <utility>


int main(int argc, char const* argv[]) {
  std::cout << std::format("Hello World! Again!\n");
  for (size_t i = 0; i < 90; i++)
    std::cout << i % 10;
  // sumInts(100, 5);
  return 0;
  ////////////////////////////////////////////////////////////
}