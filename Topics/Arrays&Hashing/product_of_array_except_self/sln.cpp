// @Runtime: 15 ms (98.91%)
// @Memory: 23.9 MB (86.61%)

std::vector<int> productExceptSelf(std::vector<int> &input)
{
    std::vector<int> answer(input.size(), 1);

    for (int i = 0; i < input.size() - 1; ++i)
        answer[i + 1] = input[i] * answer[i];

    for (int i = input.size() - 1, product = input[i]; i > 0; --i, product *= input[i])
        answer[i - 1] *= product;

    return answer;
}
