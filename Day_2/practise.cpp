#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int>a, int s, int e, int k)
{
    // s = 0; 
    // e = a.size()-1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] > k)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> a = {4,5, 6, 7, 0, 1, 2};
    int k = 6;
    cout << "the pivot index is : " << binary_search(a, 0, 3, k);

}