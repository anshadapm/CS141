//comparing length of string
#include <iostream>
using namespace std;

int strlen(char str[]){
   for(int i=0;i<20;i++){
             if(str[i]=='\0'){
                              return i; 
                         }
                }
   }

int main(){ 
 char str[20];
 cout<<"enter a string\n"; 
 cin>>str;
 int n=strlen(str);
 cout<<"length of the string is "<<n<<endl;
 return 0;
}
