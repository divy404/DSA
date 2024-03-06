#include<iostream>
using namespace std;
void getElements(int arr[], int n){
    if(n==0||n==1){
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"SECOND SMALLEST ELEMENT IS:"<<small<<endl;
    cout<<"SECOND LARGEST ELEMNTS IS:"<<large<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getElements(arr,n);
    return 0;
}