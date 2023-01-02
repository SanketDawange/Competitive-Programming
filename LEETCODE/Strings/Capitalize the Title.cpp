class Solution {
public:
    string getCapitalString(string s) {
        if(s.length()<=2) {
            for(int i=0; i<s.length(); i++)
                if(s[i]<=90)
                    s[i] += 32;
            return s;
        }
        else{
            for(int i=1; i<s.length(); i++) {
                if(s[i]<=90) {
                    s[i] += 32;
                }
            }
            if(s[0] >= 97) 
                s[0] -= 32;
        }
        return s;
    }
    vector<string> capitalize(vector<string> vs){
       vector<string> ans;
       for(int i=0; i<vs.size(); i++) {
           string s = getCapitalString(vs[i]);
           ans.push_back(s);
       }
       return ans; 
    }
    vector<string> titleToVector(string s){
        vector<string> v;
        string s1 = "";
        for(int i=0; i<s.length(); i++){
            s1 += s[i];
            if(s[i+1]==' ') {
                i += 1;
                v.push_back(s1);
                s1 = "";
            }
        }
        v.push_back(s1);
        return v;
    }
    string capitalizeTitle(string title) {
        vector<string> vs = titleToVector(title);
        vs = capitalize(vs);
        string ans = vs[0];
        for(int i=1; i<vs.size(); i++) {
            ans += " ";
            ans += vs[i]; 
        }
        return ans;
    }
};
