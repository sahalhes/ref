//sorting based O(n*logn)
int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i!=nums[i]) return i;
        }
        return n;
    }

//missing number using sum O(n)
int missingNumber(vector<int>& nums) {
        int n = nums.size() , sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return n*(n+1)/2 - sum;
    }

//XOR O(n)
/* Xor with 0 same number , 
Xor with same number 0 , 
XOr with different number nothing significant 

we will xor from 0 to n 
Then we xor whole array 
everything cancels except missing number
*/

int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<=n;i++){
            ans = ans ^ i;
        }
        for(int i=0;i<n;i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
