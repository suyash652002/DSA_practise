#include<iostream>
#include<vector>
using namespace std;
    int find_peak(vector<int>& arr) {
        int s = 0;
        int e = arr.size()-1;
        while(s<e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else 
            {
                e = mid;
            }
        }
        return arr[s];
    }
int main()
{
    // vector<int>a;
    // for(int i = 0; i<a.size(); i++)
    // {
    //     int ele;
    //     cin >> ele;
    //     a.push_back(ele);
    // }
    vector<int> a = {0, 2, 1, 0};
    // int array[4] = {0, 2, 1, 0};
    cout << "The peak index of the arrays is : " << find_peak(a);

}