//3. Write a C++ program to print all even or odd numbers in given range using recursion

//include library
#include<iostream>
using namespace std; 

int foo(int i, int b){      
        if(i>(b)){}
         else{
             cout<<" "<<i;
            foo(i+2,b);
             }              
    }
//main function
int main(){ 
  //declaring variable
  int a,b;
  //asking numbers
  cout<<"enter first and second number";
  //record the number
  cin>>a>>b;
  foo(a,b);
  return 0;
}
