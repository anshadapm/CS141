//to make sqare star pattern

//include library
#include<iostream>
using namespace std;
int main(){
  //declaring variable
  int n;
  //to get input
  cout<<"Enter a number";
  //to record input
  cin>>n; 
  //looping 
   for(int i=0; i<n; i++){
          //loop in the loop
          for(int j=0; j<n; j++){ 
                   //print stars
                   cout<<"*";
                   }
      //to print n*n starr
      cout<<endl;
      }            
return 0;
}
