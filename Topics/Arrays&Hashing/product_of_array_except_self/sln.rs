// @Runtime: 8 ms (84%)
// @Memory: 3.1 MB (94.29%)

pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
    let mut ans: Vec<i32> = vec![1; nums.len()];
    let mut prod: i32 = 1;

    for i in 1..nums.len() {
        ans[i] = nums[i - 1] * ans[i - 1];
    }

    for i in (0..nums.len() - 1).rev() {
        prod *= nums[i + 1];
        ans[i] *= prod;
    }

    ans
}
