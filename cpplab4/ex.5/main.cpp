#include <iostream>

bool isPalindrome(int n) {

	if (n < 0) return false;
	if (n < 10) return true;

	int original = n; 
	int reversed_n = 0;

while (n > 0) {
        int digit = n % 10;
        reversed_n = reversed_n * 10 + digit;
        n /= 10;             
}
	 return original == reversed_n;
}

int main() {

    std::cout << "Паліндроми першої сотні, квадрати яких теж є паліндромами:" << std::endl;

    for (int i = 1; i <= 100; ++i) {

        if (isPalindrome(i)) {
            int square = i * i;
            if (isPalindrome(square)) {
                std::cout << i << " (квадрат: " << square << ")" << std::endl;
            }
        }
    }

    return 0;
}
