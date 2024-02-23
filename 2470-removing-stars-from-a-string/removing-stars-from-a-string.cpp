class Solution {
public:
    string removeStars(string s) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='*') s1+=s[i];
            else s1.pop_back();
        }
        return s1;
    }
};