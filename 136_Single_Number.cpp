// 136. Single Number
//description:
/*
Given an array of integers, every element appears twice except for one. Find that single one.
*/


//information: http://www.cplusplus.com/reference/vector/vector/
// unoerdered_map http://www.cplusplus.com/reference/unordered_map/unordered_map/find/



#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
	unordered_map<int, bool> solu;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
		if(solu.find(*it) == solu.end()){
			solu.insert({{*it, true}});
			//solu.insert(make_pair<int, bool>(*it, true));
		}
		else{
			solu.erase(solu.find(*it));
		}
	}
	return solu.begin()->first;
    }
};

int main(){
	vector<int> test;
	test.push_back(1);
	test.push_back(11);
	test.push_back(11);
	test.push_back(12);
	test.push_back(12);


	Solution solu;
        cout << solu.singleNumber(test);

        return 0;
}
