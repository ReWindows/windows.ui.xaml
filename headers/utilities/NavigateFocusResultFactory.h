#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class NavigateFocusResultFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@NavigateFocusResultFactory@DirectUI@@UEAAJEPEAPEAUIXamlSourceFocusNavigationResult@Hosting@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(unsigned char, ::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@NavigateFocusResultFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@NavigateFocusResultFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
};
} // namespace DirectUI
