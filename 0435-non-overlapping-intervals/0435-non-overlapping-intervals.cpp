class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int i=0;
        int j=1;
        int cnt=0;
        while(j<n){
            vector<int>curr_interval=intervals[i];
            vector<int>next_interval=intervals[j];
            int cs=curr_interval[0];
            int ce=curr_interval[1];
            int ns=next_interval[0];
            int ne=next_interval[1];
            if(ce<=ns){
                i=j;
                j++;
            }
            else if(ce<=ne){
                j++;
                cnt++;
            }
            else{
                i=j;
                j++;
                cnt++;
            }
        }
        return cnt;
        
    }
};