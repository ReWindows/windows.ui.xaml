#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class LayoutInformation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableSize@LayoutInformation@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUSize@Foundation@6@@Z
    virtual long GetAvailableSize(::Windows::UI::Xaml::IUIElement *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutExceptionElement@LayoutInformation@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long GetLayoutExceptionElement(IInspectable *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutSlot@LayoutInformation@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@PEAURect@Foundation@6@@Z
    virtual long GetLayoutSlot(::Windows::UI::Xaml::IFrameworkElement *, WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LayoutInformation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LayoutInformation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutInformation@DirectUI@@IEAA@XZ
    LayoutInformation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LayoutInformation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
