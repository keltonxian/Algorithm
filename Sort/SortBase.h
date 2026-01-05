//
// Created by kelton on 2026/1/4.
//

#ifndef ALGORITHMDEMO_SORTBASE_H
#define ALGORITHMDEMO_SORTBASE_H

#include <vector>
#include "SortDefine.h"

class SortBase
{
public:
    virtual ~SortBase() = default;

    virtual std::vector<SortStep> GenerateSteps(const std::vector<int>& Data) = 0;
};

#endif //ALGORITHMDEMO_SORTBASE_H