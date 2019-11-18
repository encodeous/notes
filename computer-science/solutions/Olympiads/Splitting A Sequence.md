# Solution

`4 2 4 5 1`

m = 3 (subarrays)

1. [4] [2,4,5] [1] => [4,11,1] => max 11
2. [4,2] [4,5][1] => [6,9,1] => max 9
3. [4] [2,4] [5,1] => [4,6,6] => 6

min({1,2,3}) = 6

Solution: Binary Search, guess the minimum

The lower number will bte the max number of the set
The max is the total

Guess if the sum of any given subarray is less or equal to the equal number if the binary search.

If you can construct the sets with less subarrays than m, you can def construct.