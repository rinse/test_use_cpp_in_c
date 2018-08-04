
typedef struct tag_something {
  int something;
} something;

// confirmed in g++5.4
// use nm main.o to define this function
// it might contain the unuseable characters in c language though
void _ZN9something9say_helloEv(something* this_);

int main() {
  something s;
  s.something = 1000;
  _ZN9something9say_helloEv(&s);
}

