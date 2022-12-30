#include<iostream>
using namespace std;
int remove_duplicates(int a[], int n)
{
    if(n==0)
    {
        return 0;
    }
    int i = 0;
    for(int j = 1; j<n; j++)
    {
        if(a[j] != a[i])
        {
            i++;
            a[i] = a[j];
        }
    }
    return i+1;
}
void print_array(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int arr[8] = {1, 2, 2, 3, 4, 4, 4, 5};
    cout << remove_duplicates(arr, 8);
    // print_array(arr, 8);
}