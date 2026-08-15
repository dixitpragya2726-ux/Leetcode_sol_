class Solution {
public:
    int GCD(int a ,int b){
        if(a>=b){
            while(b!=0){
                int r = a%b;
                a = b;
                b=r;
            }
            return a;
        }
        while(a!=0){
            int r = b%a;
            b = a;
            a = r;
        }
        return b;  
    }
    int subarrayGCD(vector<int>& nums, int k) {
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            int a = nums[i];
            for(int j =i;j<nums.size();j++){
                int b = nums[j];
                int gc = GCD(a,b);
                a = gc;
                if(gc == k){
                    cnt ++;
                } 
            }
        }
        return cnt;
    }
};