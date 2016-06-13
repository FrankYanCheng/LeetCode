#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
class Solution{
public:
	vector<int> twoSum(vector<int>& nums,int target)
        {
                vector<int> result;
                map<int,int>map_int;
		int temp_key;
	        for(int i=0;i<nums.size();++i)
         	{
			temp_key=target-nums[i];
			if(map_int.find(temp_key)!=map_int.end())
			{
				result.push_back(map_int[temp_key]);
				result.push_back(i);
				return result;		
			}
			else
			map_int[nums[i]]=i;
		}
		return result;
        }
};
int main()
{
        Solution solution;
	vector<int> test{1,2,3,4,5,6};
	vector<int> vector_test=solution.twoSum(test,11);
	for(vector<int>::iterator itr=vector_test.begin();
		itr!=vector_test.end();++itr)
	{
		cout<<*itr<<endl;	
	}
}

