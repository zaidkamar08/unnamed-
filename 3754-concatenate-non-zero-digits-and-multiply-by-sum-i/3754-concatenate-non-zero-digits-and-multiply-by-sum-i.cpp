class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        stack<int>st;
        while(n){
            if(n%10!=0){
                st.push(n%10);
                sum+=(long long)(n%10);
            }
            n/=10;
        }
        long long ans=0;
        while(st.size()>0){
            ans=ans*10+(long long )st.top();
            st.pop();
        }
        return sum*ans;

    }
};