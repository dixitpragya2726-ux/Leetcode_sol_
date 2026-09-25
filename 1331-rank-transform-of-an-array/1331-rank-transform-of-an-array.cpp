class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int,int>ans;
        vector<int>fnf;
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i] = arr[i];
        }
        sort(res.begin(),res.end());
        int rank = 1;
        for(int i = 0; i < n; i++) { 
            if(ans.find(res[i]) == ans.end()) {
                ans[res[i]] = rank;
                rank++;
            }
        }
        for(int i=0;i<n;i++){
            fnf.push_back(ans[arr[i]]);
        }


return fnf;
    }
};