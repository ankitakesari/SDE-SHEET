//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include <iostream>
using namespace std;

// in recursive approach we need (start and end) or (i and n( i.e, size))
void reverse_array(int arr[], int i, int n){
 if (i>=n/2){
     return;
 }

 int temp=arr[i];
 arr[i]= arr[n-1-i];
 arr[n-1-i]=temp;

    reverse_array(arr,i+1, n);
}
int main() {

    int n;
    cin>>n;
    int arr[n];


    for ( int i=0; i<n ; i++){
        cin>>arr[i];
    }

    reverse_array(arr,0, n);

    cout<<"array reversed: "<<endl;
     for ( int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}
