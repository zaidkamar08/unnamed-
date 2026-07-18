class Solution {
    int gcd(int a,int b){
    if(b>a)
        return gcd(b,a);
    
    if(b==0)
        return a;
        return gcd(b,a%b);
    }
public:
    int findGCD(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int smallest,largest;
    smallest=nums[0];
    largest=nums[nums.size()-1];
    return gcd(smallest,largest);  
    }
};