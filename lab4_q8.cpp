//library
#include<iostream>
using namespace std;
int main(){
//find average of five subject
int a,b,c,d,e,t,avg,per;//declaration
cout<<"mark in first subject";
cin>>a;
cout<<"mark in second subject";
cin>>b;
cout<<"mark in third subject";
cin>>c;
cout<<"mark in fourth subject";
cin>>d;
cout<<"mark in fifth subject";
cin>>e;
t = a+b+c+d+e;
cout<<"total marks "<<t<<endl;
avg=t/5;
cout<<"average mark"<<avg<<endl;
per=t*100/500;
cout<<"percentage of your marks"<<per<<endl;
return 0;
}
