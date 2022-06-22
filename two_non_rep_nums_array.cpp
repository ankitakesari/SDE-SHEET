//https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/
//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
        int XOR=0;
        
        for(int i=0; i<nums.size(); i++){
            XOR=XOR ^ nums[i];
        }
        
        //cout<<"XOR: "<< XOR<<endl;
        
        int first_right_set_bit= XOR & ~(XOR-1);
        
        //cout<<"first_right_set_bit: "<< first_right_set_bit<<endl;
        
        int x=0, y=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] & first_right_set_bit){
                x=x ^ nums[i];
            }
            
            else{
                y=y ^ nums[i];
            }
        }
        
        vector <int> ans;
        
        ans.push_back(x);
        ans.push_back(y);
        
        if(x>y){
            swap(ans[0],ans[1]);
        }
        
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
