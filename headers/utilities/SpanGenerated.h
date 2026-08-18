#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SpanGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SpanGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Inlines@SpanGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Inlines(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Inlines@SpanGenerated@DirectUI@@UEAAJPEAU?$IVector@PEAVInline@Documents@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long put_Inlines(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SpanGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SpanGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SpanGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SpanGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
