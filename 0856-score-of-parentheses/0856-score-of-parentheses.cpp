class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int>result;
        int n=s.size();
        int score=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                result.push_back(score);
                score=0;
            }
            else{
                if(s[i-1]=='('){
                    score=result.back()+1;

                }
                else{
                    score=result.back()+(score*2);
                }
                result.pop_back();
            }
        }
        return score;
    }
};