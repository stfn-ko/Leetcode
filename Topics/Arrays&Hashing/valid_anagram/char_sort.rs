pub fn is_anagram(s: String, t: String) -> bool {
    let mut sch: Vec<char> = s.chars().collect();
    let mut tch: Vec<char> = t.chars().collect();

    sch.sort();
    tch.sort();

    tch == sch
}