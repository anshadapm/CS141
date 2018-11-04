#include <iostream>
using namespace std;

//comparing length of string
int strlen(char str[]){
   for(int i=0;i<20;i++){
             if(str[i]=='\0'){
                              return i; 
                         }
                }
   }
int strc(char str1[],char str2[]){
    int a=strlen(str1),b=strlen(str2);
    for(int i=0;i<20;i++){
                 if(str1[i] = str2[i]){
                          return 1;}
                  else{return 0;}
                        }
               }

int main(){ 
  int a,b,c;
  char str1[20],str2[20];
  cout<<"enter first string\n";
  cin>>str1;
  cout<<"enter second string\n";
  cin>>str2;
  a=strlen(str1);
  b=strlen(str2);
  if(a==b){cout<<"both strings are of same length\n";}
  else{cout<<"both strings are of different length\n";}
  c=strc(str1,str2);
  if(c==1){cout<<"both strings are equel\n";}
  else if(c!=1){cout<<"both strings are not equel\n";}
  return 0;
     }
