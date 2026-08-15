class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int result=0;
        int countOdd=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            countOdd+=(nums[i]%2);
            if(mp.count(countOdd-k)){
                result+=mp[countOdd-k];
            }
            mp[countOdd]++;

        }
        return result;
        
    }
};