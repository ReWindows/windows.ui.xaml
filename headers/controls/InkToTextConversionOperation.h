#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace InkingExperiences {
class InkToTextConversionOperation {
public:
    class AnalyzeOperation;
    class Context;
    class DecidePendingAndCommittedUpdates;
    class Operation;
    class ProcessAnnotationNodesOperation_WordMode;
    class ProcessLineNodesOperation;
    class ProcessWordNodesOperation;
    class RetrieveLayoutViewOperation;
    class RetrieveLineNodesLayoutViewOperation;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@InkToTextConversionOperation@InkingExperiences@@UEBA?AW4InkToTextEngineOperationType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InkToTextConversionOperation@InkingExperiences@@UEAA@XZ
    virtual ~InkToTextConversionOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@InkToTextConversionOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarting();
};
} // namespace InkingExperiences
