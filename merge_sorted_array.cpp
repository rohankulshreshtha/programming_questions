/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,4,6,7,8,9};
    int arr2[] = {2,3,5};
    int arr_final[9];
    int i=0,j=0,count=0;
    while(i<6 && j<3){
        if(arr1[i] < arr2[j]){
            arr_final[count] = arr1[i];
            i++;
        }
        else{
            arr_final[count] = arr2[j];
            j++;
        }
        count++;
    }
    if(i<6){
     while(i<6){
         arr_final[count] = arr1[i];
         i++;
         count++;
     }
    }
    if(j<3){
        while(j<3){
         arr_final[count] = arr2[j];
         j++;
         count++;
        }
    }
    for(int k=0;k<9;k++){
        cout << arr_final[k];
    }

    return 0;
}
