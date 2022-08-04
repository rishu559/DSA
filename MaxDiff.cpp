#include<bits\stdc++.h>
using namespace std;

int maxDiff(int arr[],int len){
    int res = arr[1]-arr[0];
    int min = arr[0];
    for(int i=1;i<len;i++){
        res = max(res,arr[i]-min);
        if(arr[i]<min) min = arr[i];
    }
    return res;
}

int main(){
    int arr[] = {30,20,10};
    cout<<maxDiff(arr,3);
return 0;
}