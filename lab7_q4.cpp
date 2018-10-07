//4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.

//include library
#include<iostream>
using namespace std;

int foo(int i, int n){
    if((n+1)==i){return 0;}
    else{
      return n+foo(i,(n-1));
      }
} 

//main function
int main(){
  //declaring variable
  int i,n;
  //asking a number
  cout<<"enter a number";
  //record the number
  cin>>n;
  foo(i,n);
  cout<<foo(i,n);
  return 0;
}
