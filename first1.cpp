/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int firstIndex(int arr[] , int l , int r) {
    if(r >= 1) {
        int mid = (l+r)/2;
        if(arr[mid] == 1 && (mid == 0 || arr[mid - 1] == 0)) {
            return mid;
        }
        else if(arr[mid] == 1)
            firstIndex(arr,l,mid-1);
        else
            firstIndex(arr,mid+1,r);
    }
    else
        return -1;
}

int main()
{
    int arr[] = {0,0,0,0,0,0,1,1,1,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << firstIndex(arr,0,n-1);

    return 0;
}
