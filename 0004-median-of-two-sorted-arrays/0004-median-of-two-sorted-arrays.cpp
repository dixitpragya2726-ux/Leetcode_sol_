class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0;
        int j = 0;
        double ans = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int>res;
        while(i<m && j<n){
            if(nums1[i]>=nums2[j]){
                res.push_back(nums2[j]);
                j++;
            }
            else{
                res.push_back(nums1[i]);
                i++;
            }
        }
        while(i<m){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            res.push_back(nums2[j]);
            j++;
        }
        if((m+n)%2 != 0){
            double x = (m+n)/2;
            return res[x];
        }
            double y = (m+n)/2;
            double z = (res[y]+res[y-1])/2.0;
            return z;
    }
};