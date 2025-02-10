#include <iostream>
#include <iomanip>

int main () 
{

   int a;
   

   std::cin >> a;
   
   if ( a % 2 == 0 )
   {
    std::cout << "Yes" << std::endl;
   }
   else 
   {
    std::cout << "No" << std::endl;
   }

   if ( a % 8 == 0 ) 
   {
    std::cout << "Yes" << std::endl;
   }
   else 
   {
    std::cout << "No" << std::endl;
   }
   if ( a % 16 == 0 )
   {
    std::cout << "Yes" << std::endl;
   }
   else 
   {    
    std::cout << "No" << std::endl;
   }

  std::cout << std::oct << a << std::endl; 
  std::cout << std::hex << a << std::endl;


return 0;
}

