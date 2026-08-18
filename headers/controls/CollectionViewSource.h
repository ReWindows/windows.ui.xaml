#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class CollectionViewSource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVSViewChangedSource@CollectionViewSource@DirectUI@@QEAAJPEAPEAUICVSViewChangedEventSource@2@@Z
    long GetCVSViewChangedSource(::DirectUI::ICVSViewChangedEventSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CollectionViewSource@DirectUI@@UEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(CDependencyProperty const *, IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CollectionViewSource@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@CollectionViewSource@DirectUI@@MEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CollectionViewSource@DirectUI@@MEAA@XZ
    virtual ~CollectionViewSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureView@CollectionViewSource@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long EnsureView(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSourceValid@CollectionViewSource@DirectUI@@CAIPEAUIInspectable@@@Z
    static unsigned int IsSourceValid(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSourceGroupedChanged@CollectionViewSource@DirectUI@@AEAAJXZ
    long OnIsSourceGroupedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsPathChanged@CollectionViewSource@DirectUI@@AEAAJXZ
    long OnItemsPathChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceChanged@CollectionViewSource@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSourceChanged(IInspectable *, IInspectable *);
};
} // namespace DirectUI
