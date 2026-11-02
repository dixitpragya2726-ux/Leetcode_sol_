class Solution {
public:
    int noofdays(string x,vector<int>&day){
        int mon = stoi(x.substr(0,2));
        int days  = stoi(x.substr(3,5));
        if(mon == 1){
            return days;
        }
        int ans = day[mon-2] + days;
        return ans;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>day = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=1;i<12;i++){
            day[i] = day[i-1]+day[i];
        }
        int aa = noofdays(arriveAlice,day);
        int al = noofdays(leaveAlice,day);
        int ba = noofdays(arriveBob,day);
        int bl = noofdays(leaveBob,day);
        int start = max(aa,ba);
        int end = min(bl,al);
        if(start>end){
            return 0;
        }
        return end-start+1;
        
    }
};