// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int val:nums){
//             ans=ans^val;
//         }
//         return ans;
        
//     }
// };
#include <iostream>

using namespace std;
int main(){
    int arr[]={4,1,2,1,2};
    int n=5;
    int ans=0;
    for(int i=0;i<n;i++){
        ans ^=arr[i];
    } 
    cout<<"single number is "<<ans<<endl;
    return 0;
}