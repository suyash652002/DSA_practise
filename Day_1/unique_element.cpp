#include<iostream>
using namespace std;
int unique(int a[], int n)
{
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans = ans^a[i];
    }
    return ans;
}
int main()
{
    int array[5] = {1, 2, 7, 7, 1};
    unique(array, 5);
   // print(array, 6);
} 
