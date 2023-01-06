#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    vector<int>a(5, 100);
    vector<int>b(5);

    // for(vector<int>::iterator it = a.begin(); it != a.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // for(auto it = a.begin(); it != a.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
  
    vector<int>vec = {10, 20, 30, 40, 50};
    vec.erase(vec.begin(), vec.begin()+2);
    for(auto it : vec)
    {
        cout << (it) << " ";
    }
}