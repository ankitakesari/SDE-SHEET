//https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

// TOURNAMENT METHOD

#include <iostream>
using namespace std;

class pair_minmax{
    public:
    int minn;
    int maxx;
};

pair_minmax find_min_max(int arr[], int start, int end){
    pair_minmax result ;
    int mid;
    if(end-start==0){
        result.minn=arr[start];
        result.maxx=arr[start];
        return result;
    }

    if(end-start==1){

            if (arr[start]>arr[end]){
            result.minn=arr[end];
            result.maxx=arr[start];
            }

            else   {
            result.minn=arr[start];
            result.maxx=arr[end];   
            }

            return result;

    }

  // pair_minmax left= find_min_max(arr, start, end/2);
  // pair_minmax right= find_min_max(arr, (end/2)+1, end);

    //we need mid as (start+end)/2 as start for right call would not be 0
  mid=(start+end)/2;

    pair_minmax left= find_min_max(arr, start, mid);
   pair_minmax right= find_min_max(arr, mid+1, end);

    result.minn=right.minn;
    if(left.minn <=right.minn){
        result.minn=left.minn;
    }


       result.maxx=right.maxx;
    if(left.maxx >=right.minn){
        result.maxx=left.minn;
    }

    return result;
// cout<<"called"<<endl;

}


int main() {
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size ; i++){
        cin>>arr[i];
    }

    pair_minmax finall=find_min_max(arr, 0, size-1);

    cout<<"min: "<< finall.minn<<endl;

    cout<<"max: "<< finall.maxx<<endl;

}
