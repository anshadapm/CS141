/*
11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof )
*/
//include library 
#include<iostream>
using namespace std;

//main functionn
int main(){
   //declaring variables
   int i,*i1; i=1; i1=&i;       
   char a,*a1; a='a'; a1=&a;
   bool b,*b1; b=1; b1=&b;
   float c,*c1; c=1.23556; c1=&c;
   double d,*d1; d=1.24521113444; d1=&d;
   
   //to print the size
   cout<<"Size of integer variable is "<<sizeof(i)<<" and correspondig pointer is "<<sizeof(i1)<<endl;
   cout<<"Size of charecter variable is "<<sizeof(a)<<" and correspondig pointer is "<<sizeof(a1)<<endl;
   cout<<"Size of boolean variable is "<<sizeof(b)<<" and correspondig pointer is "<<sizeof(b1)<<endl;
   cout<<"Size of float variable is "<<sizeof(c)<<" and correspondig pointer is "<<sizeof(c1)<<endl;
   cout<<"Size of double variable is "<<sizeof(d)<<" and correspondig pointer is "<<sizeof(d1)<<endl;

   return 0;
}
