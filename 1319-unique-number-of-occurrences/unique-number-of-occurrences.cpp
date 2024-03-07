class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m,m1;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto i:m)
        {
            m1[i.second]++;
            if(m1[i.second]>1) return 0;
        }
        return 1;
    }
};