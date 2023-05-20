fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
    use std::collections::HashMap;
    use std::collections::BinaryHeap;
    
    let mut hm = HashMap::new();
    let mut ans = Vec::new();
    
    for n in nums {
        *hm.entry(n).or_insert(0) += 1;
    }

    let mut v: Vec<(i32, i32)> = hm
        .into_iter()
        .map(|(a,b)|(b,a))
        .collect();

    let mut max_heap = BinaryHeap::from(v);

    while let Some((_, num)) = max_heap.pop() {
        ans.push(num);
        if ans.len() == k as usize {
            break;
        }
    }

    ans
}