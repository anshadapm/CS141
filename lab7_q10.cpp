//. Write a C++ program to generate nth Fibonacci term using recursion

//include library
#include<iostream>
using namespace std;

int foo(int n){
    if(n==1){return 0;}
    else if(n==2){return 1;}
    else{return foo(n-1)+foo(n-2);}
}

//main function
int main(){
  //declaring variable
  int n;
  //asking a number
  cout<<"enter a number";
  //record the number
  cin>>n;
  foo(n);
  cout<<foo(n);
  return 0;
}
