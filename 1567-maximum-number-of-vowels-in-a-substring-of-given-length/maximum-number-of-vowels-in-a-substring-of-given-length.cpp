class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=k-1;
        int m=INT_MIN,cnt=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') cnt++;
        }
        while(j<s.size())
        {
            m=max(m,cnt);
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') cnt--;
            i++;j++;
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u') cnt++;
        }
        return m;
    }
};