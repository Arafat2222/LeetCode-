class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i = 0; i < n; i++){
            
            v.push_back(i+1);
        }

        int c = 0,i = 0, ind = 0;
        while(v.size() != 1){
            c++;
            if( c < k){
                v.push_back(v[i]);
                v.erase(v.begin() +i);
                i = 0;
                continue;
            }
            else if( c == k){
                c = 0;
                //cout << v[i] << " ";
                v.erase(v.begin() +i);
                i = 0;
                continue;
            }
            //i++;
        }
        return v[0];
    }
};
