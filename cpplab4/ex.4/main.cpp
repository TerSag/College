#include <iostream>

int main () 
{
    int n;
    std::cout<<"Введіть n";
    std::cin>>n;


    int* factors = new int [n];
    int  count = 0;


    int temp = n;
    for ( int i = 2; temp > 1; i++ ) {
       while ( temp % i == 0 ) { 
           factors[count++] = i;
           temp /= i;


       }
    }


    std::cout<< n << " = ";
    for ( int i = 0; i < count; i++ ) {
        std::cout<< factors [i];
        if ( i < count - 1 ) std::cout<< ", ";
        
    }
    std::cout<< std::endl;
 

delete[] factors;
return 0;
}
