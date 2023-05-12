// @Runtime 1 ms (88.27%)
// @Memory 2.2 MB (60.71%)

pub fn is_anagram(s: String, t: String) -> bool {
    if (s.len() != t.len()) {
        return false;
    }

    let mut counts = vec![0; 26];

    for ch in s.chars() {
        counts[ch as u8 as usize - b'a' as usize] += 1;
    }

    for ch in t.chars() {
        counts[ch as u8 as usize - b'a' as usize] -= 1;
        if counts[ch as u8 as usize - b'a' as usize] < 0 {
            return false;
        }
    }

    true
}
