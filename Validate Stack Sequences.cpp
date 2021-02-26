class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        // create a stack 
        stack<int> st;
       int j=0;
     for(int i =0;i<pushed.size();i++){
         st.push(pushed[i]);
         while(st.size()>0 && st.top()==popped[j]){
             st.pop();
             j++;
         }
     }
  if(st.size()>0)
      return false;
   return true;     
        
    }
};
