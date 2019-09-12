/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge ssorted arrays , index start keep in mind
#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    cout << endl;
}

void merge(int arr_final[] , int l , int m , int r) {

    int n1=m-l+1 , n2=r-m;
    int arr1[n1];
    int arr2[n2];

    for(int k=0;k<n1;k++){
        arr1[k] = arr_final[l+k];
    }

    for(int k=0;k<n2;k++){
        arr2[k] = arr_final[m+1+k];
    }

    int i=0,j=0,count=l;

    while(i<n1 && j<n2){

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
    if(i<n1){

       while(i<n1){
           arr_final[count] = arr1[i];
           i++;
           count++;
       }

    }

    if(j<n2){

        while(j<n2){
         arr_final[count] = arr2[j];
         j++;
         count++;
        }

    }

}

void mergeSort(int arr[] , int l , int r){
    if(l < r) {
        int mid = l + (r-l)/2;
        mergeSort(arr, l ,mid);
        mergeSort(arr, mid+1 , r);
        merge(arr , l , mid , r);
    }

}



int main()
{
    int arr[] = {8,7,6,5,4,3,2,1},n=8;
    int l=0,r=n-1;
    mergeSort(arr,l,r);
    printArray(arr,n);
    return 0;
}
