class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0;
        int m=INT_MIN,prev=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1) cnt++;
            if(nums[i]==0)
            {
                m=max(cnt+prev,m);
                prev=cnt;
                cnt=0;
            }
        }
        m=max(cnt+prev,m);
        if(prev==-1) return nums.size()-1;
        return m;
    }
};