## Top K Frequent Elements

## Task:

Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

#### Example 1:

```
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
```

#### Example 2:

```
Input: nums = [1], k = 1
Output: [1]
```

#### Constraints:

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
- `k is in the range [1, the number of unique elements in the array].`
- `It is guaranteed that the answer is unique.`

---

## Solution
To solve this you need to populate an unordered map, where first element is a number in nums and the second element is its frequency. Then you use a priority queue of pairs, where the first element in the pair is unordered map's second element (frequency) and second element is unordered map's first element (number). This way priority queue contains a list of numbers sorted by their frequency. You start pushing numbers into the return vector when the size of priority queue is bigger than the size of unordered map minus k.    

### Additional links

- [CPP: priority_queue()](https://cplusplus.com/reference/queue/priority_queue/?kw=priority_queue+)
