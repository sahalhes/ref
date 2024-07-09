vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        set<int> myset(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(myset.find(i)==myset.end()) ans.push_back(i); 
        }
        return ans;
    }

/* using indication in orginal array itself , we can put negative in the number of that index 

index: 0  1  2   3  4  5  6  7
nums: [4, 3, 2, -7, 8, 2, 3, 1] // seven became negative because 4 is indicated, so index 3 -> we take negative otherwise size overflow
          👆


index:  0   1   2   3  4  5   6   7
nums: [-4, -3, -2, -7, 8, 2, -3, -1]
                                    👆

*/

vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int idx= abs(nums[i])-1;
            nums[idx] = (nums[idx]>0) ? -nums[idx]:nums[idx];
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0) ans.push_back(i+1);
        }
        return ans;
    }