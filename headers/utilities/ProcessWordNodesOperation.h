#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace InkingExperiences::InkToTextConversionOperation {
class ProcessWordNodesOperation {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardNonWordNodes@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@AEAAXXZ
    void DiscardNonWordNodes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousWordBoundingRect@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@AEBA?AURect@Foundation@Windows@@AEBU456@@Z
    WindissectOpaque GetPreviousWordBoundingRect(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedAnnotationNode@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@AEBA_NV?$ComPtr@UIInkAnalysisNode@Analysis@Inking@Input@UI@Windows@@@WRL@Microsoft@@@Z
    bool IsSupportedAnnotationNode(WindissectOpaque) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAppend@ProcessWordNodesOperation@InkToTextConversionOperation@InkingExperiences@@AEBA_NAEBURect@Foundation@Windows@@0@Z
    bool ShouldAppend(WindissectOpaque const &, WindissectOpaque const &) const;
};
} // namespace InkingExperiences::InkToTextConversionOperation
