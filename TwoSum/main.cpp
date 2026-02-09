//code version 1.0
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> retvec;
        for(int v=0; v<nums.size()-1; v++){
            for(int w=v+1; w<nums.size(); w++){
                if(nums.at(v) + nums.at(w) == target){
                    retvec.push_back(v);
                    retvec.push_back(w);
                    return retvec;
                }
            }
        }
        return retvec;
    }
};
int main() {
    Solution s;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> recvec = s.twoSum(nums, target);
    if (!recvec.empty()){
        cout<<"Indices are : "<<recvec[0]<<" and "<<recvec[1]<<endl;
    }
    else{
        cout<<"No values in nums add to target"<<endl;
    }

    return 0;
}

