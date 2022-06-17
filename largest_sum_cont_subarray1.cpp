//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

//ONLY WORKS IF THERE IS ATLEAST ONE POSITIVE ELEMENT

#include <iostream>
using namespace std;
int main() {

    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i< size; i++){
        cin>>arr[i];
    }
int sum_till_now=0;
int max_sum=0;

for(int i=0; i<size ; i++){
    sum_till_now+=arr[i];

    if(sum_till_now<0){
        sum_till_now=0;
    }

    if( sum_till_now >max_sum){
        max_sum=sum_till_now;
    }


}

cout<<max_sum;

}
