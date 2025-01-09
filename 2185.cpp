class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int tot = 0;
        for(auto &str: words){
            if(str.size() >= pref.size()){
                if(str.substr(0, pref.size()) == pref) tot++;
            }
        }
        return tot;
    }
};
