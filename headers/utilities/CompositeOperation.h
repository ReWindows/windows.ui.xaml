#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 24 member(s).
namespace InkingExperiences {
class CompositeOperation {
public:
    class SerialItemsHandler;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CompositeOperation@InkingExperiences@@UEAAJXZ
    virtual long Cancel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositeOperation@InkingExperiences@@QEAA@XZ
    CompositeOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CompositeOperation@InkingExperiences@@UEAAJXZ
    virtual long Start();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositeOperation@InkingExperiences@@UEAA@XZ
    virtual ~CompositeOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CompositeOperation@InkingExperiences@@IEAAJJ_N@Z
    long Complete(long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancelRequested@CompositeOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCancelRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompleting@CompositeOperation@InkingExperiences@@MEAAJXZ
    virtual long OnCompleting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemCanceling@CompositeOperation@InkingExperiences@@MEAAJPEAVIOperation@2@@Z
    virtual long OnItemCanceling(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemCompleted@CompositeOperation@InkingExperiences@@MEAAJPEAVIOperation@2@@Z
    virtual long OnItemCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemStarting@CompositeOperation@InkingExperiences@@MEAAJPEAVIOperation@2@@Z
    virtual long OnItemStarting(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarting@CompositeOperation@InkingExperiences@@MEAAJXZ
    virtual long OnStarting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAllParallelItems@CompositeOperation@InkingExperiences@@AEAAJXZ
    long CancelAllParallelItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCurrentSerialItemIfAny@CompositeOperation@InkingExperiences@@AEAAJXZ
    long CancelCurrentSerialItemIfAny();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelItem@CompositeOperation@InkingExperiences@@AEAAJPEAVIOperation@2@@Z
    long CancelItem(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteIfNecessary@CompositeOperation@InkingExperiences@@AEAAJXZ
    long CompleteIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSerialItemsHandler@CompositeOperation@InkingExperiences@@AEAAJXZ
    long EnsureSerialItemsHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSerialItemCompleted@CompositeOperation@InkingExperiences@@AEAAJPEAVIOperation@2@@Z
    long OnSerialItemCompleted(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTransitionToCanceled@CompositeOperation@InkingExperiences@@AEBA_NXZ
    bool ShouldTransitionToCanceled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTransitionToCompleted@CompositeOperation@InkingExperiences@@AEBA_NXZ
    bool ShouldTransitionToCompleted() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAllParallelItems@CompositeOperation@InkingExperiences@@AEAAJXZ
    long StartAllParallelItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCurrentSerialItemIfAny@CompositeOperation@InkingExperiences@@AEAAJXZ
    long StartCurrentSerialItemIfAny();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartItem@CompositeOperation@InkingExperiences@@AEAAJPEAVIOperation@2@@Z
    long StartItem(WindissectOpaque *);
};
} // namespace InkingExperiences
