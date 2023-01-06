#include<iostream>
using namespace std;
int count_digit(int n)
{
    // if(n==0)
    // {

    // }
    int k = n;
    int count = 0;
    while(k!=0)
    {
        k /= 10;
        
        ++count;
    }
    return count;
}
int main()
{
    int n = 12455;
    cout << "The number of digits in " << n << " is " << count_digit(n);
}