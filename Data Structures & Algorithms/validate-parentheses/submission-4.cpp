class Solution {
   public:
    bool isValid(string s) {
        stack<char> par;
        if(s.length()%2!=0){
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if(s.at(i)=='{'||s.at(i)=='('||s.at(i)=='['){
                par.push(s.at(i));
            }
            else{
                if(par.empty()) return false;
                if(par.top()=='[' && s.at(i) == ']'){
                    par.pop();
                }
                else if(par.top()=='(' && s.at(i) == ')'){
                    par.pop();
                }
                else if(par.top()=='{' && s.at(i) == '}'){
                    par.pop();
                }
                else return false;
            }
        }
        if(par.empty()){
            return true;
        }
        return false;
        
    }
};
