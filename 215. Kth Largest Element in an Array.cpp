#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution genius
// 快速排序思想，选取哨兵变量pivot，与快排相比，只需要维护half part 

using namespace std;

class Solution {
public:
	int partition(vector<int>& nums, int left, int right){
		int pivot = nums[left];
		int l=left+1, r=right;
		while(l<=r){
			if(nums[l] < pivot && nums[r]>pivot)	swap(nums[l++],nums[r--]);
			if(nums[l] >= pivot)		l++;
			if(nums[r] <= pivot)		r--;
			
		}
		swap(nums[left],nums[r]);
		return r;
	}
    int findKthLargest(vector<int>& nums, int k) {
        int left=0, right = nums.size()-1;
		while(true){
			int pos = partition(nums,left,right);
			if(pos == k-1)	return nums[pos];
			if(pos > k-1)	right=pos;
			else left=pos+1;
		} 
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	vector<int> v;
	v.push_back(99);
	v.push_back(99);
	cout << s.findKthLargest(v,1) << endl;
	
	return 0;
}

