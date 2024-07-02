//O(n2)
#include <bits/stdc++.h>
using namespace std;

void ss(vector<int> &arr){

    for(int i=0;i<arr.size()-1;i++){
        int mini=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[mini]) mini=j;
        }
        swap(arr[mini],arr[i]);
    }

}

int main()
{   
    vector<int>arr = {5,3,8,9,1};
    ss(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}