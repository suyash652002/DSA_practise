#include<iostream>
using namespace std;
int is_palindrome(int n)
{
    int k = n;
    int rev = 0;
    while(k!=0)
    {
        int rem = k%10;
        k/=10;
        rev = rev*10+rem;
    }
    if(rev == n)
    {
        return 1;
    }
    else 
    {
         return 0;
    }
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    if(is_palindrome(n)==true)
    {
        cout << "It is palindrome";
    }
    else{
        cout << "It is not palindrome";
    }
}