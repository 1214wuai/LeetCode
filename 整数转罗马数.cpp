    string intToRoman(int num) {
        vector<string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> v = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        int index = 0;
        string res;
        while(index<13)
        {
            while(num>=v[index])
            {
                res+=s[index];
                num-=v[index];
            }
            index++;
        }
        return res;
    }