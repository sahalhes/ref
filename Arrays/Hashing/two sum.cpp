/*
1st declare hashmap
then iterate
if(after removing target that num is present ) then return i and that index
else add that to hashmaps
*/

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            if(mp.find(target-num) != mp.end()){
                return {i,mp[target-num]};
            }
            else mp[num]=i;
        }
        return {};
}