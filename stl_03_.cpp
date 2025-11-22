#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;
int main(){
    map<string ,int>m;
    m["tv"]=100;
    m["laptop"]=101;
    m["headphone"]=51;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}