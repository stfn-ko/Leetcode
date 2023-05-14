## ✅ Group Anagrams

## Task:

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

> An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#### Example 1:

```
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
```

#### Example 2:

```
Input: strs = [""]
Output: [[""]]
```

#### Example 3:

```
Input: strs = ["a"]
Output: [["a"]]
```

#### Constraints:

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i] consists of lowercase English letters.`

---

## Solution

I am not going to lie, I am completing these tasks during the last week of my uni, and I literally just started writing my dissertation, which is due in 5 days. I barely sleep and couldn't concentrate at all to solve this task, so I simply looked it up. I will try my best to explain it here though.

Since the task is basically to sort strings into groups based on it's content, I am going to use what?

##### THE UNORDERED MAAP.

Yes, what i am going to do is declare a `unordered_map<string, vector<string>>`, where `string` is the identifier of a group and `vector<string>` is the group itself. "But how do we know that the word belongs to the group?", good question. The best way to check it is to sort the input value alphbetically. Here's an example:

Given array of strings: `nat, tan, nta, boo`, we sort them alphabetically and get =>
`ant, ant, ant, boo`, now we know show to sort them.

So, we create a copy of the string, sort it and push 'em og value to the unordered map. E.g.:

```c++
std::unordered_map<std::stirng, std::vector<std::string>> map;
// use const reference to avoid making a copy and avoid unwanted data alteration
for (const auto &str : strs) {
    std::string temp = s; //create a copy of a word
    std::sort(temp.begin(), temp.end());
    map[temp].push_back(str);
}
```

After we have populated the map, all is left to do is push 'em values to the return variable `ans`. We will need to take a couple of precautions though. First of all we should use vector::reserve to improve the performance, as the amount of elements grows, this will allow to
allocate memory for the vector elements beforehand, preventing unnecessary memory reallocation and copying as the vector grows. You sould also consider using std::move() to move the elements from the `map` to the `ans` vector. This avoids copying the elements and is more efficient. E.g.:

```c++
std::vector<std::vector<std::string>> ans;
ans.reserve(map.size());
for (const auto& m : map) {
    ans.push_back(std::move(m.second));
}
```

We then return the ans.

### Additional links

- [CPP: std::move()](https://cplusplus.com/reference/utility/move/)
- [CPP: std::sort()](https://cplusplus.com/reference/algorithm/sort/)
- [CPP: std::string::begin()](https://cplusplus.com/reference/string/string/begin/)
- [CPP: std::string::end()](https://cplusplus.com/reference/string/string/end/)
- [CPP: vector::reserve()](https://cplusplus.com/reference/vector/vector/reserve/)
