#include <iostream>


int main()
{
  // Lambda & auto
  int member=10;
  //( = ) -> this means that all variables have to be captured
  auto endGame = [=](int a, int b){ std::cout << a+b+member<< std::endl;};

  // Call Inline Func
  endGame(4,5);

  return 0;

}

