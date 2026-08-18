#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class VisualStateManagerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@VisualStateManagerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateCore@VisualStateManagerGenerated@DirectUI@@UEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@567@PEAUHSTRING__@@PEAUIVisualStateGroup@567@PEAUIVisualState@567@EPEAE@Z
    virtual long GoToStateCore(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IFrameworkElement *, HSTRING__*, ::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToStateCoreProtected@VisualStateManagerGenerated@DirectUI@@QEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFrameworkElement@567@PEAUHSTRING__@@PEAUIVisualStateGroup@567@PEAUIVisualState@567@EPEAE@Z
    long GoToStateCoreProtected(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::IFrameworkElement *, HSTRING__*, ::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, unsigned char, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChanged@VisualStateManagerGenerated@DirectUI@@UEAAJPEAUIVisualStateGroup@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    virtual long RaiseCurrentStateChanged(::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCurrentStateChanging@VisualStateManagerGenerated@DirectUI@@UEAAJPEAUIVisualStateGroup@Xaml@UI@Windows@@PEAUIVisualState@456@1PEAUIControl@Controls@456@@Z
    virtual long RaiseCurrentStateChanging(::Windows::UI::Xaml::IVisualStateGroup *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::IVisualState *, ::Windows::UI::Xaml::Controls::IControl *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@VisualStateManagerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@VisualStateManagerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@VisualStateManagerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualStateManagerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
