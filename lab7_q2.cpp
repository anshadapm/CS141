
//2. Write a C++ program to print all natural numbers between 1 to n using recursion.
 

//include library
#include<iostream>
using namespace std;

int foo(int i, int n){
   if(i == (n+1)){
          return 1;
           }
   else{
        cout<<" "<<i;
        i++;
        foo(i,n);
           }
   return 1;
  }

//main function
int main(){
  //declaring variable
  int n;
  //asking a number
  cout<<"enter a number";
  //record the number
  cin>>n;
  foo(1,n);
  return 0;
}

 
