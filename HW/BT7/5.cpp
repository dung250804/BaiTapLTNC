#include <iostream>

using namespace std;

char* weird_string() { 
   char c[] = “123345”;
   return c; 
}

int main ()
{
    char *ptr = weird_string();
    cout << ptr;
}
//Message
//[Error] stray '\223' in program
//[Error] stray '\224' in program
//[Error] initializer fails to determine size of 'c'
//[Error] array must be initialized with a brace-enclosed initializer
//[Warning] address of local variable 'c' returned [-Wreturn-local-addr]
