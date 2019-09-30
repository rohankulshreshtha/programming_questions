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
    int arr[] = {1,4,6,8,9,2,5,3,5},n=8,sum = 10;
    unordered_set <int> s;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(arr[i] + arr[j] == sum)
    //             cout << arr[i] << "," << arr[j] << " ";
    //     }
    // }
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(sum - arr[i]) != s.end())
            cout << arr[i] << sum - arr[i] << endl;
    }


    return 0;
}
