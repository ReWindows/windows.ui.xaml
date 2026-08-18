#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class DependencyObjectCollectionFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DependencyObjectCollectionFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAU?$IObservableVector@PEAVDependencyObject@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, WindissectOpaque * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DependencyObjectCollectionFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DependencyObjectCollectionFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@DependencyObjectCollectionFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DependencyObjectCollectionFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
