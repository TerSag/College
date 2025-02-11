#include <iostream>
#include <iomanip>


int main () 
{
   double R;
   const double pi = 3.14;
   


   std::cout << "Введить радіус кола:";
   std::cin >> R;



   if (R > 0) 
   {
     std::cout << std::fixed  << std::setprecision(2);
     std::cout << "Площа круга:" << pi * R * R << std::endl;
     std::cout << "Довжина кола:" << 2 * pi * R << std::endl;

    }


return 0;
}
