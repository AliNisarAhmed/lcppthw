#include <fmt/core.h>

enum color { RED, GREEN, BLUE };

int main() {
  int which_door = 4;

  switch (which_door) {
  case 1:
    fmt::println("DOOR #1");
    break;
  case 2:
    fmt::print("DOOR #2");
  case 3:
    fmt::println("DOOR #3");
    break;
  case 4:
    fmt::println("DOOR #4");
    break;
  default:
    fmt::println("BAD DOOR!");
  }

  color what_color = RED;
  switch (what_color) {
  case color::RED:
    fmt::println("COLOR IS RED");
    break;
  case color::BLUE:
    fmt::println("COLOR IS BLUE");
    break;
  case color::GREEN:
    fmt::println("COLOR IS GREEN");
    break;
  default:
    // how can you hit this?
    fmt::println("BAD COLOR");
  }
}
