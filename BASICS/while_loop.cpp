#include<iostream>
using namespace std;

int main() {
  // Write your code here
int n;
cin >> n;
int even=0,odd=0;
while (n > 0) {
	int last=n%10;
	if(last%2==0){
		even+=last;
	}
	else{
		odd+=last;
	}
	n=n/10;
}
cout<<even<<" "<<odd;
}
