#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find_unique(vector<int>&a)
{
    for(int i = 0; i<a.size(); i++)
    {
        for(int j = i+1; j<a.size(); j++)
        {
            if(a[i] == a[j])
            {
                a[i] = a[j] = -1;
            }
        }
    }
}
int main()
{
    vector<int>a = {1, 3, 1, 8, 3};
    find_unique(a);
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i]>0)
        {
            cout << a[i];
        }
    }

}