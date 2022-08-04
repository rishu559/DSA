#include<bits\stdc++.h>
using namespace std;

void Minimum_Flips(int arr[],int len){
    for(int i=1;i<len;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!=arr[0])
                cout<<"From "<<i<<" to ";
            else cout<<(i-1)<<endl;   
        }
    }
    if(arr[len-1]!=arr[0]){
        cout<<(len-1)<<endl;
    }
}

int main(){
    int arr[] = {1,0,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    Minimum_Flips(arr,len);
return 0;
}