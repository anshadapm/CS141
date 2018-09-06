//print rigt angle triangle star pattern
/*         *
          **
         ***
        ****
       *****
*/

//include library
#include<iostream>
using namespace std;
int main(){
   int n=5;
     //print (n-i) space, 
     for(int i=0; i<5; i++){
                //print (n-i) spaces
                for(int j=0; j<(4-i); j++){cout<<" ";}
                //print stars
                for(int j=(4-i); j<5; j++){cout<<"*";}                
    cout<<endl;
   } 
   return 0;
}
