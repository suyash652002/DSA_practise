#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void sort_by_square(vector<int>&a)
{
    vector<int>ans;
    int left = 0;
    int right = a.size()-1;
    while(left<=right)
    {
        if(abs(a[left]) > abs(a[right]))
        {
            ans.push_back(a[left]*a[left]);
            left++;
        }
        else
        {
            ans.push_back(a[right]*a[right]);
            right--;
        }
    }
    reverse(a.begin(), a.end());
    for(int i = 0; i<a.size(); i++)
    {
        cout << ans[i] << " ";
    }

}
int main()
{
    vector<int>a = {-10, -3, 2, 5, 6};
    sort_by_square(a);
}