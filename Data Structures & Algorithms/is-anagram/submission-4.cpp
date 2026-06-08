class Solution {
public:
    bool isAnagram(string s, string t) {
   string news=t;
    int count=0;
    int found;
     for(int i = 0;i<s.length();i++){
      found = news.find(s.at(i));
        if(found!=string::npos){
            count++;
            news.erase(found, 1);
        }
     }   
     if((count==t.length())&&count==s.length()){
        return true;
     }
     else{
        return false;
     }
    }
};
