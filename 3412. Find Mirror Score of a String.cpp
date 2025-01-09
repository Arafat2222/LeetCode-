class Solution {
public:
    long long calculateScore(string str) {
        //string str; //cin >> str;
        map<char,char>mp;
        vector<int>vis(1e6+123,0);
        char z = 'z';
        for( char ch = 'a'; ch <= 'm'; ch++ ){
            mp[ch] = z;
            mp[z] = ch;
            z--;
        }
        stack<int>arr[27];
        long long  ans = 0;
        for(int i = 0; i < str.size(); i++){
            arr[str[i] - 'a'].push(i);
        
            int indx = mp[str[i]] - 'a';
            if(!arr[indx].empty() && vis[i] == 0){
                
                if(vis[i] == 0 && vis[arr[indx].top()] == 0){
                    ans += abs(arr[indx].top() - i);
                    vis[i] = 1;
                    vis[arr[indx].top()] = 1;
                }
                arr[indx].pop();

            }
            
        }
        return ans;
            
    }
};
