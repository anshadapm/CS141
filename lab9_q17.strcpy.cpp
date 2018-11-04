//strcpy means copy a string from one array to next
#include <iostream>
#include <stdio.h>
using namespace std;

void strcpy()
{
  char str1[10],str2[10],*p,*q;
  cout<<"enter a string\n";
  cin>>str1;
  q=str1;p=str2;
  while(*q!='\0'){
    if(*q!='\0'){
       *p=*q;
       p++;
       q++;}
    else if(*q=='\0'){*p=='\0';}
                        }
  p=str2;
  cout<<"copied string\n";
  while(*p!='\0'){
           cout<<*p;p++;}
           }
int main()
{ strcpy();            
  return 0;
}
