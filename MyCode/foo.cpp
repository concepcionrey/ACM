// Fenwick Trees, Binary Index Trees


// Purpose: to obtain the prefix sum of an array
int arr[1,2,3,4,5];
// From 0->2, prefix sum = 6
// From 0->5, prefix sum = 15

// Other alternative is to generate a prefix sum based array
int prefixSumArrayOfArr[1,3,6,10,15];
// We can then ask the sum from 0->4 = 10 or 0->2 = 6
// However, if there are several updates in the original array, then it takes O(n) to update this entier array
// 

// Advantages of Fenwick tree
// 1) Search = O(logn)
// 2) Update = O(logn)
// 3) Initialization = O(logn)

// Implementation details 
// 1) Given an array of elements from [0...index], a fenwick tree will go from [0...index+1]
// 2) It is stored as an array
// 3) The first node is a dummy node (node 0)
// 3.1) Take the binary representation of 2-> 10, flipping the right-most bit transforms it to 0 0 or simply 0
// 		Likewise, if we do the binary representation of 8-> 1000, flipping the right-most bit transforms it to 0000
// 		or simply 0. This procedure continues for n-children (reasoning for the implementation of the Fenwick tree 0->{1,2->{3},4->{5,6->{7}}},8->{...})
// 4) Every number can be represented as a power of 2( IMPORTANT) which fenwick trees use to store sums
// 4.1) 10 can be represented as 2^3 + 2^1, 11 is 2^3+2^1+2^0 (A good trick to say is obtain the parent + difference between the supposed number and the parent in powers of 2)
// 4.2) Since 0 is a dummy node, it will hold value 0
// 4.3) Given index 1, 1 is represented as 0 + 2^0, which means starting from index 0 of the original array, the sum of the
// next one element will be stored at 1 (or range (0,0)
// 4.4) Given index 2, 2 is represented as 0 + 2^1, which means starting from index 0 to the sum of the next two elements (including 0) will
// be stored at index 2 (or range (0,1))
// 4.5) Given index 3, 3 is represented as 2^1+2^0, which means starting at index 2 of the original array, the sum of the next one element
// 		will be stored at 3 (or range (2,2))

// Obtaining prefix-sum given some range 
// For instance, generate the prefix sum from index 0 to index 5,
// To obtain this, start from node 6, because you want to go at the end of index 5. Then you want to obtain 
int main() {
	return 0;
}