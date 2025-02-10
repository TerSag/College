#include <iostream>

int main ()
{
 char a;
 std::cin >> a;
 
 std::cout << static_cast<int>(a) << std::endl;
 std::cout << std::hex << static_cast<int>(a) << std::endl;


return 0;
}
