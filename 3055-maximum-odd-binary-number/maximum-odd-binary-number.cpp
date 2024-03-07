class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                swap(s[cnt],s[i]);
                cnt++;
            }
        }
        swap(s[cnt-1],s[s.size()-1]);
        return s;
    }
};