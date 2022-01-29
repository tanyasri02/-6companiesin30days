class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>>graph(n);
        priority_queue<pair<double,int>>pq;
        vector<double>maxPro(n,0);
        
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]].push_back({edges[i][1], succProb[i]});
            graph[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        pq.push({1.0,start});
        
        maxPro[start] = 1;
        
        while(!pq.empty())
        {
            int current = pq.top().second;
            double prevProbability = pq.top().first;
            pq.pop();
            
            for(auto it : graph[current]){
                if(prevProbability * it.second > maxPro[it.first]){
                    maxPro[it.first] = prevProbability * it.second;
                    pq.push(make_pair(maxPro[it.first], it.first));
                }
            }
        }
        
        return maxPro[end];
    }
};