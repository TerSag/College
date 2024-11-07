#include <iostream>
#include <iomanip>

int main () 
{

   float P , R;
   int T;

   std::cout << "Введіть суму позики: ";
   std::cin >> P;
   std::cout << "Введіть період позики: ";
   std::cin >> T;
   std::cout << "Введіть процентну ставку: ";
   std::cin >> R;

   float I = (P * T * R) / 100;

   std::cout << std::fixed << std::setprecision(2);
   std::cout << "Відсоток (float): " << I << std::endl;
   std::cout << "Відсоток (int): " << static_cast<int>(I) << std::endl;

   
return 0;
}
