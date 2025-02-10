#include <iostream>
#include <iomanip>

int main () 
{

   double a, b;
  
   std::cin >> a;
   std::cin >> b;

   std::cout << std::fixed << std::setprecision(12);
   std::cout << ( a + b ) << std::endl;
   std::cout << ( a - b ) << std::endl;
   std::cout << ( a * b ) << std::endl;

   if ( b !=0 ) 
{
   std::cout << ( a / b ) << std::endl;

}


return 0;
}
