#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 34 member(s).
namespace DirectUI {
class MenuFlyoutItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProofingItemHandlerStatic@MenuFlyoutItem@DirectUI@@SAJPEAVCDependencyObject@@P6AJ0PEAVCEventArgs@@@Z@Z
    static long AddProofingItemHandlerStatic(CDependencyObject *, long ( *)(CDependencyObject *, CEventArgs *));
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardAcceleratorTextDesiredSize@MenuFlyoutItem@DirectUI@@QEAAJPEAUSize@Foundation@Windows@@@Z
    long GetKeyboardAcceleratorTextDesiredSize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@MenuFlyoutItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasToggle@MenuFlyoutItem@DirectUI@@UEBA_NXZ
    virtual bool HasToggle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@MenuFlyoutItem@DirectUI@@UEAAJXZ
    virtual long Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@MenuFlyoutItem@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@MenuFlyoutItem@DirectUI@@QEAAJN@Z
    long UpdateTemplateSettings(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_KeyboardAcceleratorTextOverrideImpl@MenuFlyoutItem@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long put_KeyboardAcceleratorTextOverrideImpl(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuFlyoutItem@DirectUI@@UEAA@XZ
    virtual ~MenuFlyoutItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@MenuFlyoutItem@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@MenuFlyoutItem@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MenuFlyoutItem@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@MenuFlyoutItem@DirectUI@@MEAAJIIII@Z
    virtual long LeaveImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuFlyoutItem@DirectUI@@IEAA@XZ
    MenuFlyoutItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@MenuFlyoutItem@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MenuFlyoutItem@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@MenuFlyoutItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@MenuFlyoutItem@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@MenuFlyoutItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@MenuFlyoutItem@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@MenuFlyoutItem@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@MenuFlyoutItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@MenuFlyoutItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@MenuFlyoutItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@MenuFlyoutItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@MenuFlyoutItem@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@MenuFlyoutItem@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@MenuFlyoutItem@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStateFlags@MenuFlyoutItem@DirectUI@@AEAAJXZ
    long ClearStateFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCommand@MenuFlyoutItem@DirectUI@@AEAAJXZ
    long ExecuteCommand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeKeyboardAcceleratorText@MenuFlyoutItem@DirectUI@@AEAAJXZ
    long InitializeKeyboardAcceleratorText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@MenuFlyoutItem@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnCommandChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@MenuFlyoutItem@DirectUI@@AEAAJXZ
    long PerformPointerUpAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCanExecute@MenuFlyoutItem@DirectUI@@AEAAJXZ
    long UpdateCanExecute();
};
} // namespace DirectUI
