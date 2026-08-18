#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 52 member(s).
namespace DirectUI {
class FlipView {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlipView@DirectUI@@QEAA@XZ
    FlipView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreviousAndNextButtons@FlipView@DirectUI@@QEAAJPEAPEAVButtonBase@2@0@Z
    long GetPreviousAndNextButtons(::DirectUI::ButtonBase * *, ::DirectUI::ButtonBase * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@FlipView@DirectUI@@UEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlipView@DirectUI@@UEAA@XZ
    virtual ~FlipView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@FlipView@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@FlipView@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForItemOverride@FlipView@DirectUI@@MEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long GetContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemItsOwnContainerOverride@FlipView@DirectUI@@MEAAJPEAUIInspectable@@PEAE@Z
    virtual long IsItemItsOwnContainerOverride(IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@FlipView@DirectUI@@MEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfSourceChanged@FlipView@DirectUI@@MEAAJPEAU?$IObservableVector@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    virtual long NotifyOfSourceChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@FlipView@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@FlipView@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@FlipView@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@FlipView@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@FlipView@DirectUI@@MEAAJPEAUIVectorChangedEventArgs@Collections@Foundation@Windows@@@Z
    virtual long OnItemsChanged(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@FlipView@DirectUI@@MEAAJPEAUIInspectable@@@Z
    virtual long OnItemsSourceChanged(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@FlipView@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@FlipView@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@FlipView@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerCaptureLost(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@FlipView@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@FlipView@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerMoved(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChanged@FlipView@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerWheelChanged(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@FlipView@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@FlipView@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@FlipView@DirectUI@@MEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAUIInspectable@@@Z
    virtual long PrepareContainerForItemOverride(::Windows::UI::Xaml::IDependencyObject *, IInspectable *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ButtonsFadeOutTimerTickHandler@FlipView@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long ButtonsFadeOutTimerTickHandler(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBounds@FlipView@DirectUI@@AEAAJHPEAUXRECTF_WH@@@Z
    long CalculateBounds(int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateButtonClickEventHandler@FlipView@DirectUI@@AEAAJPEAG_KP812@EAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@ZPEAPEAUIButtonBase@Primitives@Controls@567@PEAUEventRegistrationToken@@@Z
    long CreateButtonClickEventHandler(unsigned short *, uint64_t, long ( ::FlipView::*)(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *), ::Windows::UI::Xaml::Controls::Primitives::IButtonBase * *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateButtonPointerEnteredEventHandler@FlipView@DirectUI@@AEAAJPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@AEAV?$EventPtr@V?$event_handler@UIPointerEventHandler@Input@Xaml@UI@Windows@@UIInspectable@@UIPointerRoutedEventArgs@2345@UUIElementPointerEnteredTraits@DirectUI@@@ctl@@@ctl@@@Z
    long CreateButtonPointerEnteredEventHandler(::Windows::UI::Xaml::Controls::Primitives::IButtonBase *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateButtonPointerExitedEventHandler@FlipView@DirectUI@@AEAAJPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@AEAV?$EventPtr@V?$event_handler@UIPointerEventHandler@Input@Xaml@UI@Windows@@UIInspectable@@UIPointerRoutedEventArgs@2345@UUIElementPointerExitedTraits@DirectUI@@@ctl@@@ctl@@@Z
    long CreateButtonPointerExitedEventHandler(::Windows::UI::Xaml::Controls::Primitives::IButtonBase *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureButtonsFadeOutTimer@FlipView@DirectUI@@AEAAJXZ
    long EnsureButtonsFadeOutTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixOffset@FlipView@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long FixOffset(IInspectable *, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredItemHeight@FlipView@DirectUI@@AEAAJPEAN@Z
    long GetDesiredItemHeight(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredItemWidth@FlipView@DirectUI@@AEAAJPEAN@Z
    long GetDesiredItemWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePointerLostOrCanceled@FlipView@DirectUI@@AEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long HandlePointerLostOrCanceled(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideButtonsImmediately@FlipView@DirectUI@@AEAAJXZ
    long HideButtonsImmediately();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeScrollViewer@FlipView@DirectUI@@AEAAJXZ
    long InitializeScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@FlipView@DirectUI@@AEAAJPEA_N@Z
    long MoveNext(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MovePrevious@FlipView@DirectUI@@AEAAJPEA_N@Z
    long MovePrevious(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsHostAvailable@FlipView@DirectUI@@EEAAJXZ
    virtual long OnItemsHostAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextButtonPartClick@FlipView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnNextButtonPartClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviousButtonPartClick@FlipView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPreviousButtonPartClick(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@FlipView@DirectUI@@AEAAJPEAUIInspectable@@PEAUIScrollViewerViewChangedEventArgs@Controls@Xaml@UI@Windows@@@Z
    long OnScrollViewerViewChanged(IInspectable *, ::Windows::UI::Xaml::Controls::IScrollViewerViewChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollingHostPartSizeChanged@FlipView@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnScrollingHostPartSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedIndexChanged@FlipView@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnSelectedIndexChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetButtonsFadeOutTimer@FlipView@DirectUI@@AEAAJXZ
    long ResetButtonsFadeOutTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSnapPointsTypes@FlipView@DirectUI@@AEAAJXZ
    long RestoreSnapPointsTypes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveAndClearSnapPointsTypes@FlipView@DirectUI@@AEAAJXZ
    long SaveAndClearSnapPointsTypes();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFixOffsetTimer@FlipView@DirectUI@@AEAAJXZ
    long SetFixOffsetTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetToSelectedIndex@FlipView@DirectUI@@AEAAJXZ
    long SetOffsetToSelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookTemplate@FlipView@DirectUI@@AEAAJXZ
    long UnhookTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedIndex@FlipView@DirectUI@@AEAAJI@Z
    long UpdateSelectedIndex(unsigned int);
};
} // namespace DirectUI
