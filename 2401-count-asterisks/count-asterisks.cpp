class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(cnt%2==0 and s[i]=='*') c++;
            if(s[i]=='|') cnt++;
        }
        return c;
    }
};