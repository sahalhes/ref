#include <bits/stdc++.h>
using namespace std;

void bs(int k){
    vector<int> arr={5,4,7,8,9};
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int x=1;
    int low=0;
    int high=n-1;
     while (low <= high) {
        int mid = (low + high) / 2;
        if (k == arr[mid]) {x=0;break;}
        else if (k < arr[mid]) high = mid-1;
        else  low=mid+1;
    }
    if(x) cout<< k <<" was not found"<<endl;
    else cout << k<<" was found"<<endl;
}

int main()
{   
    bs(11);
    return 0;
}