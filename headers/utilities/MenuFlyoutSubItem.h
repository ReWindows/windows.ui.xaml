#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
namespace DirectUI {
class MenuFlyoutSubItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSubMenuImpl@MenuFlyoutSubItem@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long OpenSubMenuImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionSubMenuImpl@MenuFlyoutSubItem@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long PositionSubMenuImpl(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAutomationPeerExpandCollapseImpl@MenuFlyoutSubItem@DirectUI@@QEAAJE@Z
    long RaiseAutomationPeerExpandCollapseImpl(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentOwnerImpl@MenuFlyoutSubItem@DirectUI@@QEAAJPEAPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    long get_ParentOwnerImpl(::Windows::UI::Xaml::Controls::ISubMenuOwner * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutSubItem@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutSubItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@MenuFlyoutSubItem@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@MenuFlyoutSubItem@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@MenuFlyoutSubItem@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutSubItem@DirectUI@@IEAA@XZ
    MenuFlyoutSubItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MenuFlyoutSubItem@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MenuFlyoutSubItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@MenuFlyoutSubItem@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@MenuFlyoutSubItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@MenuFlyoutSubItem@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@MenuFlyoutSubItem@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubPresenter@MenuFlyoutSubItem@DirectUI@@AEAAJPEAPEAUIControl@Controls@Xaml@UI@Windows@@@Z
    long CreateSubPresenter(::Windows::UI::Xaml::Controls::IControl * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAttachedToPopupParent@MenuFlyoutSubItem@DirectUI@@AEAAJXZ
    long EnsureAttachedToPopupParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCloseExistingSubItems@MenuFlyoutSubItem@DirectUI@@AEAAJXZ
    long EnsureCloseExistingSubItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePopupAndPresenter@MenuFlyoutSubItem@DirectUI@@AEAAJXZ
    long EnsurePopupAndPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardPresenterProperties@MenuFlyoutSubItem@DirectUI@@AEAAJPEAVMenuFlyout@2@PEAVMenuFlyoutPresenter@2@1@Z
    long ForwardPresenterProperties(::DirectUI::MenuFlyout *, ::DirectUI::MenuFlyoutPresenter *, ::DirectUI::MenuFlyoutPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterSizeChanged@MenuFlyoutSubItem@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnPresenterSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOpen@MenuFlyoutSubItem@DirectUI@@AEAAJE@Z
    long SetIsOpen(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateParentOwner@MenuFlyoutSubItem@DirectUI@@AEAAJPEAVMenuFlyoutPresenter@2@@Z
    long UpdateParentOwner(::DirectUI::MenuFlyoutPresenter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsOpen@MenuFlyoutSubItem@DirectUI@@AEAAJPEAE@Z
    long get_IsOpen(unsigned char *);
};
} // namespace DirectUI
