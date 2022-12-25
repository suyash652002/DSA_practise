#include <iostream>
using namespace std;
void swap_alternate(int a[], int n)
{
    for(int i = 0; i<n; i+=2)
    {
        if((i+1)<n)
        {
            swap(a[i], a[i+1]);
        }
    }
}
void print(int a[], int n)
{
    for(int i = 0;i<n; i++)
    {
        cout << a[i] << " " ;
    }
}
int main()
{
    int array[6] = {1, 3, 2, 7, 11, 8};
    swap_alternate(array, 6);
    print(array, 6);
} 

