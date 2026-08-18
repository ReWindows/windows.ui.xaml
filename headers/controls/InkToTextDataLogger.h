#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace InkingExperiences {
class InkToTextDataLogger {
public:
    class GestureArgs;
    class InkOnTextInvokeActivity;
    class SessionConfig;
    class UnexpectedValueArgs;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLanguageClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void AddLanguageClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CandidateSelected_@InkToTextDataLogger@InkingExperiences@@QEAAXAEBUCandidateArgs@12@AEBUSessionConfig@12@@Z
    void CandidateSelected_(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseButtonClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void CollapseButtonClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandDownButtonClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void ExpandDownButtonClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GesturePerformed_@InkToTextDataLogger@InkingExperiences@@QEAAXAEBUGestureArgs@12@AEBUSessionConfig@12@@Z
    void GesturePerformed_(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandwritingTipsClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void HandwritingTipsClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandwritingTipsUriClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void HandwritingTipsUriClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandwritingViewDisabled_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void HandwritingViewDisabled_();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@InkToTextDataLogger@InkingExperiences@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogUnexpectedValues_@InkToTextDataLogger@InkingExperiences@@QEAAXAEBUUnexpectedValueArgs@12@@Z
    void LogUnexpectedValues_(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnButtonClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void ReturnButtonClicked_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpaceButtonClicked_@InkToTextDataLogger@InkingExperiences@@QEAAXXZ
    void SpaceButtonClicked_();
};
} // namespace InkingExperiences
