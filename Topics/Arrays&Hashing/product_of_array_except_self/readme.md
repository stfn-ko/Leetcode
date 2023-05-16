## Product of Array Except Self

## Task:

Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

#### Example 1:

```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
```

#### Example 2:

```
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
```

#### Constraints:

- `2 <= nums.length <= 105`
- `-30 <= nums[i] <= 30`
- The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

---

## Solution

In this problem, we are tasked with finding the product of all the elements in an array, except the current element at each index. Let's walk through the algorithm together using examples to understand how it works:

1. Initializing the `ans` array: To solve this problem efficiently, I start by creating an empty `ans` array with the same size as the input array `nums`. This array will store the product of all elements except the current element at each index.

2. Calculating products of right elements: I begin by calculating the products of all the elements to the right of each index. Since there are no elements to the right of the last element, I initialize `ans[n-1]` (the last index) to 1.

```c++
ans = [0, 0, 0, 1]
```

3. Iterating from right to left: I iterate from `n-2` to `0`, moving from right to left. For each index `i`, I calculate the product of `nums[i+1]` (the next element to the right) and `ans[i+1]` (the previously computed product). This gives me the product of all the elements to the right of `nums[i]`, which I store in `ans[i]`.

```c++
ans[3] = 1
ans[2] = 4 * 1 = 4
ans[1] = 3 * 4 = 12
ans[0] = 2 * 12 = 24
```

After this step, the ans array represents the products of the elements to the right of each index:

```c++
ans = [24, 12, 4, 1]
```

Calculating products of left elements: Now, I need to calculate the products of all the elements to the left of each index. To do this, I initialize a variable `leftProd` to 1, which will store the product of all elements to the left of the current element.

Iterating from left to right: I iterate from `0` to `n-1`, moving from left to right. For each index `i`, I multiply `leftProd` with `ans[i]` (the previously computed product of the right elements) and assign the result back to `ans[i]`. Additionally, I multiply `leftProd` with `nums[i]` to update its value for the next iteration. By doing this, I calculate the final product of all the elements except the current element and store it in `ans[i]`.

```c++
leftProd = 1
ans[0] = 1 * 24 = 24

leftProd = 1 * 1 = 1
ans[1] = 1 * 12 = 12

leftProd = 1 * 2 = 2
ans[2] = 2 * 4 = 8

leftProd = 2 * 3 = 6
ans[3] =  6 * 1 = 6
```

After this step, the ans array contains the product of all elements except the current element at each index:

```c++
ans = [24, 12, 8, 6]
```

### Additional links
