class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0;
        for(i=0;i<min(word1.size(),word2.size());i++)
        {
            s+=word1[i];
            s+=word2[i];
        }
        int a=i;
        while(a!=word1.size())
        {
            s+=word1[a];
            a++;
        }
        while(i!=word2.size())
        {
            s+=word2[i];
            i++;
        }
        return s;
    }
};