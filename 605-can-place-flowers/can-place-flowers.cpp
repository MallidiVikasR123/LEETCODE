class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n<=0) return 1;
        if(flowerbed.size()==1 and flowerbed[0]==0 and n==1) return 1;
        for(int i=0;i<flowerbed.size();i++)
        {
            if((i-1>0 and flowerbed[i-1]==0 and i+1<flowerbed.size() and flowerbed[i+1]==0 and flowerbed[i]!=1) or (i==0 and flowerbed[i]==0 and i+1<flowerbed.size() and flowerbed[i+1]!=1) or (i==flowerbed.size()-1 and flowerbed[i]==0 and i-1>-1 and flowerbed[i-1]!=1))
            {
                flowerbed[i]=1;
                n--;
                if(n<=0) return 1;
            }

        }
        return 0;
    }
};