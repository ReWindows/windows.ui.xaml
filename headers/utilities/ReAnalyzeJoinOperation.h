#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class ReAnalyzeJoinOperation {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReAnalyzeJoinOperation@InkingExperiences@@UEAA@XZ
    virtual ~ReAnalyzeJoinOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarted@ReAnalyzeJoinOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarted();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FeedInkAnalyzer@ReAnalyzeJoinOperation@InkingExperiences@@AEAAJXZ
    long FeedInkAnalyzer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInkAnalyzer@ReAnalyzeJoinOperation@InkingExperiences@@AEAAJXZ
    long ResetInkAnalyzer();
};
} // namespace InkingExperiences
