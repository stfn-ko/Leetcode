## ➕ Two Sum

## Task:

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

#### Example 1:

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

#### Example 2:

```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

#### Example 3:

```
Input: nums = [3,3], target = 6
Output: [0,1]
```

#### Constraints:

`2 <= nums.length <= 10^4`
`-10^9 <= nums[i] <= 10^9`
`-10^9 <= target <= 10^9`
`Only one valid answer exists.`

---

## Solution

At first I was confused and couldn't figure out how to solve this problem (cringe, bc this is an easy task). Then I started thinking how can I ustilize hashing to solve this problem. I realized that I can store the difference between `target` and `nums[i]` in `std::unordered_map`, this way if there's a `nums[i]` that is equal to difference between `target` and `nums[j]`, we know we have found a match. Here's an example:

`nums = { 2, 1, 5}` | `target = 7`

- `nums[0] => #map[2][0] => 7 - 2 = 5 => miss`
- `nums[1] => #map[1][1] => 7 - 1 = 6 => miss`
- `nums[2] => #map[5][2] => 7 - 5 = 2 => hit` - because 2 already exists in hash map

### Additional links

- [CPP: unordered_map::count()](https://www.geeksforgeeks.org/unordered_map-count-in-c/)
- [Rust: std::collections::HashMap](https://doc.rust-lang.org/std/collections/struct.HashMap.html)
