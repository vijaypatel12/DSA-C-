#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    // vector<int> vec(10,-8);//dynamic
//  vec.pop_back();
vec.erase(vec.begin()+2);
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;
    // cout<<vec.at(2);
    
    
//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
}