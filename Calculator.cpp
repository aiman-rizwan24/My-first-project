#include <iostream>
using namespace std;

int main()
{
  int a,b;
  char op;
  cout << "Enter an operator:" << endl;
  cin >> op;
  cout << "Enter two numbers: ";
  cin >> a >> b;
 switch(op) 
{
   case '+':
   cout <<a<< "+" <<b<<"="<< a + b << endl;
   break;
   case '-':
   cout <<a<< "- " <<b<<"="  << a - b<< endl;
   break;
   case '*':
   cout <<a<< "* " <<b<< "*" << a * b << endl;
   break;
   case '/':
       if(b!= 0)
   cout <<a<< "/" <<b<<"=" << a / b << endl;
       else
   cout << "Error! Division by zero." << endl;
   break;
  default:
  cout << "Invalid operator!" << endl;
 }

    return 0;
}
