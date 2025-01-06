#include<iostream>
using namespace std;


void func(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<=arr[i]){
                arr[i]=arr[i]-arr[j];
                break;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    cout<<"enter a array";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    func(arr, n);
    for(int i=0;i<n; i++){
        cout<<arr[i];
    }
    return 0;
}