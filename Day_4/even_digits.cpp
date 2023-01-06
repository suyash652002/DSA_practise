#include<iostream>
using namespace std;
int evenly_divide(int n)
{
    int k = n;
    int count = 0;
    while(k!=0)
    {
        int rem = k%10;
        k/=10;
        if(rem>0 && n%rem==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n = 32739;
    cout << "The number of count of number which evenly divides the actual number is : " << evenly_divide(n);
}