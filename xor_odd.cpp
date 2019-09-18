/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int oddElement(int arr[] , int n) {
    int result = arr[0];
    for(int i=1;i<n;i++){
        result = result ^ arr[i];
    }
    return result;
}

int main()
{
    int arr[] = {1,3,6,6,7,3,1,7,7},n=9;
    cout << oddElement(arr,n);

    return 0;
}
