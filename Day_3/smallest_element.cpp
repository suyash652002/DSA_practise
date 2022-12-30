#include<iostream>
#include<vector>
using namespace std;
int smallest_element(vector<int> a)
{
    int smallest = INT32_MAX;
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i]<smallest)
        {
            smallest = min(a[i], smallest);
        }
    }
    return smallest;
}
int main()
{
    vector<int>a = {3, 6, 2, 73, 32, 2, 4};
    cout << "The smallest element of an array : " << smallest_element(a);
}