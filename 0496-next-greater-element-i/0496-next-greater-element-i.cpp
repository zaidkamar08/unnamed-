class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>table;
        for(int i=0;i<nums2.size();i++){
            int curr=nums2[i];
            bool found=false;

            for(int j=i+1;j<nums2.size();j++){
                if(nums2[j]>curr){
                    table[curr]=nums2[j];
                    found =true;
                    break;
                }
            }
            if(!found){
                table[curr]=-1;
            }
        }
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            result.push_back(table[nums1[i]]);
        }
        return result;

        
    }
};