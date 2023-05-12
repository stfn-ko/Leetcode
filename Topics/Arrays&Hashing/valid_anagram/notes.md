## :check_mark_button: Valid Anagram

### Task:

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

> An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#### Example 1:

```
Input: s = "anagram", t = "nagaram"
Output: true
```

#### Example 2:

```
Input: s = "rat", t = "car"
Output: false
```

#### Constraints:

`* 1 <= s.length, t.length <= 5 * 104`

`* s and t consist of lowercase English letters.`

---

### Solution

In my [first implementation](Topics/Arrays&Hashing/valid_anagram/unordered_map_v1.cpp) i first compared the sizes of
both strings. In case they are different sizes, I would return `false`, because in that case strings can't be anogramic (is this a real word?). Then I iterated through both strings pushing each `char` to `unordered_map`. Such solution proved to be slow.

In my [second implementation](Topics/Arrays&Hashing/valid_anagram/unordered_map_v2.cpp) I changed the way I was handling strings. I read that `operator[]` of `string` returns a `const char&`. Initialy I tried to iterate through the string using:

```c++
std::unordered_map<const char&, int> some_map;
for (const auto _ : some_string) {
    ++some_map[_];
}
```

Such code caused a `compile error`, this is because reference types are not hashable. Eventually I change my code to something like this:

```c++
std::unordered_map<char, int> some_map;
for (const auto &_ : some_string) {
    ++some_map[_];
}
```

#### Additional links

[String operator[]](https://cplusplus.com/reference/string/string/operator[]/)
[String size()](https://cplusplus.com/reference/string/string/size/)
