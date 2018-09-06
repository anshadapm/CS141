//print rompus pattern
/*     *****   
      *****
     *****
    *****
   *****
*/


//include library
#include<iostream>
using namespace std;
int main(){
   int n=5;
     //print (4-i) space, 5 star
     for(int i=0; i<5; i++){
                //print (n-i) spaces
                for(int j=0; j<(4-i); j++){cout<<" ";}
                //print 5 stars
                for(int j=(4-i); j<(9-i); j++){ cout<<"*";} 
                //print space  
                for(int j=((4-i)+5); j<n; j++){cout<<" ";} 
    cout<<endl;
   } 
   return 0;
}
