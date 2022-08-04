#include<bits\stdc++.h>
using namespace std;

// Given an array perform the the getSum between any two given indexes
void changeToPSA(int arr[],int len){
    for(int i=1;i<len;i++){
        arr[i] = arr[i-1]+arr[i];
    } 
}

int getSum(int arr[],int l,int r){
    if(l==0){
        return arr[r];
    }
    else{
        return arr[r]-arr[l-1];
    }
}
// Find if the array has an equillibrium point 
// Sum ( before ) = Sum ( after )
bool getEquillibrium(int arr[],int len){
    int l_Sum = 0;
    int r_Sum = 0;
    for(int i=1;i<len;i++){
        r_Sum+=arr[i];
    }
    for(int i=0;i<len-1;i++){
        if(l_Sum==r_Sum){
            return true;
        }
        else{
            l_Sum+=arr[i];
            r_Sum-=arr[i+1];
        }
    }
    return false;
}
int main(){
    int arr[] = {1,2,2,3,4,5,6,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    // changeToPSA(arr,len);
    // cout<<getSum(arr,0,3);
    cout<<getEquillibrium(arr,len);
return 0;
}