#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class PopupOpeningEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PopupParent@PopupOpeningEventArgs@DirectUI@@UEAAJPEAPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    virtual long get_PopupParent(::Windows::UI::Xaml::Controls::IPanel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PopupParent@PopupOpeningEventArgs@DirectUI@@UEAAJPEAUIPanel@Controls@Xaml@UI@Windows@@@Z
    virtual long put_PopupParent(::Windows::UI::Xaml::Controls::IPanel *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@PopupOpeningEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@PopupOpeningEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@PopupOpeningEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@PopupOpeningEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PopupOpeningEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
