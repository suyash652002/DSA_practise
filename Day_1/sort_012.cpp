#include<iostream>
using namespace std;
void sort012(int a[], int n)
    {
        // code here 
        int count_0 = 0; 
        int count_1 = 0;
        int count_2 = 0;
        for(int i = 0; i<n ; i++)
        {
            if(a[i] == 0)
            {
                count_0++;
            }
            else if(a[i] == 1)
            {
                count_1++;
            }
            else if(a[i] == 2)
            {
                count_2++;
            }
        }
        int index = 0;
        for(int i = 0; i<count_0; i++)
        {
            a[index] = 0;
            index++;
        }
        for(int i = 0; i<count_1; i++)
        {
            a[index] = 1;
            index++;
        }
        for(int i = 0; i<count_2; i++)
        {
            a[index] = 2;
            index++;
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
        int array[5] = {0, 2, 1, 2, 0};
        sort012(array, 5);
        print_array(array, 5);
    }