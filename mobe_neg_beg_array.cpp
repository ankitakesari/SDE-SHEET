//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include <iostream>
using namespace std;
int main() {
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size ; i++){
        cin>>arr[i];
    }

    int p=0;

    // for(int j=0; j<size; j++){
    //     if(arr[j]<0){
    //         swap(arr[p], arr[j]);
    //         p++;
    //     }
    // }

    //one optimization can be made here 
    // if negative element is already at the right position then skip the swap

        for(int j=0; j<size; j++){
        if(arr[j]<0){
           if (p!=j)
            swap(arr[p], arr[j]);
            p++;
        }
    } 

    for(int i=0; i<size ; i++){
        cout<<arr[i]<<" ";
    }


}
