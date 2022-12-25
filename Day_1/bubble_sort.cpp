#include <iostream>
using namespace std;
void bubble_sort(int a[], int n)
{
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
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
    bubble_sort(array, 5);   
    print(array, 5);
}