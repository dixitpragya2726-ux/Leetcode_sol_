class Solution {
public:
    bool canAliceWin(int n) {
        int  x= 0;
        for(int i = 10;i>=1;i--){
            if(n<=0){
                if( x %2 == 0){
                    return false;
                }
                else{
                    return true;
                }
            }
            if(n < i){
                return x % 2 != 0;
            }
            if(n>=i){
                n = n-i;
            }
            
            x++;
        }
        return true;
    }
};