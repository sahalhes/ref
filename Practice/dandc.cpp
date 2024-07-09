// sum of list , count number of item, maxi in list , bs using divinde and conquer

#include <bits/stdc++.h>
using namespace std;
int a=0,b=0,c=0;
int sum(vector<int> arr){
    if(arr.size()==0) return 0;
    if(arr.size()==1) return arr[0];

    int x= arr.back();
    a+=x;
    arr.pop_back();
    sum(arr);
    return a;
}

int cnt(vector<int> arr){
    if(arr.size()==0) return 0;
    b++;
    arr.pop_back();
    cnt(arr);
    return b;
}

int maxi(vector<int> arr){
    if(arr.size()==0) return 0;
    if(arr.size()==1) return arr[0];
    int temp = arr.back();
    arr.pop_back();
    if(temp>c) c=temp;
    maxi(arr);
    return c;
}

bool bs(vector<int> arr,int a,int left,int right){
    if(left>right) return false;
    int mid = (left+right)/2;
    if(a<arr[mid]) bs(arr,a,left,mid-1);
    else if(a>arr[mid]) bs(arr,a,mid+1,right);
    else return true;
}

int main()
{   
    vector<int> arr={1,4,5,8,10}; 
    // int b=cnt(arr);
    // int c=maxi(arr);
    cout<<sum(arr)<<endl;
    cout<<cnt(arr)<<endl;
    cout<<maxi(arr)<<endl;
    if(bs(arr,5,0,arr.size()-1)) cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    return 0;
}