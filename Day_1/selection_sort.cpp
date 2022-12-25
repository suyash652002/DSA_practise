#include<iostream>
using namespace std;
void selection_sort(int a[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int min_index = i;
        for(int j = i+1; j<n; j++)
        {
            if(a[j]<a[min_index])
            {
                min_index = j;
            }
        }
        swap(a[min_index], a[i]);
    }
}
void print(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout << a[i] << " " ;
    }
}
int main()
{
    int array[5] = {4, 6, 7, 2, 7};
    int k = 7;
    selection_sort(array, 5);   
    print(array, 5);
}