#include<iostream>
#define V 4
using namespace std;
int init(int arr[][V]){
    int i,j;
    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            arr[i][j] =0;
        }
    }
}
void insert(int arr[][V],int i, int j){
    arr[i][j] =1;
    arr[j][i] =1;
}
void printadj(int arr[][V]){
    int i,j;
    for(i=0;i<V;i++){
        cout<<i<<" : ";
        for(j=0;j<V;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int matrix[V][V];
    init(matrix);
    insert(matrix,0,1);
    insert(matrix,1,2);
    insert(matrix,0,2);
    insert(matrix,3,2);
    printadj(matrix);
}