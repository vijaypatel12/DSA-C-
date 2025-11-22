// #include <iostream>
// #include <vector>

// using namespace std;
// int main(){
//     vector<int>vec;
//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);

//     cout<<vec.size()<<endl;
//     cout<<vec.capacity()<<endl;
//     return 0;
// }

#include <iostream>

using namespace std;
int main(){
    int arr[]={4,1,2,1,2};
    int n=5;
    int ans=0;
    for(int i=0;i<n;i++){
        ans =ans^arr[i];
    } 
    cout<<"single number is "<<ans<<endl;
    return 0;
}