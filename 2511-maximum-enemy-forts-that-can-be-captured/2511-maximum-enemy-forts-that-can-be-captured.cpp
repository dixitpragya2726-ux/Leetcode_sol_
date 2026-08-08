class Solution {
public:
    int captureForts(vector<int>& forts) {
        int res = 0;
        int max_r = 0;
        for(int i =0;i<forts.size();i++){
            if(forts[i]==1){
                res = 0;
                int k =i+1;
                while(k<forts.size() && forts[k]==0){
                    if(forts[k]==0){

                        res++;
                    }
                    k++;
                }
                if(k < forts.size() && forts[k] == -1) { 
                    max_r = max(max_r, res);
                }
            }
            if(forts[i]==-1){
                res= 0;
                int h =i+1;
                while(h<forts.size()&&forts[h]==0  ){
                    if(forts[h]==0){
                        res++;
                    }
                    h++;
                }
                if(h < forts.size() && forts[h] == 1) { 
                    max_r = max(max_r, res);
                }
                
            }
        }
        return max_r;
    }
};