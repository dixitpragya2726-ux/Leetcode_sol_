class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int j =2;
        for(int i =0;i<2;i++){
            swap(s1[i],s1[j]);
            if(s1==s2){
            return true;
        }
            j++;
        }
        
        int k =2;
        for(int i =0;i<2;i++){
            swap(s2[i],s2[k]);
            if(s1==s2){
            return true;
        }
            k++;
        }
        
    return false;
    }
};