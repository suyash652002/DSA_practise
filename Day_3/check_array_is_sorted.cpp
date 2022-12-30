#include<iostream>
#include<vector>
using namespace std;
int if_sorted(vector<int>a)
{
    int n = a.size();
    if(n==1 || n==0)
    {
        return 1;
    }
    for(int i = 1; i<n; i++)
    {
        if(a[i-1]>a[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    vector<int>s = {2, 2, 2, 2, 2};
    cout << if_sorted(s);
}