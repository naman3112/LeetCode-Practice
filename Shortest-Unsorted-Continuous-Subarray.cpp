class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        // scan from left and right 
        int s=0,e=nums.size()-1;
        for(s=0;s<nums.size()-1;s++){
            if(nums[s]>nums[s+1]){
                break;
            }
        }
        if(s==nums.size()-1){
            return 0;
        }
        // right tp left scanning 
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<nums[i-1]){
                e=i;
                break;
            }
        }
        cout<<"start "<<s<<"end "<<e<<endl;
        
        // possible unsorted array 
        // finding min and max from this part of the array
       int min_1=nums[s],max_1=nums[s];
        for(int i=s+1;i<=e;i++){
            min_1=min(min_1,nums[i]);
            max_1=max(max_1,nums[i]);
        }
     //   cout<<"min_1 "<<min_1<<" "<<"max_1 "<<max_1<<endl;

        for(int i=0;i<s;i++){
            if(min_1<nums[i]){
                s=i;
                break;
            }
        }
        
        
        for(int i=nums.size()-1;i>=e+1;i--){
           if(nums[i]<max_1){
               e=i;
               break;
           }
        }
        
    
        return (e-s+1);
    }
};
