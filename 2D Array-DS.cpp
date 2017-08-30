#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
	vector< vector<int> > arr(6,vector<int>(6));
	for(int arr_i = 0;arr_i < 6;arr_i++){
		for(int arr_j = 0;arr_j < 6;arr_j++){
			cin >> arr[arr_i][arr_j];
		}
	}
	vector<int> sum(16);
	//assigns 0 to all n elements of sum
	for (int i = 0; i < 16; i++) {
		sum[i] = 0;
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 4*i; j < 4*(i+1); j++) {
			for(int k = i; k < i+3; k++) {
				//adds top and bottom layers of the hourglass
				sum[j] += arr[(j-(4*i))][k] + arr[((j+2)-(4*i))][k];
			}
			//adds the middle row of the hourglass
			sum[j] += arr[j+1-4*i][i+1];
		}
	}
	
	//finds maximum value in sum
	int max;
	max = sum[0];
	for (int i = 0; i < 16; i++) {
		if (max < sum[i]) {
			max = sum[i];
		}
	}
	cout << max;
	return 0;
}
