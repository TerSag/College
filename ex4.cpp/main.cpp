#include <iostream>


int main () 
{
   double A,B,C;

   std::cout << "Введіть довжини сторин паралелепіпеда (A,B,C):";
   std::cin >> A >> B >> C;

   if (A > 0 && B > 0 && C > 0 )
  {
    std::cout << "Об'єм паралелепіпеда:" << A * B * C << std::endl;
    std::cout << "Площа поверхні паралелепіпеда:" << 2 * ( A * B + B * C + A * C) << std::endl;
  
   }


return 0;
}
