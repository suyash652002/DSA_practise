// This question is also known as Searching in rotated sorted array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_pivot(vector<int> &a, int n)
{
    int s = 0; 
    int e = n-1;
    while(s<e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] >= a[0])
        {
            s = mid+1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int binary_search(vector<int>&a, int start, int end, int k)
{
    int s = start;
    int e = end;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] == k)
        {
            return mid;
        }
        if(k>a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int find_position(vector<int>&a, int n, int k)
{
    int pivot = find_pivot(a, n);
    if(k>=a[pivot] && k<=a[n-1])
    {
        return binary_search(a, pivot, n-1, k);

    }
    else
    {
        return binary_search(a, 0, pivot-1, k);
    }
}
int main()
{
    vector <int> a = {4, 5, 6, 7, 0, 1, 2};
    // cout << " Enter the array : " << endl;
    // for(int i = 0; i<7; i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     a.push_back(ele);
    // }
    int k ;
    cout << "Enter k : "  << endl;
    cin >> k;

    cout << k << " is present at " <<find_position(a, 7, k)<< "th index." << endl;
    // for(int i = 0; i<a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
}