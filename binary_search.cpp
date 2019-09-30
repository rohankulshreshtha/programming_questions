/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binarySearch(int arr[] ,int n ,int item, int l, int r ) {
    int mid = l + (r-l)/2;
    if(l > r) return -1;
    if(arr[mid] == item)
        return mid;
    else if(arr[mid] > item)
        return binarySearch(arr,n,item,l,mid-1);
    else
        return binarySearch(arr,n,item,mid+1,r);

}

int main()
{
    int arr[] = {1, 5 , 8 , 10 , 15 , 20};
    int n = 6;
    int item = 8;
    cout << binarySearch(arr , n , item , 0 , n-1);

    return 0;
}
