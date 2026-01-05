//
// Created by kelton on 2026/1/4.
//

#ifndef ALGORITHMDEMO_ANIMATOR_H
#define ALGORITHMDEMO_ANIMATOR_H

#include "../Sort/SortDefine.h"
#include "Shape/BarArray.h"

class Animator
{
public:
    Animator(BarArray& InBars, const std::vector<SortStep>& InSteps);

    void Update(float DeltaSeconds);

private:
    BarArray& Bars;
    std::vector<SortStep> Steps;
    size_t CurrentStep = 0;
    float Timer = 0.f;
    float StepInterval = 0.3f;
};


#endif //ALGORITHMDEMO_ANIMATOR_H