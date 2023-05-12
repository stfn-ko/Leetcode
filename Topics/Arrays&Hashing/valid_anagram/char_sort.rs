// @Runtime 12 ms (7.31%)
// @Memory 2.5 MB (12.58%)

pub fn is_anagram(s: String, t: String) -> bool {
    let mut sch: Vec<char> = s.chars().collect();
    let mut tch: Vec<char> = t.chars().collect();

    sch.sort();
    tch.sort();

    tch == sch
}