class Solution {
public:
    int countPairs(vector<int>& arr) {
        
        int cnt = 0, n = arr.size();
        for(int i = 0; i < n ; i++){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]) cnt++;
                else{
                    int x = arr[i];
                    int y = arr[j];

                    string xx = to_string(x);
                    string yy = to_string(y);

                    while( xx.size() < yy.size()){
                        xx = "0" + xx;
                    }
                    while(yy.size() < xx.size()){
                        yy = "0" + yy;
                    }
                    vector<int>vec;
                    for(int k = 0;  k < xx.size(); k++){
                        if(xx[k] != yy[k]){
                            vec.push_back(k);
                        }
                    }
                    if( vec.empty() == true) cnt++;
                    else if( vec.size() == 2){
                        swap(yy[vec[0]], yy[vec[1]]);
                        if( stoi(xx) == stoi(yy)) cnt++;
                    }
                }
            }
        }
        return cnt;
        
    }
};
