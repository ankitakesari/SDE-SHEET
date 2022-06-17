#include <iostream>
using namespace std;
int main() {

    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i< size; i++){
        cin>>arr[i];
    }

   int  low=0;
   int  mid=0;
   int  high=size-1;

  //  int i=0; --mid serves as i

    while(mid<=high){

        //why <= and not just < [case: 0 1 2 0 1 2]

        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        else if (arr[mid]==1){
            mid++;
        }

        else{
            swap(arr[high],arr[mid]);
            high--;
        }

    //             for(int i=0; i< size; i++){
    //     cout<<arr[i];
    // }  print for case 012012

  //  cout<<endl;


    }

        for(int i=0; i< size; i++){
        cout<<arr[i];
    }

}
