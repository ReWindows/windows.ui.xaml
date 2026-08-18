#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class GradientStop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@GradientStop@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@GradientStop@DirectUI@@UEAAJPEAUColor@UI@Windows@@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@GradientStop@DirectUI@@UEAAJPEAN@Z
    virtual long get_Offset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@GradientStop@DirectUI@@UEAAJUColor@UI@Windows@@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@GradientStop@DirectUI@@UEAAJN@Z
    virtual long put_Offset(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@GradientStop@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@GradientStop@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@GradientStop@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@GradientStop@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
