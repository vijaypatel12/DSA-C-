#include<iostream>
using namespace std;
int main(){

    int sparse_mat[5][4]={{0,0,3,0},{0,0,5,7},{0,0,0,0},{0,2,6,0},{4,0,0,0}

    };
    int size=0;
    for(int i=0;i<5;i++)
    for(int j=0;j<4;j++)
    if(sparse_mat[i][j]!=0)
    size++;
    cout<<endl;


    int new_mat[3][size];
    int k=0;
    for(int i=0;i<5;i++)
    for(int j=0;j<4;j++)
    if(sparse_mat[i][j]!=0){
        new_mat[0][k]=i;
        new_mat[1][k]=j;
        new_mat[2][k]=sparse_mat[i][j];
        k++;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<size;j++)
        cout<<new_mat[i][j];
        
    }
return 0;

}