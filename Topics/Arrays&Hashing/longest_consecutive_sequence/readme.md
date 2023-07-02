## ✅ Longest Consecutive Sequence

## Task:

Given an unsorted array of integers `nums`, return the length of the *longest consecutive elements sequence*.

You must write an algorithm that runs in `O(n)` time.


#### Example 1:

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is `[1, 2, 3, 4]`. Therefore its length is 4.
```

#### Example 2:

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
```

#### Constraints:

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

---

## Solution
So, we start off with a C++ class called `Solution`. Inside this class, we have a couple of variables: um and ans. The um variable is an unordered map, which is like a special type of dictionary that allows us to associate keys with values. It's going to be our handy lookup table. On the other hand, ans is a variable that will store the length of the longest consecutive sequence we find.

Moving on, we have a function called check_num. This function takes an integer as input and does some important work. First, it checks if the number is already present in the unordered map. If it is, then we know we have already processed this number before, so we can simply return from the function without doing anything else.

If the number is not in the unordered map, it means we've encountered a new number that needs to be processed. Here comes the interesting part. We update the unordered map in a very clever way. We assign the same value to four different keys: `_n`, `_n + um[_n+1]`, `_n - um[_n-1]`, and the sum of `um[_n+1]` and `um[_n-1]` plus one. This effectively represents the length of the consecutive sequence starting from the current number.

After updating the unordered map, we compare the length we just calculated with our ans variable. If the new length is smaller than the current longest sequence stored in ans, we don't need to do anything. But if the new length is greater, we update ans to hold this new longer length.

Finally, we have the longestConsecutive function, which takes a vector of integers as input. Inside this function, we loop over each number in the vector and call the check_num function to process it. This way, we ensure that we process all the numbers and update the unordered map with their consecutive sequence lengths.

Once we finish processing all the numbers, we simply return the value of ans from the longestConsecutive function. This will give us the length of the longest consecutive sequence in the input vector.

