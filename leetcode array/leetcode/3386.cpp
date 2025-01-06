#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"enter the no of button pressed";
    cin>>p;
    int arr[p][2];
    cout<<"enter the 2d array";
    for(int i=0;i<p;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<p;i++){
        arr[i][1]=arr[i][1]-arr[i-1][1];
    }
    for(int i=0;i<p;i++){
        for(int j=i+1; j<p; j++){
        if(arr[i][0]==arr[j][0])
        arr[i][0]=arr[i][0]+arr[j][0];
        }
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    int id=arr[0][0];
    int max=arr[0][1];
    for(int i=1;i<p;i++){
        if(arr[i][1]>max)
        max=arr[i][1];
        id=arr[i][0];
    }
    cout<<id;
    
    return 0;
}