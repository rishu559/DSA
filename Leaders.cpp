#include<bits\stdc++.h>
using namespace std;

vector<int> Leaders(int arr[],int len){
    int max =0;
    vector<int> vec;
    for(int i=len-1;i>=0;i--){
        if(arr[i]>max){
            max = arr[i];
            vec.push_back(max);
        }
    }
    return vec;
}

int main(){
    int arr[] = {4,3,2,5,8,6,3,1,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    vector<int> vec = Leaders(arr,len);
    for(int i=vec.size()-1;i>=0;i--){
        cout<<vec[i]<<" ";
    }
return 0;
}