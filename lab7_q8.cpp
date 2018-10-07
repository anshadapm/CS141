//8. Write a C++ program to find sum of digits of a given number using recursion

//include library
#include<iostream>
using namespace std;

int foo(int num,int sum){
        if(num==0){return 0;}
        else{
           sum=sum+num%10;
           num=num/10;
           return num%10+foo(num,sum);
                }
}


//main function
int main(){
  //declaring variable
  int num,sum;
  //asking a number
  cout<<"enter a number";
  //record the number
  cin>>num;
  foo(num,sum);
  cout<<foo(num,sum)+num%10;
  return 0;
}
