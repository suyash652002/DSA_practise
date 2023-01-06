#include<iostream>
using namespace std;
int reverse(int n)
{
    int k = n;
    int rev = 0;
    while(k!=0)
    {
        int rem = k%10;
        rev = rev*10+rem;
        k /= 10;

    }
    return rev;
}
int main()
{
    int n = 1345;
    cout << "The reverse of " << n << " is : " << reverse(n);
}