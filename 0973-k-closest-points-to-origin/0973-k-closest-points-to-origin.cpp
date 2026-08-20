class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int, pair<int, int>>> maxH;
        
        for (int i = 0; i < points.size(); i++) {
            
            int x = points[i][0];
            int y = points[i][1];
            
            int dist = x * x + y * y;
            
            maxH.push({dist, {x, y}});
            
            if (maxH.size() > k) {
                maxH.pop();
            }
        }
        
        vector<vector<int>> ans;
        
        while (!maxH.empty()) {
            int x = maxH.top().second.first;
            int y = maxH.top().second.second;
            
            ans.push_back({x, y});
            
            maxH.pop();
        }
        
        return ans;
    }
};