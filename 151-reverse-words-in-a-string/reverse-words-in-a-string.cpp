class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                s1+=s[i];
            }
            else
            {
                if(s1=="" or s1==" ") continue;
                v.push_back(s1);
                s1="";
            }
        }
        if(s1!="") v.push_back(s1);
        s1="";
        for(int i=v.size()-1;i>=0;i--)
        {
            if(i==0) s1+=v[0];
            else if(v[i]!=" ") s1+=v[i]+" ";
        }
        return s1;
    }
};