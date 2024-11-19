#include <iostream>
#include <sstream>
#include <string>

int main() {

  int a_int = std::stoi("12");
  long a_long = std::stol("12");
  long long a_long_long = std::stoll("12");
  unsigned long a_unsigned_long = std::stoul("12");
  unsigned long long a_unsigned_long_long = std::stoull("12");
  float a_float = std::stof("12.0");
  double a_double = std::stod("12.0");
  long double a_long_double = std::stold("12.0");

  std::string from_number = std::to_string(123456);
  std::string from_float = std::to_string(1.100f);

  std::ostringstream msg;

  msg << "From number " << from_number << '\n';
  msg << "From float " << from_float << '\n';

  std::basic_string msg_str = msg.str();

  std::cout << "The result is: " << '\n' << msg_str;

  return 0;
}
