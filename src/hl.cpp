/**
  * @file hl.cpp
  * @author Pankaj Sharma (pankajmain@live.com)
  * @brief Just to help with layout of VS Code
  * @version 0.1
  * @date 2023-01-21
  * //////////////////////////////////////////////////////////////////////////////////////
  * @copyright Copyright (c) 2023
  */

#include <iostream>
#include <format>

int main(int argc, char const* argv[]) {
  std::cout << std::format("Hello World!\n");
  for (size_t i = 0; i < 90; i++)
    std::cout << i % 10;
  return 0;
}