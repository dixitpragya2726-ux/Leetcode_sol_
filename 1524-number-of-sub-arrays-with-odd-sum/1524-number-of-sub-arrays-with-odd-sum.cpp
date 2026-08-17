class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long cnt = 0;
        long long even = 1;
        long long sum =0;
        long long odd = 0;
        for(int i =0;i<arr.size();i++){
            sum += arr[i];
            if(sum%2== 0){
                even++;
                cnt+= odd;
            }
            else{
                odd++;
                cnt+= even;
            }
        }
    return cnt%1000000007;
    }
};