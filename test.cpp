
#include <cstdio>

class something { 
  void say_hello();

  int something;
};

void something::say_hello() {
  std::printf("hello, %d\n", something);
}

