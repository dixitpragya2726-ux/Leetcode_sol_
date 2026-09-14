class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x = 0;
        int y =0;
        if(max(rec1[0],rec2[0])<min(rec2[2],rec1[2])){
            x++;
        }
        
        if(max(rec1[1],rec2[1])<min(rec2[3],rec1[3])){
            y++;
        }
        
        if(x+y == 2){
            return true;
        }
        return false;

    }
};