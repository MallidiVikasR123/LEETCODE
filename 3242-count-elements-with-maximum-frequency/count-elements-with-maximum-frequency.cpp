class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v(100);
        int m=0;
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]-1]++;
            m=max(v[nums[i]-1],m);
        }
        int cnt=0;
        for(int i=0;i<v.size();i++) if(v[i]==m) cnt+=v[i];
        return cnt;
    }
};