int j=0,ans=0,sum=0,i;
for(int i=0;i<size;i++){
    sum+=arr[i];
    while(sum>given sum){
        sum-=arr[j];
        j++;
    }
    ans=max(ans,i-j+1)
}

//longest substring

// instead of sum frequency

for(i){
    mp[str[i]]++;
    while(mp[str[i]>1]){
        ans=max(ans,i-j); // when invalid on that index itself no need +1
        mp[str[j]]--;
        j--;
    }

}