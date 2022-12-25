#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int kth_max_element(int a[], int n, int k)
{
    sort(a, a+n);
    return (a[k-1]);
}
int main()
{
    int array[5] = {4, 6, 7, 2, 7};
    int k = 3;
    cout << kth_max_element(array, 5, k);
}