#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
namespace DirectUI {
class AppBarButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePeerSubMenusImpl@AppBarButton@DirectUI@@QEAAJXZ
    long ClosePeerSubMenusImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenuImpl@AppBarButton@DirectUI@@QEAAJXZ
    long CloseSubMenuImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubMenuImpl@AppBarButton@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long OpenSubMenuImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSubMenuImpl@AppBarButton@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long PositionSubMenuImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSubMenuImpl@AppBarButton@DirectUI@@QEAAJXZ
    long PrepareSubMenuImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationPeerExpandCollapseImpl@AppBarButton@DirectUI@@QEAAJE@Z
    long RaiseAutomationPeerExpandCollapseImpl(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultLabelPositionImpl@AppBarButton@DirectUI@@QEAAJW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    long SetDefaultLabelPositionImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowStyleParams@AppBarButton@DirectUI@@QEAAJ_N00@Z
    long SetOverflowStyleParams(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSubMenuOpenImpl@AppBarButton@DirectUI@@QEAAJPEAE@Z
    long get_IsSubMenuOpenImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyboardAcceleratorTextOverrideImpl@AppBarButton@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_KeyboardAcceleratorTextOverrideImpl(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppBarButton@DirectUI@@UEAA@XZ
    virtual ~AppBarButton();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppBarButton@DirectUI@@IEAA@XZ
    AppBarButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@AppBarButton@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AppBarButton@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClick@AppBarButton@DirectUI@@MEAAJXZ
    virtual long OnClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@AppBarButton@DirectUI@@MEAAJPEAUIInspectable@@0@Z
    virtual long OnCommandChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@AppBarButton@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@AppBarButton@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@AppBarButton@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@AppBarButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@AppBarButton@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@AppBarButton@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@AppBarButton@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenAssociatedFlyout@AppBarButton@DirectUI@@MEAAJXZ
    virtual long OpenAssociatedFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardForWidthAdjustmentsForLabelOnRightStyle@AppBarButton@DirectUI@@AEAAJPEAPEAUIStoryboard@Animation@Media@Xaml@UI@Windows@@@Z
    long CreateStoryboardForWidthAdjustmentsForLabelOnRightStyle(::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveLabelPosition@AppBarButton@DirectUI@@AEAAJPEAW4CommandBarDefaultLabelPosition@Controls@Xaml@UI@Windows@@@Z
    long GetEffectiveLabelPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationForWidthAdjustments@AppBarButton@DirectUI@@AEAAJXZ
    long StartAnimationForWidthAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationForWidthAdjustments@AppBarButton@DirectUI@@AEAAJXZ
    long StopAnimationForWidthAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternalStyles@AppBarButton@DirectUI@@AEAAJXZ
    long UpdateInternalStyles();
};
} // namespace DirectUI
