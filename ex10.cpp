#include <fmt/core.h>

int main() {
  int peanuts = 1000;
  int people = 100;

  fmt::println("{0:d} peanuts and {1} people", peanuts, people);

  peanuts += 10;
  people -= 10;

  fmt::println("After += and -= peanuts={}, people={}", peanuts, people);

  int tigers = peanuts * people;
  long lots_of_tigers = tigers * 5;

  fmt::println("tigers={}, lots_of_tigers={}", tigers, lots_of_tigers);

  double fewer_tigers = lots_of_tigers / 23;
  fmt::println("fewer_tigers={0:.2f}", fewer_tigers);

  fewer_tigers /= 43.0f;
  fmt::println("fewer_tigers again={}", fewer_tigers);

  ++tigers;
  fmt::println("one more tiger={}", tigers);
  return 0;
}
