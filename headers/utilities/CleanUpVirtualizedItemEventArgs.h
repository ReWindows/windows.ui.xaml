#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class CleanUpVirtualizedItemEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Cancel@CleanUpVirtualizedItemEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Cancel(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIElement@CleanUpVirtualizedItemEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_UIElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@CleanUpVirtualizedItemEventArgs@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Value(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Cancel@CleanUpVirtualizedItemEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Cancel(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_UIElement@CleanUpVirtualizedItemEventArgs@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long put_UIElement(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@CleanUpVirtualizedItemEventArgs@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_Value(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CleanUpVirtualizedItemEventArgs@DirectUI@@UEAA@XZ
    virtual ~CleanUpVirtualizedItemEventArgs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@CleanUpVirtualizedItemEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@CleanUpVirtualizedItemEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@CleanUpVirtualizedItemEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@CleanUpVirtualizedItemEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
