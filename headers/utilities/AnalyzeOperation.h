#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace InkingExperiences::InkToTextConversionOperation {
class AnalyzeOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@UEAAJXZ
    virtual long Start();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectSelectionGestures@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@AEBA_NAEA_N0AEAURect@Foundation@Windows@@@Z
    bool DetectSelectionGestures(bool &, bool &, WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeedInkAnalyzer@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@AEAAJXZ
    long FeedInkAnalyzer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTapGesture@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@AEBA_NAEAUPoint@Foundation@Windows@@@Z
    bool IsTapGesture(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInkAnalyzer@AnalyzeOperation@InkToTextConversionOperation@InkingExperiences@@AEAAJXZ
    long ResetInkAnalyzer();
};
} // namespace InkingExperiences::InkToTextConversionOperation
