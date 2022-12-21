class Solution {
public:
    int mySqrt(int x) 
    {  if(x<2 and x!=0){
        return 1;
    }
    else if(x==0){
        return 0;
    }
    else{
            int low=1;int high=x/2;int ans=-1;
            while(low<=high){
                int mid=(low+high)/2;
                
                if((long)mid*mid==x){
                    return mid;
                }
                else if((long)mid*mid>x){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                    ans=mid;
                }
            }
            return ans;
    }
        
    }
};
