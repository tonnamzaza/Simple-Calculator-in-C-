//# include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  char op;
  float num1, num2, result;

  cout << "Enter first operands: ";
  cin >> num1; 
  cout << "Enter operator: +, -, *, /, p, r: "; 
  cin >> op;
  cout << "Enter second operands: ";
  cin >> num2;

  if(op =='+') 
  result = num1 + num2;
      
  else if (op == '-')
  result = num1 - num2;
      
  else if (op == '*')
  result = num1 * num2;
       
  else if (op == '/') 
  result = num1 / num2;
  
  else if (op == 'p') 
  result = pow(num1, num2);
  
  else if (op == 'r') 
  result = sqrt(num1) ;
  
  else {
   cout << "Error! operator is not correct";

  }
  // Printing the result
    if (result != -DBL_MAX)
       cout << num1 << " op " << num2 << " = " << result ;
       
    return 0;
}