//library
#include<iostream>
using namespace std;
int main(){
//calculate simple interest
float i,p,t,r;
cout<<"investment";
cin>>p;
cout<<"interest rate";
cin>>r;
cout<<"no of years";
cin>>t;
i=(p*r*t)/100;
//print interest
cout<<"interest is "<<i<<endl;
return 0;
}
