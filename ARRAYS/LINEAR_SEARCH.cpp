#include<iostream>
using namespace std;
 int search(int arr[], int n, int num)
 {
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==num)
        return 1;
    }
    return -1;
 }
 int main(){
     int n;
     cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       

    }
    int num;
    cin>>num;
     int k= search(arr,n,num);

   
 }