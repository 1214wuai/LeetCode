void Sort(vector<int>& v,const int& sz)
    {
        int i,j;
        for(i = 1; i<sz; i++)
        {
            int tmp = v[i];
            for(j=i; j>0 && v[j-1]>tmp;j--)
                v[j]=v[j-1];
            v[j]=tmp;
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sz = nums.size();
        Sort(nums,sz);
        vector<vector<int>> ret;
        int k = 0;
        
        for(k; k<sz-2; k++)
        {
            if(nums[k]>0)
                break;
            int i = k+1;
            int j = sz-1;
            if(k>0 && nums[k]==nums[k-1])
                continue;
            while(i<j)
            {
                int s = nums[k]+nums[i]+nums[j];
                if(s<0)
                {
                    i+=1;
                    while(i<j&&nums[i]==nums[i-1])
                        i+=1;
                }
                else if(s>0)
                {
                    j-=1;
                    while(i<j&&nums[j]==nums[j+1])
                        j-=1;
                }
                else
                {
                    vector<int> v = {nums[k],nums[i],nums[j]};
                    ret.push_back(v);
                    i+=1;
                    j-=1;
                    while(i<j&&nums[i]==nums[i-1])
                        i+=1;
                    while(i<j&&nums[j]==nums[j+1])
                        j-=1;
                }
            }

        }
        return ret;
    }