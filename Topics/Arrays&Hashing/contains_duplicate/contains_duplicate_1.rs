// @Runtime: 10ms (98.67%)
// @Memory: 3.9MB (48.67%)
// @Time: O(n)
// @Space O(n)

fn contains_duplicate(nums: Vec<i32>) -> bool {
    use std::collections::HashSet;
    let mut set = HashSet::new();
    for num in nums {
        if !set.insert(num) {
            return true;
        }
    }
    false
}
