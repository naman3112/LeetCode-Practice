class Solution {
public:
    
    // finding the substring 
    bool isSubs(string s, string d){
        int len1=s.size(); 
        int len2=d.size();
        int j=0;
        for(int i=0;i<len1;i++){
            if(s[i]==d[j]){
                j++;
            }
            if(j==len2){
                return true;
            }
        }
    return false;
    
    }
    
    
    string findLongestWord(string s, vector<string>& d) {
         vector<pair<int,string>> check;
        for(auto it:d){
            int len = it.size();
            len*=-1;
            check.push_back({len,it});
          
        }
        // sorting has done on basis of length of array and also lexographically 
        sort(check.begin(),check.end());
        string ans="";
        for(auto it:check){
             if(isSubs(s,it.second)==true){
                 ans=it.second;
                 break;
             }
        }
        return ans;
    }
};
