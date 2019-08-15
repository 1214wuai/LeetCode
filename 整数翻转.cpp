    int reverse(int x) {
        
        int ret = 0;
        while(x)
        {
            int l = x%10;
            if(ret>INT_MAX/10 || (ret==INT_MAX && l>7)) return 0;
            if(ret<INT_MIN/10 || (ret==INT_MIN && l<-8)) return 0;
            ret = ret*10+l;
            x/=10;
        }
        return ret;
    }