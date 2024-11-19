// to fix editor issue:
// https://stackoverflow.com/questions/76333914/nvim-clangd-compile-commands-json-with-metaproject
#include <fmt/core.h>
#include <iostream>
// using namespace fmt;

int main() {
  int a_int = 1234;
  long a_long = 93840234;
  long long a_long_long = -23094230842;
  float a_float = 0.1234;

  fmt::println("Here's an int {}", a_int);

  std::string msg = fmt::format("An int {}\n"
                                "A long {}\n"
                                "A long long {}\n"
                                "A float {}\n",
                                a_int, a_long, a_long_long, a_float);

  fmt::println("The result is:");
  fmt::print("{}", msg);
  fmt::println("Printing again...\n");
  std::cout << msg;

}
