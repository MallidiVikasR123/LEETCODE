class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v(nums.size());
        int p=1,x=0,index=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0){
                p*=nums[i];
            }
            else
            {
                x++;
                index=i;
            }
        }
        if(x>1) return v;
        if(x==1) v[index]=p;
        else
        {
            for(int i=0;i<nums.size();i++)
            {
                v[i]=p/nums[i];
            }
        }
        return v;
    }
};