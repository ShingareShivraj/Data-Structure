#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the array";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target";
    cin>>target;
    for(int i=0;i<size;i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<j;
            }
            
        }
    }
}