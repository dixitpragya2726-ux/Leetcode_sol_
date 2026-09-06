class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>res;
        int n = arr.size();
        int pc = n/4;
        for(int i =0;i<arr.size();i++){
            res[arr[i]]++;
            if(res[arr[i]]>pc){
                return arr[i];
            }
        }
        return -1;
    }
};