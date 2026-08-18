#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
namespace DirectUI {
class ToggleSwitch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ToggleSwitch@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnToggledImpl@ToggleSwitch@DirectUI@@QEAAJXZ
    long OnToggledImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ToggleSwitch@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@ToggleSwitch@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ToggleSwitch@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ToggleSwitch@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@ToggleSwitch@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ToggleSwitch@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@ToggleSwitch@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@ToggleSwitch@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@ToggleSwitch@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@ToggleSwitch@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@ToggleSwitch@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ToggleSwitch@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@ToggleSwitch@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@ToggleSwitch@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToggleSwitch@DirectUI@@IEAA@XZ
    ToggleSwitch();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToggleSwitch@DirectUI@@MEAA@XZ
    virtual ~ToggleSwitch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTranslations@ToggleSwitch@DirectUI@@AEAAJXZ
    long ClearTranslations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragCompletedHandler@ToggleSwitch@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long DragCompletedHandler(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragDeltaHandler@ToggleSwitch@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragDeltaEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long DragDeltaHandler(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragStartedHandler@ToggleSwitch@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long DragStartedHandler(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusChanged@ToggleSwitch@DirectUI@@AEAAJXZ
    long FocusChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlesKey@ToggleSwitch@DirectUI@@AEAAEW4VirtualKey@System@Windows@@@Z
    unsigned char HandlesKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCompleted@ToggleSwitch@DirectUI@@AEAAJE@Z
    long MoveCompleted(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveDelta@ToggleSwitch@DirectUI@@AEAAJN@Z
    long MoveDelta(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslations@ToggleSwitch@DirectUI@@AEAAJXZ
    long SetTranslations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeChangedHandler@ToggleSwitch@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long SizeChangedHandler(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TapHandler@ToggleSwitch@DirectUI@@AEAAJPEAUIInspectable@@PEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long TapHandler(IInspectable *, ::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@ToggleSwitch@DirectUI@@AEAAJXZ
    long Toggle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@ToggleSwitch@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
};
} // namespace DirectUI
