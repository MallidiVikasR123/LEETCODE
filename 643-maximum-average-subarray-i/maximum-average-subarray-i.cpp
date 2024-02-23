class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0;
        for(int i=0;i<k;i++) s+=nums[i];
        int m=s,i=0,j=k-1;
        while(j+1<nums.size())
        {
            s-=nums[i];
            s+=nums[j+1];
            m=max(m,s);
            i++;
            j++;
        }
        return (double)m/k;
    }
};