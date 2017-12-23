#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution genius！！！ 
// 只需遍历一遍序列，因为已知major存在，所以只需要维护一个变量count
// 遇到major，count++，其他项,count--，减到0后重新计数
// 因为major个数 > n/2，所以最后count一定抵消掉，最终大于0,结果记录在major中 

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major, count;
        major = nums[0], count=1;
        for(int i=1; i<nums.size(); i++){
        	if(count == 0){
        		count=1;
        		major = nums[i];
			}else if(major == nums[i]){
				count++;
			}else{
				count--;
			}
		}
		return major;
    }
};

int main() {
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	Solution s;
	
	
	return 0;
}

