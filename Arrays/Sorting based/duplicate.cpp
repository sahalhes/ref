//sorting O(n logn)
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }

// set does not contain duplicated so use its size to compare 

bool containsDuplicate(vector<int>& nums) {
        return nums.size()> set<int>(nums.begin(),nums.end()).size();
    }

// map -> sorted so O(n logn) unordered map O(n)

 bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        for(auto i:mp){
            if(i.second >=2) return true;
        }
        return false;
    }