#include<iostream>
#include<vector>
using namespace std;
void second_largestandsmallest(vector<int>a)
{
    int largest = INT32_MIN;
    int second_largest = INT32_MIN;
    int smallest = INT32_MAX;
    int second_smallest = INT32_MAX;

    for(int i = 0; i<a.size(); i++)
    {
        if(a[i]>largest)
        {
            largest = max(largest, a[i]);
        }
        else if(a[i]<smallest)
        {
            smallest = min(smallest, a[i]);
        }
    }
    
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i]>second_largest && a[i]!=largest)
        {
            second_largest = a[i];
        }
        else if (a[i]<second_smallest && a[i]!=smallest)
        {
            second_smallest = a[i];
        }
    }
    cout << "Second Largest element in an array is : " << second_largest << endl;
    cout << "Second smallest element in an array is : " << second_smallest;
}


int main()
{
    int n = 6;
    vector<int> a;
    for(int i = 0; i<n; i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }
    second_largestandsmallest(a);

}