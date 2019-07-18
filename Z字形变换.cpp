string convert(string s, int numRows) {
	if (numRows <= 1)
		return s;
    int sz = s.size();
    int count = 2*numRows-2;
    string ret;
    for(int i = 0; i<numRows; i++)
    {
        for(int j = 0; j+i<sz; j+=count)
        {
            ret+=s[i+j];
            if(i!= 0 && i!=numRows-1 && j+count-i<sz)
                ret+=s[j+count-i];
        }
    }
    return ret;
}