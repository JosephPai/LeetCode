#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

// Solution genius������ 
// ֻ�����һ�����У���Ϊ��֪major���ڣ�����ֻ��Ҫά��һ������count
// ����major��count++��������,count--������0�����¼���
// ��Ϊmajor���� > n/2���������countһ�������������մ���0,�����¼��major�� 

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

