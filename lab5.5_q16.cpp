//print pyramid star pattern
/*        *
         ***
        *****
       *******
      *********
*/ 


//include library
#include<iostream>
using namespace std;
int main(){
   int n=9;
   //print (9-i)space, (2i+1)star
      for(int i=0; i<5; i++){
               //loop for print spaces
               for(int j=0; j<(5-i); j++){
                         //print space
                         cout<<" ";
                         }
               //loop for print stars
               for(int j=(4-i); j<(5+i); j++){
                          //print stars
                         cout<<"*";
                         }
      cout<<endl;
       }
return 0;
}
