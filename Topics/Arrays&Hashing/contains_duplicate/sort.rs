// @Runtime: 29ms (7.6%)
// @Memory: 3.2MB (93.97%)
// @Time: O(n log n)
// @Space O(n)

fn contains_duplicate(nums: Vec<i32>) -> bool {
    let mut n = nums;
    n.sort();

    for i in 1..n.len() {
        if (n[i] == n[i - 1]) {
            return true;
        }
    }
    false
}
