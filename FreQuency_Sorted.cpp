#include<bits\stdc++.h>
using namespace std;

void countFrequency(int arr[],int len){
    int count =1;
    int match = arr[0];
    int i=1;
    while(i<len){
        if(arr[i]==match){
            count++;
        }
        else{
            cout<<match<<" "<<count<<endl;
            match = arr[i];
            count =1;
        }
        i++;
    }
    cout<<match<<" "<<count<<endl;
}

int main(){
    int arr[]={1,1,1,2,2,3,4,5,5,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    countFrequency(arr,len);
return 0;
}