#include <iostream>

int main ()
{
   const int a = 1000;
   int sieve[ a + 1] = {0};


   for ( int i=2; i * i <= a; i++) {
      if ( sieve [i] == 0) {
        for ( int j = i * i; j <= a; j +=i ) {
           sieve[j] = 1;
        }
      }
   }

   std::cout<< "Прості числа до " << a << ":/n";
   for ( int i = 2; i <= a; i++) {
       if ( sieve [i] == 0 ) {
         std::cout << i << " " ;
         
      }
   }

return 0;
}

