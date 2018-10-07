//1. Write a C++ program to find power of any number using recursion.

//include library
#include<iostream>
using namespace std;
//a^b
int foo(int a,int b){
    if(0==b){return 1;}
    else{
  return a*foo(a,(b-1));
  }

}

//main function
int main(){
  //declaring variable
  int a,b;
  //asking a number
  cout<<"enter two number";
  //record the number
  cin>>a>>b;
  foo(a,b);
  cout<<foo(a,(b));
  return 0;
}

