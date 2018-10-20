//Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)

//include library
#include<iostream>
using namespace std;

int AscOrd(int arr[],int n){
    int c;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] > arr[j]){
                c = arr[i];
                arr[i] = arr[j];
                arr[j] = c;
                 }
            }
      }
cout<<" Numbers in ascending Order : ";
    for (int i = 0; i < n; ++i){       
        cout<<arr[i]<<" ";        
                   }
        cout<<endl;
    return 0;
    }

int Ksmall(int arr[], int n, int k){
    int i=(k-1);
    cout<<k<<"th smallest element is "<<arr[i]<<endl;
    return 0;
    }
                        
int DscOrd(int arr[],int n){
    int c;
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (arr[i] < arr[j]){
                c = arr[i];
                arr[i] = arr[j];
                arr[j]=c;
                   }
           }
      }
cout<<" Numbers in descending Order : ";
    for (int i = 0; i < n; ++i){       
        cout<<arr[i]<<" ";        
                   }
        cout<<endl;
    return 0;
    }
int Klarge(int arr[], int n, int k){
    int i=(k-1);
    cout<<k<<"th largest element is "<<arr[i]<<endl;

    return 0;
    }


//main function
int main(){
 int i,n,k;
 //asking no of elements
 cout<<"enter total no of elements";
 cin>>n;
 int arr[n];
 //declare array
 for(int i=0;i<n;i++){
                   
                   cout<<"enter an element:"<<i<<endl;
                   cin>>arr[i];
                     }
 cout<<"enter the to find kth element";
 cin>>k;
 AscOrd(arr,n);
 Ksmall(arr,n,k);
 DscOrd(arr,n);
 Klarge(arr,n,k);
 
 return 0;
 }
