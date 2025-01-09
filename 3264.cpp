class Solution {
public:
    vector<int> getFinalState(vector<int>& arr, int k, int mul) {
        map<int,int>mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < arr.size(); i++)pq.push({arr[i],i});
        
        for(int i = 0; i < k ; i++){
            int x = pq.top().first;
            int y = pq.top().second;
            pq.pop();
            pq.push({x * mul,y});
        }
        while(!pq.empty()){
            mp[pq.top().second] = pq.top().first;
            
            pq.pop();
            
        }
        for(auto &[x,y]: mp) arr[x] = y;
        return arr;
    }
};
