class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        int start=0;
        int last[256];
        for(int i=0;i<256;i++){
            last[i]=-1;
        }
        for(int i=0;i<s.length();i++){
            if(last[s[i]]>=start){
                start=last[s[i]]+1;
            }
            last[s[i]]=i;
            int len=i-start+1;
            if(len>maxLen){
                maxLen=len;
            }
        }
        return maxLen;
        
    }
};