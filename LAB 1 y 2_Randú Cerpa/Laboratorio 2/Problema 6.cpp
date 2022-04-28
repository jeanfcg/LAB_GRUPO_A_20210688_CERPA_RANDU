#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void F(int n)//Fibonacci

{
 if (n == 1) {
 cout << 0 << endl;
 return;
 
 }
 int x = 0;
 int y = 1;
 int z;
 cout << x << " " << y;
for (int i = 3; i <= n; i++)
 {
 z = x + y;
 cout << " " << z;
 x = y;
 y = z;
 }
}
int main()

{
 int n;
 cout << "Cantidad: ";
 cin >> n;
 F(n);
 return 0;

}
