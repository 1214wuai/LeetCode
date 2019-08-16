class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int sz1 = nums1.size();
		int sz2 = nums2.size();
		int x = (sz1 + sz2) / 2;
		vector<int> v3;
		int index1 = 0;
		int index2 = 0;
		for (int i = 0; i < sz1 + sz2; i++)
		{
			if (index1<sz1 && index2<sz2)
			{
				if (nums1[index1]<nums2[index2])
				{
					v3.push_back(nums1[index1]);
					index1++;
				}
				else
				{
					v3.push_back(nums2[index2]);
					index2++;
				}
			}
			else if (index1 == sz1)
			{
				v3.push_back(nums2[index2]);
				index2++;
			}
			else
			{
				v3.push_back(nums1[index1]);
				index1++;
			}
		}
		double ret = 0.0;
		if ((sz1 + sz2) % 2 == 0)
		{
			int y = x - 1;
			ret = ((double)v3[x] + (double)v3[y]) / 2;
		}
		else
			ret = v3[x];
		return ret;
	}
};