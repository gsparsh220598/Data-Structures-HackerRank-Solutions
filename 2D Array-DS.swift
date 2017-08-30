import Cocoa

import Foundation;

// Enter your code here
let n = 6
var arr2D = [[Int]]()

//reading input in indevidual lines and appending it to arr2D
for i in 0 ..< n {
	var arr = readLine()!.components(separatedBy: " ").map{ Int($0)! }
	arr2D.append(arr)
}
//assigns 0 to all 16 elements of sum
var sum = [Int](repeatElement(0, count: 16))

for i in 0 ..< 4 {
	for j in 4*i ..< 4*(i+1) {
		for k in i ..< i+3 {
			//adds top and bottom layers of the hourglass
			sum[j] += arr2D[(j-(4*i))][k] + arr2D[((j+2)-(4*i))][k]
		}
		//adds the middle row of the hourglass
		sum[j] += arr2D[j+1-4*i][i+1]
	}
}
//finds maximum value in sum
var min = sum.max()
print(min!)










