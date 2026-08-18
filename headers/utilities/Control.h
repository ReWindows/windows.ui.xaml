#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 71 member(s).
namespace DirectUI {
class Control {
public:
    class StateChangeSuspender;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplateImpl@Control@DirectUI@@QEAAJPEAE@Z
    long ApplyTemplateImpl(unsigned char *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Control@DirectUI@@QEAA@XZ
    Control();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesElementOverlapViewport@Control@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@AEA_N@Z
    long DoesElementOverlapViewport(::Windows::UI::Xaml::IUIElement *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEvent@Control@DirectUI@@SAJW4KnownEventIndex@@PEAVDependencyObject@2@PEAUIInspectable@@@Z
    static long FireEvent(int, ::DirectUI::DependencyObject *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusImpl@Control@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@PEAE@Z
    virtual long FocusImpl(int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusWithDirection@Control@DirectUI@@QEAAJW4FocusState@Xaml@UI@Windows@@W4FocusNavigationDirection@2@PEAE@Z
    long FocusWithDirection(int, int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalculatedDefaultStyleKey@Control@DirectUI@@UEAAJPEAPEBVCClassInfo@@PEAPEAUIInspectable@@@Z
    virtual long GetCalculatedDefaultStyleKey(CClassInfo const * *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardModifiers@Control@DirectUI@@SAJPEAW4VirtualKeyModifiers@System@Windows@@@Z
    static long GetKeyboardModifiers(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@Control@DirectUI@@UEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromBuiltInStyle@Control@DirectUI@@QEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@PEAI@Z
    long GetValueFromBuiltInStyle(CDependencyProperty const *, IInspectable * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Control@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceivedImpl@Control@DirectUI@@UEAAJPEAUICharacterReceivedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnCharacterReceivedImpl(::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestedImpl@Control@DirectUI@@UEAAJPEAUIContextRequestedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnContextRequestedImpl(::Windows::UI::Xaml::Input::IContextRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusEngaged@Control@DirectUI@@QEAAJPEAVFocusEngagedEventArgs@2@@Z
    long OnFocusEngaged(::DirectUI::FocusEngagedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@Control@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnInheritedPropertyChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLostImpl@Control@DirectUI@@QEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerCaptureLostImpl(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDownImpl@Control@DirectUI@@QEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPreviewKeyDownImpl(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyUpImpl@Control@DirectUI@@QEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPreviewKeyUpImpl(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@Control@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFocusEngagementImpl@Control@DirectUI@@QEAAJXZ
    long RemoveFocusEngagementImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextFlyout@Control@DirectUI@@QEAAJPEAUIContextRequestedEventArgs@Input@Xaml@UI@Windows@@PEAV12@@Z
    long ShowContextFlyout(::Windows::UI::Xaml::Input::IContextRequestedEventArgs *, Control *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementState@Control@DirectUI@@SAJPEAVCControl@@_N@Z
    static long UpdateEngagementState(CControl *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@Control@DirectUI@@SAJPEAVCDependencyObject@@_N@Z
    static long UpdateVisualState(CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@Control@DirectUI@@SAJPEAV12@_N@Z
    static long UpdateVisualState(Control *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_IsEnabledChanged@Control@DirectUI@@UEAAJPEAUIDependencyPropertyChangedEventHandler@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_IsEnabledChanged(::Windows::UI::Xaml::IDependencyPropertyChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DefaultStyleKey@Control@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_DefaultStyleKey(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImplementationRoot@Control@DirectUI@@QEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long get_ImplementationRoot(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DefaultStyleKey@Control@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_DefaultStyleKey(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_IsEnabledChanged@Control@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_IsEnabledChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Control@DirectUI@@UEAA@XZ
    virtual ~Control();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@Control@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToState@Control@DirectUI@@IEAAJ_NPEBGPEAE@Z
    long GoToState(bool, unsigned short const *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundRectangleStrokeThickness@Control@DirectUI@@IEAAJPEAVRectangle@2@@Z
    long LayoutRoundRectangleStrokeThickness(::DirectUI::Rectangle *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@Control@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptured@Control@DirectUI@@MEAAJXZ
    virtual long OnPointerCaptured();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Control@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@Control@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAcceleratorsIfApplicable@Control@DirectUI@@KAJAEAV?$ComPtr@UIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@ctl@@QEAV12@@Z
    static long ProcessAcceleratorsIfApplicable(WindissectOpaque &, Control * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEngagementState@Control@DirectUI@@IEAAJ_N@Z
    long UpdateEngagementState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@Control@DirectUI@@IEAAJ_N@Z
    long UpdateVisualState(bool);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsEnabledChangedEventSourceNoRef@Control@DirectUI@@AEAAJPEAPEAVCIsEnabledChangedEventSource@2@@Z
    long GetIsEnabledChangedEventSourceNoRef(::DirectUI::CIsEnabledChangedEventSource * *);
};
} // namespace DirectUI
