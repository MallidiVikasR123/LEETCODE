class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        int i=0,j=arr.size()-1;
        int mid=(i+j)/2;
        while(i<=j)
        {
            if(mid==0 and arr[mid]>arr[mid+1]) return mid;
            else if(mid==arr.size()-1 and arr[mid]>arr[mid-1]) return mid;
            else if(mid!=0 and mid!=arr.size()-1 and arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]<arr[mid+1]) i=mid+1;
            else j=mid-1;
            mid=(i+j)/2;
        }
        return 0;
    }
};