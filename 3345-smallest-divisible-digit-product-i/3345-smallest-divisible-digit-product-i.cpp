class Solution {
public:
    int product_dig(int n){
        int k = n;
        int pro = 1;
        while(k!=0){
            int x = k%10;
            pro*=x;
            k = k/10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {
        
        for(int i =n;i<101;i++){
            int y = product_dig(i);
            if(y%t==0){
                return i;
            }
        }
    return 0;
    }
};