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
    int count=0;
  
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    for(int i=count; i<size; i++){
        arr[count]=0;
        }
    for(int i=0;i<size;i++){
    cout<<arr[i];
    }
}