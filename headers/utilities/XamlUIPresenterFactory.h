#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class XamlUIPresenterFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutPlacement@XamlUIPresenterFactory@DirectUI@@UEAAJURect@Foundation@Windows@@USize@45@10W4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@5@EPEAW4789Xaml@UI@5@PEAU345@@Z
    virtual long GetFlyoutPlacement(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, unsigned char, int *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutPlacementTargetInfo@XamlUIPresenterFactory@DirectUI@@UEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@W4FlyoutPlacementMode@Primitives@Controls@456@PEAW4789456@PEAEPEAURect@Foundation@6@@Z
    virtual long GetFlyoutPlacementTargetInfo(::Windows::UI::Xaml::IFrameworkElement *, int, int *, unsigned char *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowSizeChanged@XamlUIPresenterFactory@DirectUI@@UEAAJXZ
    virtual long NotifyWindowSizeChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHost@XamlUIPresenterFactory@DirectUI@@UEAAJPEAUIXamlUIPresenterHost@Hosting@Xaml@UI@Windows@@@Z
    virtual long SetHost(::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompleteTimelinesAutomatically@XamlUIPresenterFactory@DirectUI@@UEAAJPEAE@Z
    virtual long get_CompleteTimelinesAutomatically(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CompleteTimelinesAutomatically@XamlUIPresenterFactory@DirectUI@@UEAAJE@Z
    virtual long put_CompleteTimelinesAutomatically(unsigned char);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlUIPresenterFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlUIPresenterFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlUIPresenterFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutPlacementImpl@XamlUIPresenterFactory@DirectUI@@AEAAJURect@Foundation@Windows@@USize@45@10W4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@5@EPEAW4789Xaml@UI@5@PEAU345@@Z
    long GetFlyoutPlacementImpl(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque, int, unsigned char, int *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlyoutPlacementTargetInfoImpl@XamlUIPresenterFactory@DirectUI@@AEAAJPEAUIFrameworkElement@Xaml@UI@Windows@@W4FlyoutPlacementMode@Primitives@Controls@456@PEAW4789456@PEAEPEAURect@Foundation@6@@Z
    long GetFlyoutPlacementTargetInfoImpl(::Windows::UI::Xaml::IFrameworkElement *, int, int *, unsigned char *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostImpl@XamlUIPresenterFactory@DirectUI@@AEAAJPEAUIXamlUIPresenterHost@Hosting@Xaml@UI@Windows@@@Z
    long SetHostImpl(::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost *);
};
} // namespace DirectUI
