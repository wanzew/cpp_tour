#include <iostream>
#include <string>
#include <vector>
//-----------------------------------------------------
class Test {
public:
private:
   int x = 5;      // Works
   int y = { 25 }; // Works
   int z{ 125 };   // Works
};
//-----------------------------------------------------
class Test2 {
public:
private:
   int x = 5;      // Works
   int y = { 25 }; // Works
   int z{ 125 };   // Works
   int a(125);     // ERROR!
};

int main() {
  char c1{50};    // Fine, 50 can fit in a char
  char c2{1234};  // ERROR - Can't narrow 1234 -> char
  char c3 = 1234;

  int i1{10};    // Fine
  int t2{10.0};  // ERROR - Can't narrow float -> int
  int t3 = 10.0;
}

