class Solution {
public:
    int minChanges(string s) {
        int len = s.size();
        int res =0;
        for(int i=0;i<len;i+=2){
            int zero = 0;
            int one = 0;
            for(int j=i;j<i+2;j++){
                if(s[j] == '1'){
                    one++;
                }
                else{
                    zero++;
                }
            }
                if(one == 1 && zero == 1){
                    res = res+1;
                }
                if(one == 2){
                    res+=0;
                }
                if(zero == 2){
                    res+=0;
            }
        }
        return res;
        
    }
};