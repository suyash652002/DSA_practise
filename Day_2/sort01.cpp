#include<iostream>
using namespace std;
void sort01(int a[], int n)
{
    int left = 0;
    int right = n-1;
    while(left<right)
   {
    if(a[left]==1 && a[right]==0)
    {
        swap(a[left], a[right]);
        left++;
        right--;
    }
    else if(a[left] == 0)
    {
        left++;
    }
    else if(a[right] == 1)
    {
        right--;
    }
   }
}
int main()
{
    int array[5] = { 0, 1, 0, 1, 1};
    sort01(array, 5);
    for(int i = 0; i<5; i++)
    {
        cout << array[i] << " " ;
    }
}
