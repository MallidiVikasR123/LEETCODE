class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=0,s=0;
        for(int i=0;i<gain.size();i++)
        {
            s+=gain[i];
            m=max(m,s);
        }
        return m;

    }
};