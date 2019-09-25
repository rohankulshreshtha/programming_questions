/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,0,0,1,1,0,0,1,0,1,0,0,0,0},n=14;
    int l=0,r=n-1;
    while(l < r){
        while(arr[l] != 1 && l < r) {
            l++;
        }
        while(arr[r] != 0 && l < r) {
            r--;
        }
        if(l < r) {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }

    }

    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}
