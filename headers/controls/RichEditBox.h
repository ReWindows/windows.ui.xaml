#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 41 member(s).
namespace DirectUI {
class RichEditBox {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinguisticAlternativesAsyncImpl@RichEditBox@DirectUI@@QEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    long GetLinguisticAlternativesAsyncImpl(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@RichEditBox@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleContentLinkNavigation@RichEditBox@DirectUI@@SAJPEAUIUriRuntimeClass@Foundation@Windows@@I@Z
    static long HandleContentLinkNavigation(WindissectOpaque *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHyperlinkNavigation@RichEditBox@DirectUI@@SAJPEAGI@Z
    static long HandleHyperlinkNavigation(unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchContentLink@RichEditBox@DirectUI@@SAJPEAUIUriRuntimeClass@Foundation@Windows@@PEAUHSTRING__@@@Z
    static long LaunchContentLink(WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplateHandler@RichEditBox@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long OnApplyTemplateHandler(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceivedImpl@RichEditBox@DirectUI@@UEAAJPEAUICharacterReceivedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnCharacterReceivedImpl(::Windows::UI::Xaml::Input::ICharacterReceivedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RichEditBox@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@RichEditBox@DirectUI@@UEAAJPEAUIDoubleTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnDoubleTapped(::Windows::UI::Xaml::Input::IDoubleTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@RichEditBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@RichEditBox@DirectUI@@UEAAJPEAUIHoldingRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnHolding(::Windows::UI::Xaml::Input::IHoldingRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@RichEditBox@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long OnInheritedPropertyChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@RichEditBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@RichEditBox@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyUp(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@RichEditBox@DirectUI@@UEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@RichEditBox@DirectUI@@UEAAJPEAUIManipulationCompletedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationCompleted(::Windows::UI::Xaml::Input::IManipulationCompletedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@RichEditBox@DirectUI@@UEAAJPEAUIManipulationStartedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnManipulationStarted(::Windows::UI::Xaml::Input::IManipulationStartedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerPressed(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@RichEditBox@DirectUI@@UEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerReleased(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@RichEditBox@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTapped(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChangingHandler@RichEditBox@DirectUI@@SAJQEAVCDependencyObject@@JJPEAE@Z
    static long OnSelectionChangingHandler(CDependencyObject * const, long, long, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@RichEditBox@DirectUI@@UEAAJPEAUITappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnTapped(::Windows::UI::Xaml::Input::ITappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextChangingHandler@RichEditBox@DirectUI@@SAJPEAVCDependencyObject@@_N@Z
    static long OnTextChangingHandler(CDependencyObject *, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RichEditBox@DirectUI@@QEAA@XZ
    RichEditBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPlaceholderTextHandler@RichEditBox@DirectUI@@SAJPEAVCDependencyObject@@I@Z
    static long ShowPlaceholderTextHandler(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CandidateWindowBoundsChanged@RichEditBox@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVRichEditBox@Controls@Xaml@UI@Windows@@PEAVCandidateWindowBoundsChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CandidateWindowBoundsChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DocumentImpl@RichEditBox@DirectUI@@QEAAJPEAPEAUITextDocument@Text@UI@Windows@@@Z
    long get_DocumentImpl(::Windows::UI::Text::ITextDocument * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RichEditBox@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@RichEditBox@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RichEditBox@DirectUI@@MEAA@XZ
    virtual ~RichEditBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeightAnimationCompleted@RichEditBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long OnHeightAnimationCompleted(IInspectable *, ::Windows::UI::Xaml::IFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@RichEditBox@DirectUI@@EEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRichEditBoxPressedEvenHandled@RichEditBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnRichEditBoxPressedEvenHandled(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@RichEditBox@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@RichEditBox@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaceholderTextPresenterVisibility@RichEditBox@DirectUI@@AEAAJI@Z
    long UpdatePlaceholderTextPresenterVisibility(unsigned int);
};
} // namespace DirectUI
