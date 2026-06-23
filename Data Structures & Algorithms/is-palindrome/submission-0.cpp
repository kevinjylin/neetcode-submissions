class Solution {
public:
    bool isPalindrome(string s) {
        string newstring = "";
        for(int i =0; i<s.length();i++){
            if(isalpha(s.at(i)) || isdigit(s.at(i))){
                s.at(i) = tolower(s.at(i));
                newstring+=s.at(i);
            }
        }
        int lhs = 0;
        
        while(newstring.length()>1){
            int rhs = newstring.length()-1;
            if(newstring.at(lhs) == newstring.at(rhs)){
                cout << newstring << endl;
                newstring.erase(lhs, 1);
                newstring.pop_back();
            }
            else{
                cout << newstring << "false";
                return false;
            }
        }
        return true;
    }
};
