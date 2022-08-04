#include<bits\stdc++.h>
using namespace std;

int maximumEvenOddSubArrayLength(int arr[],int len){
    int curLength = 1;
    int maxLength =0;
    for(int i=0;i<len-1;i++){
        if((arr[i]-arr[i+1])&1) curLength++;
        else curLength = 1;
        maxLength = max(curLength,maxLength);
    }
    return maxLength;
}

int main(){
    int arr[] = {0,2,4,4,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<maximumEvenOddSubArrayLength(arr,len);
return 0;
}