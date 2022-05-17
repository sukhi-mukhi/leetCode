//commented is my solution. uncommented is modified solution

int climbStairs(int n) {
        
//         if(n==1) return 1;
//         if(n==2) return 2;
        
//         vector<int> v;
//         v.push_back(1);
//         v.push_back(2);
        
//         for(int i=2;i<n;i++){
//             v.push_back(v[i-2]+v[i-1]);
//         }
//         int num=v[v.size()-1];
        
//         return num;
        
        if(n<=2) return n;
        int prev1=1,prev2=2,res;
        
        for(int i=3;i<=n;i++){
            res=prev1+prev2;
            prev1=prev2;
            prev2=res;
        }
        return res;
    }
