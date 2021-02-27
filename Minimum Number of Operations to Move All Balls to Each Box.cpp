class Solution {
public:
    vector<int> minOperations(string boxes) {
        int left[boxes.size()]; int right[boxes.size()];
        left[0]=0;int count = boxes[0]-'0';
        for(int i=1;i<boxes.size();i++){
            left[i]=left[i-1]+count;
            count= count+boxes[i]-'0';
        }
        count=boxes[boxes.size()-1]-'0'; 
        right[boxes.size()-1]=0;
        for(int i=boxes.size()-2;i>=0;i--){
            right[i]=right[i+1]+count;
            count=count+boxes[i]-'0';
        }
        vector<int> ans (boxes.size(),0);
        for(int i=0;i<boxes.size();i++){
            ans[i]=left[i]+right[i];
            
        }
        return ans;
    }
};
