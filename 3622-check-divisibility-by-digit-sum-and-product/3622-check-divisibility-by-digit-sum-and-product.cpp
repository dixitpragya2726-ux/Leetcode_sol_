class Solution {
public:
    bool checkDivisibility(int n) {
        int pro =1;
        int sum = 0;
        int z = n;
        while(z!=0){
            int k = z%10;
            pro = pro*k;
            sum+= k;
            z = z/10;
        }
        return n%(pro+sum) == 0;
    }
};