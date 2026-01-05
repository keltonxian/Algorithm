//
// Created by kelton on 2026/1/4.
//

#ifndef ALGORITHMDEMO_SORTDEFINE_H
#define ALGORITHMDEMO_SORTDEFINE_H

enum class StepType
{
    Compare,
    Swap,
    MarkSorted
};

struct SortStep
{
    StepType Type;
    int IndexA;
    int IndexB;
};

#endif //ALGORITHMDEMO_SORTDEFINE_H