class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map <char, int> m;
        unordered_map <char, int> n;
        int count = 0;
        
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
            n[t[i]]++;
        }
        
        for(auto i : m){
            if(n[i.first] < i.second){
                count = count + i.second - n[i.first];
            } 
        }
        
        return count;
        
    }
};
