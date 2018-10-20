/* Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

//include library
#include<iostream>
using namespace std;

// function to merge
int merge(int arr[],int arr1[],int arr2[], int n,int m){
 //to store ellemennts of arr to arr2
 for(int i=0;i<n;i++){
             arr2[i]=arr[i];}
 //to store ellemennts of arr1 to arr2
 for(int i=0;i<n+m;i++){
             arr2[i+n]=arr1[i];}
 //to print arr2
 cout<<"elemenets in merged array"<<endl;
 for(int i=0;i<(m+n);i++){ 
             cout<<arr2[i]<<" ";}
 cout<<endl;
 return 0;
 }

//function to find largest
int largest(int arr2[],int k){
            for(int i=0;i<k;i++){
                   if(arr2[0]<arr2[i]){
			arr2[0]=arr2[i];	
                   } 
            }
		cout<<"largest element is "<<arr2[0]<<endl;
                return 0;
}

//function to find smallest
int smallest(int arr2[],int k){ 
            for(int i=0;i<k;++i){
                   if(arr2[0]>arr2[i]){
                         arr2[0]=arr2[i];
                                     } 
                                 }
                        cout<<"smallest element is "<<arr2[0]<<endl;
                         return 0;
                           }

//main function
int main(){
//declaration of variable
int n,m,i,k;
//asking questions
cout<<"no.of elements in first array:";
cin>>n;
 //declare arrays
int arr[n];
for(int i=0;i<n;i++){                   
                   cout<<"enter an element:"<<i<<endl;
                   cin>>arr[i];
                     }
//asking questions
cout<<"no.of elements in second array:";
cin>>m;
int arr1[m];
for(int i=0;i<m;i++){                   
                   cout<<"enter an element:"<<i<<endl;
                   cin>>arr1[i];
                     }
int arr2[m+n];
merge(arr,arr1,arr2,n,m);
k=m+n;
largest(arr2,k);
smallest(arr2,k);
return 0;


}
