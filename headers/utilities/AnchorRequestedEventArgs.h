#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class AnchorRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Anchor@AnchorRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_Anchor(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnchorCandidates@AnchorRequestedEventArgs@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_AnchorCandidates(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Anchor@AnchorRequestedEventArgs@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_Anchor(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnchorCandidates@AnchorRequestedEventArgs@DirectUI@@QEAAJPEAU?$IVector@PEAVUIElement@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long put_AnchorCandidates(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnchorRequestedEventArgs@DirectUI@@UEAA@XZ
    virtual ~AnchorRequestedEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AnchorRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AnchorRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AnchorRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AnchorRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
