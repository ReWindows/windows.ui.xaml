#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 47 member(s).
namespace DirectUI {
class TextBox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBringIntoViewOnFocusChange@TextBox@DirectUI@@SAJPEAVCDependencyObject@@PEAI@Z
    static long GetBringIntoViewOnFocusChange(CDependencyObject *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinguisticAlternativesAsyncImpl@TextBox@DirectUI@@QEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    long GetLinguisticAlternativesAsyncImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@TextBox@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateHandler@TextBox@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnApplyTemplateHandler(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeforeTextChangingHandler@TextBox@DirectUI@@SAJQEAVCTextBox@@PEAVxstring_ptr@@PEAE@Z
    static long OnBeforeTextChangingHandler(CTextBox * const, xstring_ptr *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceivedImpl@TextBox@DirectUI@@UEAAJPEAUICharacterReceivedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnCharacterReceivedImpl(::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextRequestedImpl@TextBox@DirectUI@@UEAAJPEAUIContextRequestedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnContextRequestedImpl(::Windows::UI::Xaml::Input::IContextRequestedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TextBox@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@TextBox@DirectUI@@UEAAJPEAUIDoubleTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnDoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@TextBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@TextBox@DirectUI@@UEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnHolding(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@TextBox@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnInheritedPropertyChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TextBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@TextBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@TextBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@TextBox@DirectUI@@UEAAJPEAUIManipulationCompletedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationCompleted(::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@TextBox@DirectUI@@UEAAJPEAUIManipulationStartedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationStarted(::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@TextBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@TextBox@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChangingHandler@TextBox@DirectUI@@SAJQEAVCDependencyObject@@JJPEAE@Z
    static long OnSelectionChangingHandler(CDependencyObject * const, long, long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@TextBox@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChangingHandler@TextBox@DirectUI@@SAJQEAVCTextBox@@_N@Z
    static long OnTextChangingHandler(CTextBox * const, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseNative@TextBox@DirectUI@@SAJPEAVControlGenerated@2@PEAUIInspectable@@W4KnownEventIndex@@@Z
    static long RaiseNative(::DirectUI::ControlGenerated *, IInspectable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPlaceholderTextHandler@TextBox@DirectUI@@SAJPEAVCDependencyObject@@I@Z
    static long ShowPlaceholderTextHandler(CDependencyObject *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextBox@DirectUI@@QEAA@XZ
    TextBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CandidateWindowBoundsChanged@TextBox@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVTextBox@Controls@Xaml@UI@Windows@@PEAVCandidateWindowBoundsChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CandidateWindowBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@TextBox@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TextBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@TextBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBox@DirectUI@@MEAA@XZ
    virtual ~TextBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeleteButtonClick@TextBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnDeleteButtonClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeleteButtonSizeChanged@TextBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnDeleteButtonSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeightAnimationCompleted@TextBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long OnHeightAnimationCompleted(IInspectable *, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@TextBox@DirectUI@@EEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@TextBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextBoxPressedEvenHandled@TextBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnTextBoxPressedEvenHandled(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTemplateParts@TextBox@DirectUI@@AEAAXXZ
    void ReleaseTemplateParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHeaderBeVisible@TextBox@DirectUI@@AEAAJPEA_N@Z
    long ShouldHeaderBeVisible(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@TextBox@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaceholderTextPresenterVisibility@TextBox@DirectUI@@AEAAJI@Z
    long UpdatePlaceholderTextPresenterVisibility(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateEvent@TextBox@DirectUI@@AEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@PEA_N@Z
    long ValidateEvent(::Windows::UI::Xaml::IRoutedEventArgs *, bool *);
};
} // namespace DirectUI
