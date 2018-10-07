//11. Write a C++ program to find GCD (HCF) of two numbers using recursion

//include library
#include<iostream>
using namespace std;

int foo(int a,int b){        
             if(b == 0){return a;}
             else {return foo(b, a%b);}
      }


//main function
int main(){
  //declaring variables
  int a,b;
  //asking numbers
  cout<<"enter two numbers";
  //recording numbers
  cin>>a>>b;
  foo(a,b);
  cout<<foo(a,b);
 return 0;   

}
