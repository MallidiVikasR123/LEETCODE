class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m=INT_MAX,maxx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<m) m=nums[i];
            if(nums[i]>maxx) maxx=nums[i];
        }
        return __gcd(m,maxx);
    }
};