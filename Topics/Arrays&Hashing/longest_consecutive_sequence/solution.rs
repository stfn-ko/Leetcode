// @Runtime 31 ms (57.44%)
// @Memory: 3.3 MB (78.44%)

use std::collections::HashSet;

impl Solution {
    pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
        let hs: HashSet<_> = nums.into_iter().collect();
        let mut r = 0;

        for &n in &hs {
            if !hs.contains(&(n - 1)) {
                r = r.max((n..).take_while(|x| hs.contains(x)).count());
            }
        }

        r as i32
    }
}