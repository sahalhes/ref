/*
sort
then add first interval
consider closing of first interval as temp
for i 1 to n{
    when temp>interval first{
        temp give max
        ans.back()[1]=temp
    }
    else{
        ans.push(interval)
        temp=interval[i][1]
    }
}
*/

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        ans.push_back(intervals[0]);
        int temp=intervals[0][1];
        for(int i=1;i<n;i++){

            if(temp>=intervals[i][0]){ // 1,3 2,6 -> 6>1 checking that its in interval
                temp=max(temp,intervals[i][1]); // 2,6 2,7 then taking the 7
                ans.back()[1]=temp; // last element's second place 
            }
            else{
                ans.push_back(intervals[i]);
                temp = intervals[i][1]; // next interval
            }
        }
        return ans;
    }