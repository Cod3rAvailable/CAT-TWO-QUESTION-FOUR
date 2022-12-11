#include<iostream>
using namespace std;
  
// Global Namespace Scope 
int x = 0; 
   
int main()
{
  // Local Namespace Scope   
  int x = 10;
  // function prototye here in int x =10
  cout << "Value of global namespace is " << ::x;
  cout<< "\nValue of local namespace is " << x; 
  return 0;
}

// EXPLANATION 
/*Global Namespace Scope is a variable that is declared outside of all functions and blocks. It is declared at the top of the program and 
can be accessed from any part of the program

Local Namepsace Scop is a variable that is declared inside a block {}. They cannot be accessed or used outside the block

Function Prototype Scope is a declaration of the function that tells the program about the 
type of the value returned by the function and the number and type of arguments

Function Scope is the regions where a function can be accessed
*/
