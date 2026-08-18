#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
namespace DirectUI {
class PasswordBox {
public:
    class RevealButtonPropertyChangedHandler;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@PasswordBox@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateHandler@PasswordBox@DirectUI@@SAJPEAVCPasswordBox@@@Z
    static long OnApplyTemplateHandler(CPasswordBox *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceivedImpl@PasswordBox@DirectUI@@UEAAJPEAUICharacterReceivedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnCharacterReceivedImpl(::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestedImpl@PasswordBox@DirectUI@@UEAAJPEAUIContextRequestedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnContextRequestedImpl(::Windows::UI::Xaml::Input::IContextRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@PasswordBox@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@PasswordBox@DirectUI@@UEAAJPEAUIDoubleTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnDoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@PasswordBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@PasswordBox@DirectUI@@UEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnHolding(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@PasswordBox@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnInheritedPropertyChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@PasswordBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@PasswordBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@PasswordBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@PasswordBox@DirectUI@@UEAAJPEAUIManipulationCompletedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationCompleted(::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@PasswordBox@DirectUI@@UEAAJPEAUIManipulationStartedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationStarted(::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPasswordChangingHandler@PasswordBox@DirectUI@@SAJQEAVCPasswordBox@@_N@Z
    static long OnPasswordChangingHandler(CPasswordBox * const, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@PasswordBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@PasswordBox@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@PasswordBox@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PasswordBox@DirectUI@@QEAA@XZ
    PasswordBox();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRevealButtonPressed@PasswordBox@DirectUI@@QEAAJ_N@Z
    long SetRevealButtonPressed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPlaceholderTextHandler@PasswordBox@DirectUI@@SAJPEAVCDependencyObject@@I@Z
    static long ShowPlaceholderTextHandler(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InputScopeImpl@PasswordBox@DirectUI@@QEAAJPEAUIInputScope@Input@Xaml@UI@Windows@@@Z
    long put_InputScopeImpl(::Windows::UI::Xaml::Input::IInputScope *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@PasswordBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PasswordBox@DirectUI@@MEAA@XZ
    virtual ~PasswordBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@PasswordBox@DirectUI@@EEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealButtonChecked@PasswordBox@DirectUI@@AEAAJXZ
    long OnRevealButtonChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealButtonSizeChanged@PasswordBox@DirectUI@@AEAAJPEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnRevealButtonSizeChanged(::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealButtonUnchecked@PasswordBox@DirectUI@@AEAAJXZ
    long OnRevealButtonUnchecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTemplateParts@PasswordBox@DirectUI@@AEAAJXZ
    long ReleaseTemplateParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@PasswordBox@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaceholderTextPresenterVisibility@PasswordBox@DirectUI@@AEAAJI@Z
    long UpdatePlaceholderTextPresenterVisibility(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateEvent@PasswordBox@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEA_N@Z
    long ValidateEvent(::Windows::UI::Xaml::IRoutedEventArgs *, bool *);
};
} // namespace DirectUI
