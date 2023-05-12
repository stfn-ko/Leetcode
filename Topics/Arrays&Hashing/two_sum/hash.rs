// @Runtime 3 ms (50.98%)
// @Memory 2.5 MB (15.96%)

pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    use std::collections::HashMap;
    let mut map = HashMap::new();

    for (i, num) in nums.iter().enumerate() {
        let diff = target - num;

        if let Some(&j) = map.get(&diff) {
            return vec![j as i32, i as i32];
        }

        map.insert(num, i);
    }

    panic!("no solution");
}
