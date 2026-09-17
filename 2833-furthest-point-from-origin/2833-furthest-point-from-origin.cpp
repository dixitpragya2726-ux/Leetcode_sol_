class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l =0;
        int r= 0;
        int n =moves.size();
        int distance =0;
        for(int i =0;i<moves.size();i++){
            if(moves[i]=='L'){
                l++;
            }
            if(moves[i]=='R'){
                r++;
            }
        }
        if(l>=r){
            int k = n-l-r;
            distance = abs(-1*(l+k) + r);
        }
        if(l<r){
            int k = n-l-r;
            distance = abs(r+k-l);
        }
    return distance;
    }
};