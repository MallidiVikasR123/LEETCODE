class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s="",ans="",a=str1,b=str2;
        str1=a+b;
        str2=b+a;
        for(int i=0;i<str1.size();i++)
        {
            if(str1[i]==str2[i]) s+=str1[i];
            else return "";
        }
        int a1=__gcd(a.size(),b.size());
        return s.substr(0,a1);
    }
};