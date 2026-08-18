#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 35 member(s).
namespace DirectUI {
class MenuFlyoutPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelCloseMenuFlyoutSubItem@MenuFlyoutPresenter@DirectUI@@QEAAJXZ
    long CancelCloseMenuFlyoutSubItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenuImpl@MenuFlyoutPresenter@DirectUI@@QEAAJXZ
    long CloseSubMenuImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayCloseMenuFlyoutSubItem@MenuFlyoutPresenter@DirectUI@@QEAAJXZ
    long DelayCloseMenuFlyoutSubItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusImpl@MenuFlyoutPresenter@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long FocusImpl(int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerName@MenuFlyoutPresenter@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetOwnerName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentMenuFlyoutSubItem@MenuFlyoutPresenter@DirectUI@@SAJPEAVCDependencyObject@@PEAPEAV3@@Z
    static long GetParentMenuFlyoutSubItem(CDependencyObject *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetHelper@MenuFlyoutPresenter@DirectUI@@SAJAEBV?$ComPtr@UIMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@ctl@@PEAH@Z
    static long GetPositionInSetHelper(WindissectOpaque const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetHelper@MenuFlyoutPresenter@DirectUI@@SAJAEBV?$ComPtr@UIMenuFlyoutItemBase@Controls@Xaml@UI@Windows@@@ctl@@PEAH@Z
    static long GetSizeOfSetHelper(WindissectOpaque const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@MenuFlyoutPresenter@DirectUI@@QEAAJXZ
    long UpdateTemplateSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OwnerImpl@MenuFlyoutPresenter@DirectUI@@QEAAJPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@@Z
    long put_OwnerImpl(::Windows::UI::Xaml::Controls::ISubMenuOwner *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutPresenter@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutPresenter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@MenuFlyoutPresenter@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContainerForItemOverride@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long ClearContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@MenuFlyoutPresenter@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutPresenter@DirectUI@@IEAA@XZ
    MenuFlyoutPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MenuFlyoutPresenter@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MenuFlyoutPresenter@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIInspectable@@@Z
    virtual long OnItemsSourceChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@MenuFlyoutPresenter@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@MenuFlyoutPresenter@DirectUI@@MEAAJXZ
    virtual long PrepareState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEntranceAnimationCompleted@MenuFlyoutPresenter@DirectUI@@AEAAJPEBGIPEAPEAUITimeline@Animation@Media@Xaml@UI@Windows@@PEAV?$EventPtr@V?$event_handler@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@UIInspectable@@U4@UTimelineCompletedTraits@DirectUI@@@ctl@@@ctl@@@Z
    long AttachEntranceAnimationCompleted(unsigned short const *, unsigned int, ::Windows::UI::Xaml::Media::Animation::ITimeline * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleFocus@MenuFlyoutPresenter@DirectUI@@AEAAJEW4FocusState@Xaml@UI@Windows@@@Z
    long CycleFocus(unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEntranceAnimationCompletedHandlers@MenuFlyoutPresenter@DirectUI@@AEAAJXZ
    long DetachEntranceAnimationCompletedHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInitialFocusIndex@MenuFlyoutPresenter@DirectUI@@AEAAJXZ
    long EnsureInitialFocusIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentMenuFlyout@MenuFlyoutPresenter@DirectUI@@AEAAJPEAPEAVMenuFlyout@2@@Z
    long GetParentMenuFlyout(::DirectUI::MenuFlyout * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubPresenterBounds@MenuFlyoutPresenter@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUXRECTF_RB@@@Z
    long GetSubPresenterBounds(::Windows::UI::Xaml::IUIElement *, XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEntranceAnimationCompleted@MenuFlyoutPresenter@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnEntranceAnimationCompleted(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@MenuFlyoutPresenter@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialFocus@MenuFlyoutPresenter@DirectUI@@AEAAJXZ
    long SetInitialFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterTransformOrigin@MenuFlyoutPresenter@DirectUI@@AEAAJXZ
    long SetOuterTransformOrigin();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentMenuFlyout@MenuFlyoutPresenter@DirectUI@@AEAAJPEAVMenuFlyout@2@@Z
    long SetParentMenuFlyout(::DirectUI::MenuFlyout *);
};
} // namespace DirectUI
