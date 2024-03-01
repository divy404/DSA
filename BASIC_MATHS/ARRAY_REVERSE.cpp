#include<iostream>
using namespace std;
void printARRAY(int arr[], int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
void reverseArray(int arr[],int n){
    int p1=0, p2=n-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
    printARRAY(arr,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    return 0;

}