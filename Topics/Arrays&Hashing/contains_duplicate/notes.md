## :mag: Contains Duplicate

### Task:

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#### Example 1:

```
Input: nums = [1,2,3,1]
Output: true
```

#### Example 2:

```
Input: nums = [1,2,3,4]
Output: false
```

#### Example 3:

```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```

#### Constraints:

`* 1 <= nums.length <= 105`

`* -109 <= nums[i] <= 109`

### Solution

Since I had previously solved similar problems my initial thought is to use an [unordered map](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/). I will iterate through the array and populate a key-value store where each i-th element is a key and amount the of its appearances is the value. If any value gets bigger then one return true, else false.

#### Notes

My initial solution failed, because I didn't take into account constraints. I used uint8_t type for both key and value:

```c++
std::unordered_map<uint8_t, uint8_t> um; // didn't work, bc i belongs to {-9e10, 9e10}
std::unordered_map<int, int> um; // worked
```

#### Additional links

[Rust HashSet](https://doc.rust-lang.org/std/collections/struct.HashSet.html)
