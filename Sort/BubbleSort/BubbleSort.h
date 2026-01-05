//
// Created by kelton on 2026/1/4.
//

#ifndef ALGORITHMDEMO_BUBBLESORT_H
#define ALGORITHMDEMO_BUBBLESORT_H

#include "../SortBase.h"

class BubbleSort : public SortBase
{
public:
    std::vector<SortStep> GenerateSteps(const std::vector<int>& Data) override;
};

#endif //ALGORITHMDEMO_BUBBLESORT_H