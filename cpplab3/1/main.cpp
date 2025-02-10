#include <iostream>

int main ()
{
   int m,n;

   std::cin >> m;
   std::cin >> n;

   if ( 1 < m || m > 100 || n < 1 || n > 100)
   
   

    for (int i = 0; i < m; ++i) 
    {
      for (int j = 0; j < n; ++j) 
       {
        std::cout << '*';
       }
       std::cout << std::endl;
    }



return 0;
}
