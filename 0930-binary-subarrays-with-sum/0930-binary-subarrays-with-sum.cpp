class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int result=0;
        int currSum=0;
        mp[0]=1;
        for(int &num :nums){
            currSum+=num;
            int remainingSum=currSum-goal;
            if(mp.find(remainingSum)!=mp.end()){
                result+=mp[remainingSum];
            }
            mp[currSum]++;
        }

    return result;    
    }

};