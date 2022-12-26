#include<iostream>
#include<vector>
using namespace std;
void sortbypartition(vector<int>&a)
{
    int left = 0;
    int right = a.size()-1;
    while(left<right)
    {
        if(a[left]%2==1 && a[right]%2==0)
        {
            swap(a[left], a[right]);
            left++;
            right--;
        }
        else if(a[left]%2==0)
        {
            left++;
        }
        else if(a[right]%2==1)
        {
            right--;
        }
    }
    
}
int main()
{
    vector<int>a = {3, 2, 6, 1, 8};
    sortbypartition(a);
    for(int i = 0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
}