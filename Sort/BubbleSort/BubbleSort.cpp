//
// Created by kelton on 2026/1/4.
//

#include "BubbleSort.h"

std::vector<SortStep> BubbleSort::GenerateSteps(const std::vector<int>& Data)
{
    std::vector<int> arr = Data;
    std::vector<SortStep> steps;

    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            steps.push_back({StepType::Compare, j, j + 1});


            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);
                steps.push_back({StepType::Swap, j, j + 1});
            }
        }
        steps.push_back({StepType::MarkSorted, n - i - 1, -1});
    }

    return steps;
}