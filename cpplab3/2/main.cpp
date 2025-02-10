#include <iostream>

int main() {
    int m, n, k;

    std::cout << "Введіть кількість рядків (m): ";
    std::cin >> m;
    std::cout << "Введіть кількість стовпців (n): ";
    std::cin >> n;
    std::cout << "Введіть товщину межі (k): ";
    std::cin >> k;

    
    if (k < 1 || k >= m || k >= n || m > 100 || n > 100) {
        std::cout << "Помилка: Неправильні вхідні дані!" << std::endl;
        return 1;
    }

    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
           
           if (i < k || i >= m - k || j < k || j >= n - k) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

