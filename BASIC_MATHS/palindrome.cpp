bool palindrome(int n)

{

    // Write your code here

    int x=n;

    int rev=0;

    while(n){

        int z=n%10;

        rev=rev*10+z;

        n=n/10;

    }

    return (rev==x);

}