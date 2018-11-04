/*
16. Contrary to Exercise 5, here, we want to show string repeatedly by shifting top character of string from right to left. Refer to a below execution example. Write a below source code, complement the expression hidden by "******" to meet this requirement.
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
int i;
char str[20], *p;

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string
p=&str[i];

// Show string by shifting top character of string to right
for(int i=0;i<11;i++){
    for(int j=10-i;j<10;j++){
              cout<<str[j];
                   }
         cout<<endl;
     }

return (0);
}
