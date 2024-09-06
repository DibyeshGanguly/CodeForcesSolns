#include <iostream>

int main()
{
  int w;
  std::cin >> w;

  if (w % 2 == 0)
  {
    if (w==2)
      std::cout << "NO" << std::endl;
    else
      std::cout << "YES" << std::endl;
  }

  else
  {
    std::cout << "NO" << std::endl;
  }
}
