class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    vector<int>result(n,-1);
    for(int i=0;i<n;i++){
        int curr=nums[i];

        for(int k=1;k<n;k++){
            int j=(i+k)%n;
            if(nums[j]>curr){
                result[i]=nums[j];
                break;
            }
        }
    }
    return result;
    }
};