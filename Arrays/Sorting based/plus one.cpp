/*
very inefficcient , for (pow()) also  
*/
vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;

        int n=digits.size(),dig=0;

        for(int i=0;i<n;i++){
            dig+=digits[i]*pow(10,n-i-1);
        }

        dig+=1;
        while(dig>0){
            int r = dig%10;
            dig /=10;
            ans.push_back(r);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }

    /*
    if 9 9 9
    first loop 9 9 0
    then 9 0 0 
    then 0 0 0 , since it came out of loop carry over needed
    so insert 1 0 0 0 
    */
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            // 8 8 8 -> 8 8 9 and returns 
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    // If all digits were 9, we need to insert a leading 1
    digits.insert(digits.begin(), 1);
    return digits;
}