//. Write a C++ program to find sum of all even or odd numbers in given range using recursion.

//include library
#include<iostream>
using namespace std;
//odd
int foo(int i,int b){
              if(i>=b){}
              else{
                   return i+foo(i+2,b);
                     }
}

//main function
int main(){
  //declaring variable
  int i,a,b;
  //asking a number
  cout<<"enter two number";
  //record the number
  cin>>a>>b;
  foo(a,b);
  cout<<foo(a,b);
  return 0;
}
