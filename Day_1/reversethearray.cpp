#include <iostream>
using namespace std;
void reverse (int a[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
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
    int array[5] = {4, 6, 7, 2, 7};
    reverse(array, 5);
    print_array(array, 5);
}