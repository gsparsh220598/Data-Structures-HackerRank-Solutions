import Foundation

// Enter your code here

// number of elements
let n = Int(readLine()!)!

// read array
let arr = readLine()!.components(separatedBy: " ").map{ Int($0)! }

// iterate over the array in reverse order and print the elements separated by space
var arrRev = [Int]()
let m = n - 1
for x in 0 ..< arr.count {
	arrRev.append(arr[m-x])
}

for x in 0 ..< n {
	print("\(arrRev[x])", terminator: " ")
}










