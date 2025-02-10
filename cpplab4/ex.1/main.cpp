#include <iostream>

int main () 
{

  int n;
  std::cout<<" n= "<<std::endl;
  std::cin>> n; 



   for ( int a=1; a<=n; a++ ) {
   for ( int b=1; b<=n; b++ ) {
       int c = a * a + b * b;
       if ( c <= n) {
          std::cout<< a << "," << b << "," << c << ","<<std::endl;
     }
   }
 }



  return 0;
}
