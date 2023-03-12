#include <iostream>
#include <string>
using namespace std;

long F(int n) { 
   if (n == 0) return 0; 
   if (n == 1) return 1; 
   return F(n-1) + F(n-2); 
}


int main() 
{
	int n = 45;
	cout << F(n);
}


