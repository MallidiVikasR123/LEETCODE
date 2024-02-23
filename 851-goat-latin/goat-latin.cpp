class Solution {
public:
    string s="",s1="";
    int cnt=0;
    string toGoatLatin(string sentence) {
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            {
                if(s1[0]=='a' or s1[0]=='e' or s1[0]=='i' or s1[0]=='o' or s1[0]=='u' or s1[0]=='A' or s1[0]=='E' or s1[0]=='I' or s1[0]=='O' or s1[0]=='U')
                {
                    s+=s1+"ma"+string(cnt+=1,'a')+' ';
                }
                else
                {
                    char ch=s1[0];
                    s1.erase(s1.begin()+0);
                    s+=s1+ch+"ma"+string(cnt+=1,'a')+' ';
                }
                s1="";
            }
            else
            {
                s1+=sentence[i];
            }
        }
        if(s1[0]=='a' or s1[0]=='e' or s1[0]=='i' or s1[0]=='o' or s1[0]=='u' or s1[0]=='A' or s1[0]=='E' or s1[0]=='I' or s1[0]=='O' or s1[0]=='U')
        {
            s+=s1+"ma"+string(cnt+=1,'a');
        }
        else
        {
            char ch=s1[0];
            s1.erase(s1.begin()+0);
            s+=s1+ch+"ma"+string(cnt+=1,'a');
        }
        return s;
    }
};