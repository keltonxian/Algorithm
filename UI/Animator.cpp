//
// Created by kelton on 2026/1/4.
//

#include "Animator.h"

Animator::Animator(BarArray& InBars, const std::vector<SortStep>& InSteps)
    : Bars(InBars), Steps(InSteps)
{}

void Animator::Update(float DeltaSeconds)
{
    if (CurrentStep >= Steps.size()) return;

    Timer += DeltaSeconds;
    if (Timer < StepInterval) return;

    Timer = 0.f;
    const auto& step = Steps[CurrentStep++];

    switch (step.Type)
    {
        case StepType::Compare:
            Bars.Highlight(step.IndexA, step.IndexB);
            break;
        case StepType::Swap:
            Bars.Swap(step.IndexA, step.IndexB);
            break;
        case StepType::MarkSorted:
            Bars.MarkSorted(step.IndexA);
            break;
    }
}