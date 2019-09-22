/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l=0,r=7;
    int arr[] = {1,2,3,4,5,6,7,8};
    while(l < r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    for(int i=0;i<=7;i++) {
        cout << arr[i];
    }
    return 0;
}
