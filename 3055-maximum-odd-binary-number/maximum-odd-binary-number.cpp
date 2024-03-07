class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt=0;
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                s1+="1";
            }
        }
        s1[s1.size()-1]='0';
        s1+=string(s.size()-s1.size(),'0');
        s1[s1.size()-1]='1';
        return s1;
    }
};