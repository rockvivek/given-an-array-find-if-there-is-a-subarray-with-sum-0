#include <iostream>
#include<unordered_set>

using namespace std;

//given an array find if there is a subarray with sum 0
int main() {
    int arr[] = {5,6,-4,-2,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> us;
    int sum = 0;
    us.insert(0);
    for(int i =0 ;i<n;i++){
        sum+=arr[i];
        if(us.find(sum)!=us.end()){
            cout<<"true";
        }
        else{
            us.insert(sum);
        }
    }
    cout<<false;
	return 0;
}