class Solution {
public:
    int maxDepth(string s) {
        int openBracket=0;
        int result=0;

        for(char &ch :s){
            if(ch=='('){
                openBracket++;
            }
            else if(ch==')'){
                openBracket--;
            }
            result=max(result,openBracket);
        }
        return result;
        
    }
};