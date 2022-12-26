#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>&a, vector<int>&b)
{
    vector<int>ans;
    int i = 0, j = 0;
    while(i<a.size() && j<a.size())
    {
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++;
            j++;

        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for(int i = 0; i<ans.size(); i++)
    {
        cout << ans[i] << " " ;
    }
}
int main()
{
    vector<int> array = { 1, 2, 3, 4};
    vector<int> array2 = {2, 3, 5};
    intersection(array, array2);
    // for(int i = 0; i<5; i++)
    // {
    //     cout << array[i] << " " ;
    // }
}