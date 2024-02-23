class Solution {
public:
    int maxArea(vector<int>& h) {
        int m=0;
        int i=0,j=h.size()-1;
        while(i<=j)
        {
            int m1=min(h[i],h[j]);
            int m2=abs(i-j);
            int mi=m1*m2;
            m=max(m,mi);
            if(h[i]>h[j]) j-=1;
            else i+=1;
        }
        return m;
    }
};