#include <iostream>
#include <iomanip> 

int main () 
{
   int opt;
   double temp;

   std::cout << "Введіть 1 для переведення Цельсія у Фаренгейт або 2 для переведення Фаренгейта у Цельсій: " << std::endl;
   std::cin >> opt;
   std::cout << "Введіть значення температури: " << std::endl;
   std::cin >> temp;

if (opt == 1) {
        if (temp < -273.15) {
            std::cout << "Занадто холодно для підрахунку!" << std::endl;
        } else {
            double convertedTemp = (temp * 9.0 / 5.0) + 32.0;
            std::cout << "Температура в Фаренгейтах: " << std::fixed << std::setprecision(2) << convertedTemp << std::endl;
        }
    } else if (opt == 2) {
        if (temp < -459.67) {
            std::cout << "Занадто холодно для підрахунку!" << std::endl;
        } else {
            double convertedTemp = (temp - 32.0) * 5.0 / 9.0;
            std::cout << "Температура в Цельсіях: " << std::fixed << std::setprecision(2) << convertedTemp << std::endl;
        }
    } else {
        std::cout << "Неправильний вибір! Введіть 1 або 2." << std::endl;
    }


return 0;
}
