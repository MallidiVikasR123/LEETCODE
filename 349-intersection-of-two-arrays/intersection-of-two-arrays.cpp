class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums1.size();i++) m[nums1[i]]=1;
        for(int i=0;i<nums2.size();i++) if(m[nums2[i]]==1)m[nums2[i]]=2;
        for(auto i : m) if(i.second>1) v.push_back(i.first);
        return v;
    }
};