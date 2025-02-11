#include <iostream>
#include <string>
#include <cctype>


int factorial(int n) 
{
   if (n <= 1) return 1;
   return n * factorial(n - 1);
}


int evaluateSimpleExpression(const std::string &expr)
{
  int result = 0;
  int current = 0;
  char lastOperator = '+';
  
  for (size_t i=0; i < expr.length(); ++i)
  {
   
   char c = expr[i];

   if (isdigit(c))
   {
    current = current * 10 + (c - '0'); 
   }
   else if (c == '!')
   {
    current = factorial(current);
   }
   else 
   {
    if (lastOperator == '+') result += current;
    else if (lastOperator == '-') result -= current;
    else if (lastOperator == '*') result *= current;
    else if (lastOperator == '/') result /= current;


    current = 0;
    lastOperator = c; 
   }
  
  }

   if (lastOperator == '+') result += current;
   else if (lastOperator == '-') result -= current;
   else if (lastOperator == '*') result *= current;
   else if (lastOperator == '/') result /= current; 

return result;
}

int evaluateExpression(const std::string &expr) 
{
   std::string simplifiedExpr;
    for (size_t i = 0; i < expr.length(); ++i)
    {
     if (expr[i] == '(')
     {
      int count = 1;
      size_t j = i + 1;
      while (j < expr.length() && count > 0)
      {
       if (expr[j] == '(') ++count;
       else if (expr[j] == ')') --count;
       ++j;
      }
       int subResult = evaluateExpression(expr.substr (i + 1, j - i - 2));
       simplifiedExpr += std::to_string(subResult);
       i = j - 1; 
     }
      else 
      {
       simplifiedExpr += expr[i];
      }
    }
    return evaluateSimpleExpression(simplifiedExpr);
}

int main() 
{
   std::string expression;
   std::cin >> expression;
   
   try
   {
   int result = evaluateExpression(expression);
   std::cout << result << std::endl;
   
   }
   catch (const std::exception &e)
   {
    std::cout << "Eror: " << e.what() << std::endl;
   }

return 0;

}





