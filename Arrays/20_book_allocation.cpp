#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int>arr, int n, int m){
    int s=0;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        isPossible(arr, n, m, mid);
        {
            ans=mid;
            e=mid-1;
        }
       if{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int>arr {10,20,30,40};
    vector<int>ans=allocateBooks(arr, 4,2,mid);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}