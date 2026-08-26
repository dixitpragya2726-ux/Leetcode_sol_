class Solution {
public:
   string lexo(string a, string b){
    for(int i = 0; i < min(a.size(), b.size()); i++){
        if(a[i] > b[i]) return b;
        else if(a[i] < b[i]) return a;
    }
    if(a <= b){
        return a;
    } else {
        return b;
    }
}

    string shortestBeautifulSubstring(string s, int k) {
        int c= 0;
        int i =0;
        int j = 0;
        int ans = INT_MAX;
        string answerst = "";
        while(j<s.size()){
            if(s[j]=='1'){
                c++;
            }
            while(c>k && i<s.size()){
                if(s[i]=='1'){
                    c--;
                }
                i++;
            }
            if(c==k){
                while(i<=j && s[i] == '0'){
                    i++;
                }
                int len = j-i+1;
                string res = s.substr(i,len);
                if(len<ans){
                    ans = len;
                    answerst = res;
                    
                }
                else if(ans == len){
                    answerst = lexo(res,answerst);
                }
            }
            j++;
            
        }
        return answerst;
    }
};