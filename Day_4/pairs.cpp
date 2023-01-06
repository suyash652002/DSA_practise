#include<bits/stdc++.h>
using namespace std;

int main()
{
    // creating a simple pair
    pair<int, int>p = {1, 3};
    // cout << p.first << " " << p.second;

    // to store elements in format : {1, {3, 4}}
    pair<int, pair<int, int>>a;
    // inserting values in the pairs
    // a.first = 5;
    // a.second.first = 1;
    // a.second.second = 3;
    // // printing the values of pair
    // cout << a.first << " " << a.second.first << " " << a.second.second;

    //creating pair array
    pair<int, int>arr[] = {{1, 2}, {5, 3}, {1, 6}};
    // print pair array values
    cout << arr[1].first << " " << arr[1].second;
}