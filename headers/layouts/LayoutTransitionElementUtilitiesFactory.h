#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class LayoutTransitionElementUtilitiesFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayoutTransitionElement@LayoutTransitionElementUtilitiesFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAPEAU3456@@Z
    virtual long CreateLayoutTransitionElement(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLayoutTransitionElement@LayoutTransitionElementUtilitiesFactory@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@00@Z
    virtual long DestroyLayoutTransitionElement(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@LayoutTransitionElementUtilitiesFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@LayoutTransitionElementUtilitiesFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@LayoutTransitionElementUtilitiesFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLayoutTransitionElementImpl@LayoutTransitionElementUtilitiesFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0PEAPEAU3456@@Z
    long CreateLayoutTransitionElementImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyLayoutTransitionElementImpl@LayoutTransitionElementUtilitiesFactory@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@00@Z
    long DestroyLayoutTransitionElementImpl(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *);
};
} // namespace DirectUI
