/*
12. Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.
*/

//include library 
#include<iostream>
using namespace std;

//main functionn
int main(){
  //declare variables
  int a,b,*p;

  //point p to a
  p=&a; 
 
  //print values 
  cout<<"\ninitial values(pointed p to a )"<<endl;
  cout<<"value of a="<<a<<", value of b="<<b<<" and value of *p="<<*p<<endl;

  //assign the values for a and b
  a=2,b=3; 

  //print values
  cout<<"\nvalue after assigning values"<<endl;
  cout<<"value of a="<<a<<", value of b="<<b<<" and value of *p="<<*p<<endl;

  //store value of p in b
  b=*p;

  //print values
  cout<<"\nvalue after store p in b"<<endl;
  cout<<"value of a="<<a<<", value of b="<<b<<" and value of *p="<<*p<<endl; 

  //point p to b
  p=&b;

  //print values
  cout<<"\nvalue after point p to b"<<endl;
  cout<<"value of a="<<a<<", value of b="<<b<<" and value of *p="<<*p<<endl;

  return 0;
}
