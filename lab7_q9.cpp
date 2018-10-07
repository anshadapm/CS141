//9. Write a C++ program to find factorial of any number using recursion.

//include library
#include<iostream>
using namespace std;

int foo(int n){
      if(n==0){return 1;}
      else{
          return n*foo(n-1);
          cout<<foo(n);
           }
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
