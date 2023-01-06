#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int armstrong_number(int n)
{
    int k = n;
    int sum = 0;
    while (k!=0)
    {
        int last_digit = k%10;
        sum += pow(last_digit, 3);
        k/=10;
    }
    if(n==sum)
    {
        cout << "Yes"; //return 1;
    }
    else{
       cout << "No"; //freturn 0;
    }
}
int main()
{
    int n; 
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << armstrong_number(n);
    // if(armstrong_number(n)==true)
    // {
    //     cout << "The number is armstrong number";
    // }
    // else
    // {
    //     cout << "It is not";
    // }
}