class Solution {
public:
    int help(int n){
        int sum =0;
        if(n>=1 && n<10){
            return n;
        }
        while(n!=0){
            int k =n%10;
            sum+=k;
            n=n/10;
        }
        return sum;
    }
    int countEven(int num) {
        int cnt=0;
        for(int i =1;i<=num;i++){
            int as = help(i);
            if(as%2 ==0){
                cnt++;
            }
        }
        return cnt;
    }
};