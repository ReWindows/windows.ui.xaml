#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class VisualStateChangedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Control@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long get_Control(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NewState@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAPEAUIVisualState@Xaml@UI@Windows@@@Z
    virtual long get_NewState(::Windows::UI::Xaml::IVisualState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OldState@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAPEAUIVisualState@Xaml@UI@Windows@@@Z
    virtual long get_OldState(::Windows::UI::Xaml::IVisualState * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Control@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    virtual long put_Control(::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NewState@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAUIVisualState@Xaml@UI@Windows@@@Z
    virtual long put_NewState(::Windows::UI::Xaml::IVisualState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OldState@VisualStateChangedEventArgs@DirectUI@@UEAAJPEAUIVisualState@Xaml@UI@Windows@@@Z
    virtual long put_OldState(::Windows::UI::Xaml::IVisualState *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualStateChangedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCorePeer@VisualStateChangedEventArgs@DirectUI@@MEAAPEAVCEventArgs@@XZ
    virtual CEventArgs * CreateCorePeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualStateChangedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VisualStateChangedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualStateChangedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
