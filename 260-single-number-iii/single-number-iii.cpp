class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto i:m) if(i.second==1) v.push_back(i.first);
        return v;
    }
};