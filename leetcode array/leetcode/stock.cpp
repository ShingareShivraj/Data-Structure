#include<iostream>
using namespace std;
int main(){
    int size, a, b;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the array";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=0;
  
    for(int i=0;i<size-1;i++){
        for(int j=i+1; j<size; j++){
            if(arr[j]-arr[i]>max){
                max=arr[j]-arr[i];
            }
            
        }
    }
    cout<<max;
    return 0;
}