#include<iostream>
using namespace std;

int recur(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return recur(n - 1) + recur(n - 2);
}

int main()
{
    int n;
   cin>>n;
    
    cout<<recur(n)<<endl;
}