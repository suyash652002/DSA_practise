#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void sum(int a[], int n)
{
    int max = INT32_MIN;
    int min = INT32_MAX;
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Sum of maximum and minimum number is: " << max + min;
    
}
int main()
{
    int n = 5;
    int array[5] = { -2, 1, -4, 5, 3};
    sum(array, n);

}