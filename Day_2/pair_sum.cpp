#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
void pair_sum(vector<int>&a)
{
    vector<int> ans;
    for(int i = 0; i<a.size()-1; i++)
    {
        for(int j = i+1; j<a.size(); j++)
        {
            if(a[i] + a[j] == 5)
            {
                ans.push_back(a[i]);
                ans.push_back(a[j]);
            }
        }
    }
    for(int i = 0; i<a.size(); i++)
    {
        cout << ans[i] << " " ;
    }
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    pair_sum(a);
    

}