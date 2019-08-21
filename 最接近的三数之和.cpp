public:
    void Sort(vector<int>& v, const int& sz)
    { 
        int j = 0;
        for(int i = 1; i<sz; i++)
        {
            int tmp = v[i];
            for(j = i; j>0 && v[j-1]>tmp; j--)
                v[j] = v[j-1];
            v[j] = tmp;
        }
    }
    
    int threeSumClosest(vector<int>& nums, int target) {
        int sz = nums.size();
        Sort(nums,sz);
        int ret = nums[0]+nums[1]+nums[2];
        for(int k = 0; k<sz-2; k++)
        {
            int i = k+1;
            int j = sz-1;
            while(i<j)
            {
                int sum = nums[k]+nums[i]+nums[j];
                if(abs(sum-target) < abs(ret-target))
                    ret = sum;
                if(sum>target)
                    j-=1;
                else if(sum<target)
                    i+=1;
                else
                    return ret;
            }
        }
        return ret;
    }