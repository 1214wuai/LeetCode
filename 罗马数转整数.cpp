    int romanToInt(string s) {
        //vector<string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        //vector<int> v = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        unordered_map<string,int> map = {
                             {"M",1000},
                             {"CM",900},
                             {"D",500},
                             {"CD",400},
                             {"C",100},
                             {"XC",90},
                             {"L",50},
                             {"XL",40},
                             {"X",10},
                             {"IX",9},
                             {"V",5},
                             {"IV",4},
                             {"I",1}
                            };
        int sz = s.size();
        int ret = 0;
       	for (int i = 0; i<sz;)
	    {
	    	if (i + 1<sz && map.find(s.substr(i, 2))!=map.end())
	    	{
	    		ret += map[s.substr(i, 2)];
	    		i+=2;
	    	}
	    	else
	    	{
	    		unordered_map<std::string, int>::const_iterator got = map.find(s.substr(i, 1));
	    		ret += got->second;
    			i++;
	    	}
	    }
        return ret;
    }
