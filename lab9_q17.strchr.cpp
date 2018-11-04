
#include <iostream>
using namespace std;

int strchr(char str[],char a){
  for(int i=0;i<20;i++){
         if(str[i]==a)
         return i; }                       
}


int main(){ 
  char str[20],a;
  cout<<"enter a string\n"; 
  cin>>str;
  cout<<"enter a charecter that you need to find\n";
  cin>>a;
  int n = strchr(str,a);
  cout<<"first position of charecter "<<a<<" is "<<n+1<<endl;            
  return 0;
}
