#include <iostream>
using namespace std;
int move_left(int a[], int n)
{
    int i = -1, pivot = 0;
    for(int j =  0; j <n; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i], a[j]);

        }
    }
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
    int array[5] = {4, -6, 7, -2, -7};
    move_left(array, 5);
    print_array(array, 5);
}