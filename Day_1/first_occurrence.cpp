#include <iostream>
using namespace std;
int first_occurrence(int a[], int n, int k)
{
    int s = 0; 
    int e = n-1;
    int ans = -1;
    while(s<=e)
    {
        int mid = s + (e-s)/2;
        if(a[mid] == k)
        {
            ans = mid;
            e = mid -1;
        }
        if (a[mid]<k)
        {
            s = mid + 1;
        }
        if (a[mid]>k)
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int array[5] = {4, 6, 7, 2, 7};
    int k = 7;
    cout << first_occurrence(array, 5, k);   
}
