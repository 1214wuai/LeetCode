    int Max(int x, int y)
    {
        return x>y?x:y;
    }
    int Min(int x,int y)
    {
        return x>y?y:x;
    }
    int maxArea(vector<int>& height) {
        int sz = height.size();
        int maxsize = 0;
        int l = 0;
        int r = sz-1;
        while(l<r)
        {
            maxsize = Max(maxsize,(Min(height[r],height[l])*(r-l)));
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxsize;
    }