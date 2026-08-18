#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class SolidColorBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SolidColorBrush@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@SolidColorBrush@DirectUI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@SolidColorBrush@DirectUI@@UEAAJUColor@UI@Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SolidColorBrush@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SolidColorBrush@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@SolidColorBrush@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SolidColorBrush@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
