#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace InkingExperiences {
class ProcessAnnotationNodeOperationBase {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessAnnotationNodeOperationBase@InkingExperiences@@UEAA@XZ
    virtual ~ProcessAnnotationNodeOperationBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropAnnotationAndStrokes@ProcessAnnotationNodeOperationBase@InkingExperiences@@IEAAXW4GestureType@UpdateObject@InkToTextEngine@2@@Z
    void DropAnnotationAndStrokes(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@ProcessAnnotationNodeOperationBase@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
};
} // namespace InkingExperiences
