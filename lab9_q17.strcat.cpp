#include <iostream>
#include <stdio.h>
using namespace std;

void strcat()
{
 char str1[20],str2[10],*p,*q;
  cout<<"enter first string\n";
  cin>>str1;
  cout<<"enter second string\n";
  cin>>str2;
  q=str1;p=str2;
  while(*q!='\0')
     {q++;}
  while(*p!='\0'){    
       *q=*p;
       p++;
       q++;
       if(*p=='\0'){*q='\0';}
                        }
  q=str1;
  cout<<"resulting string is\n";
  while(*q!='\0'){
           cout<<*q;q++;}
            }
int main(){
     strcat();
     return 0;
             }
