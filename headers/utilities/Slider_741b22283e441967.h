#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 55 member(s).
namespace DirectUI {
class Slider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbLength@Slider@DirectUI@@QEAAJPEAN@Z
    long GetThumbLength(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumChanged@Slider@DirectUI@@UEAAJNN@Z
    virtual long OnMaximumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumChanged@Slider@DirectUI@@UEAAJNN@Z
    virtual long OnMinimumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyDownImpl@Slider@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPreviewKeyDownImpl(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviewKeyUpImpl@Slider@DirectUI@@UEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPreviewKeyUpImpl(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTappedUnhandled@Slider@DirectUI@@UEAAJPEAUIRightTappedRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnRightTappedUnhandled(::Windows::UI::Xaml::Input::IRightTappedRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@Slider@DirectUI@@UEAAJNN@Z
    virtual long OnValueChanged(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPressed@Slider@DirectUI@@QEAAJE@Z
    long SetIsPressed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbToolTipVisibility@Slider@DirectUI@@QEAAJEW4AutomaticToolTipInputMode@2@@Z
    long UpdateThumbToolTipVisibility(unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Thumb@Slider@DirectUI@@QEAAJPEAPEAVThumb@2@@Z
    long get_Thumb(::DirectUI::Thumb * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@Slider@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@Slider@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@Slider@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Slider@DirectUI@@MEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Slider@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusDisengaged@Slider@DirectUI@@IEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFocusDisengagedEventArgs@4567@@Z
    long OnFocusDisengaged(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::Controls::IFocusDisengagedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusEngaged@Slider@DirectUI@@IEAAJPEAUIControl@Controls@Xaml@UI@Windows@@PEAUIFocusEngagedEventArgs@4567@@Z
    long OnFocusEngaged(::Windows::UI::Xaml::Controls::IControl *, ::Windows::UI::Xaml::Controls::IFocusEngagedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@Slider@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnGotFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@Slider@DirectUI@@MEAAJPEAVIsEnabledChangedEventArgs@2@@Z
    virtual long OnIsEnabledChanged(::DirectUI::IsEnabledChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@Slider@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@Slider@DirectUI@@MEAAJPEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnLostFocus(::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@Slider@DirectUI@@IEAAJXZ
    long OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@Slider@DirectUI@@IEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerCaptureLost(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@Slider@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerEntered(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@Slider@DirectUI@@MEAAJPEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnPointerExited(::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@Slider@DirectUI@@IEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerMoved(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@Slider@DirectUI@@IEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerPressed(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@Slider@DirectUI@@IEAAJPEAUIInspectable@@PEAUIPointerRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnPointerReleased(IInspectable *, ::Windows::UI::Xaml::Input::IPointerRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@Slider@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@Slider@DirectUI@@MEAAJXZ
    virtual long OnVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@Slider@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Slider@DirectUI@@IEAA@XZ
    Slider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrackLayout@Slider@DirectUI@@IEAAJXZ
    long UpdateTrackLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTrackLayout@Slider@DirectUI@@IEAAJNN@Z
    long UpdateTrackLayout(double, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Slider@DirectUI@@MEAA@XZ
    virtual ~Slider();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestStep@Slider@DirectUI@@AEAAJNNPEAN@Z
    long GetClosestStep(double, double, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentThumbToolTip@Slider@DirectUI@@AEAAJPEAPEAVToolTip@2@@Z
    long GetCurrentThumbToolTip(::DirectUI::ToolTip * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGrid@Slider@DirectUI@@AEAAJPEAPEAVGrid@2@@Z
    long GetRootGrid(::DirectUI::Grid * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTickBarsArrange@Slider@DirectUI@@AEAAJXZ
    long InvalidateTickBarsArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutRoundedDimension@Slider@DirectUI@@AEAANN@Z
    double LayoutRoundedDimension(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveThumbToPoint@Slider@DirectUI@@AEAAJUPoint@Foundation@Windows@@@Z
    long MoveThumbToPoint(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsFocusEngagedChanged@Slider@DirectUI@@AEAAJXZ
    long OnIsFocusEngagedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsThumbToolTipEnabledChanged@Slider@DirectUI@@AEAAJXZ
    long OnIsThumbToolTipEnabledChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@Slider@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragCompleted@Slider@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragCompletedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragCompleted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragDelta@Slider@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragDeltaEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragDelta(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbDragStarted@Slider@DirectUI@@AEAAJPEAUIInspectable@@PEAUIDragStartedEventArgs@Primitives@Controls@Xaml@UI@Windows@@@Z
    long OnThumbDragStarted(IInspectable *, ::Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbSizeChanged@Slider@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnThumbSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbToolTipValueConverterChanged@Slider@DirectUI@@AEAAJXZ
    long OnThumbToolTipValueConverterChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTickPlacementChanged@Slider@DirectUI@@AEAAJXZ
    long OnTickPlacementChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformPointerUpAction@Slider@DirectUI@@AEAAJXZ
    long PerformPointerUpAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundingStep@Slider@DirectUI@@AEBAMXZ
    float RoundingStep() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultThumbToolTip@Slider@DirectUI@@AEAAJW4Orientation@Controls@Xaml@UI@Windows@@@Z
    long SetDefaultThumbToolTip(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Step@Slider@DirectUI@@AEAAJEE@Z
    long Step(unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterVisibility@Slider@DirectUI@@AEAAJXZ
    long UpdateHeaderPresenterVisibility();
};
} // namespace DirectUI
