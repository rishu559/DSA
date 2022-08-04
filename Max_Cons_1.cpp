#include<bits\stdc++.h>
using namespace std;

int maxConsecutivesOnes(bool arr[],int len){
    int cur = 0;
    int maxim = 0;
    for(int i=0;i<len;i++){
        if(arr[i]) cur++;
        else cur=0;
        maxim = max(maxim,cur);
    }
    return maxim;
}

int main(){
    bool arr[] = {0,0,0,0,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout<<maxConsecutivesOnes(arr,len);
return 0;
}