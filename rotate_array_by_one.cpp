//https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

#include <iostream>
using namespace std;
int main() {

    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i< size; i++){
        cin>>arr[i];
    }

int move=arr[size-1];

//The below is wrong as it would over write all element as arr[1]

// for(int i =1; i< size; i++){
//     arr[i]=arr[i-1];
// }

//Loop must be done in reverse order

for(int i=size-1; i>0; i--){
    arr[i]=arr[i-1];
}

arr[0]=move;

        for(int i=0; i< size; i++){
        cout<<arr[i];
    }

}
