#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class MarkupExtension {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@MarkupExtension@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideValue@MarkupExtension@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ProvideValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideValueProtected@MarkupExtension@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long ProvideValueProtected(IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@MarkupExtension@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@MarkupExtension@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@MarkupExtension@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@MarkupExtension@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
