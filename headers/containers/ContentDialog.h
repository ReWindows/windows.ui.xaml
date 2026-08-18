#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 56 member(s).
namespace DirectUI {
class ContentDialog {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ContentDialog@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@ContentDialog@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContentDialog@DirectUI@@QEAA@XZ
    ContentDialog();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogHeight@ContentDialog@DirectUI@@QEAAJPEAN@Z
    long GetDialogHeight(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@ContentDialog@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ContentDialog@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@ContentDialog@DirectUI@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsyncWithPlacementImpl@ContentDialog@DirectUI@@QEAAJW4ContentDialogPlacement@Controls@Xaml@UI@Windows@@PEAPEAU?$IAsyncOperation@W4ContentDialogResult@Controls@Xaml@UI@Windows@@@Foundation@7@@Z
    long ShowAsyncWithPlacementImpl(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_XamlRootImpl@ContentDialog@DirectUI@@UEAAJPEAUIXamlRoot@Xaml@UI@Windows@@@Z
    virtual long put_XamlRootImpl(::Windows::UI::Xaml::IXamlRoot *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentDialog@DirectUI@@UEAA@XZ
    virtual ~ContentDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustVisualStateForInputPane@ContentDialog@DirectUI@@AEAAJXZ
    long AdjustVisualStateForInputPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachButtonEvents@ContentDialog@DirectUI@@AEAAJXZ
    long AttachButtonEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlersForOpenDialog@ContentDialog@DirectUI@@AEAAJXZ
    long AttachEventHandlersForOpenDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAndConfigureButtons@ContentDialog@DirectUI@@AEAAJXZ
    long BuildAndConfigureButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateButton@ContentDialog@DirectUI@@AEBAJPEAUHSTRING__@@PEAPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    long CreateButton(HSTRING__*, ::Windows::UI::Xaml::Controls::Primitives::IButtonBase * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSmokeLayerBrush@ContentDialog@DirectUI@@AEAAJPEAPEAUIBrush@Media@Xaml@UI@Windows@@@Z
    long CreateSmokeLayerBrush(::Windows::UI::Xaml::Media::IBrush * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboardForLayoutAdjustmentsForInputPane@ContentDialog@DirectUI@@AEAAJUThickness@Xaml@UI@Windows@@W4ScrollBarVisibility@Controls@456@_NW4VerticalAlignment@456@PEAPEAUIStoryboard@Animation@Media@456@@Z
    long CreateStoryboardForLayoutAdjustmentsForInputPane(::Windows::UI::Xaml::Thickness, int, bool, int, ::Windows::UI::Xaml::Media::Animation::IStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredOpenPopup@ContentDialog@DirectUI@@AEAAJXZ
    long DeferredOpenPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachButtonEvents@ContentDialog@DirectUI@@AEAAJXZ
    long DetachButtonEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlers@ContentDialog@DirectUI@@AEAAJXZ
    long DetachEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachEventHandlersForOpenDialog@ContentDialog@DirectUI@@AEAAJXZ
    long DetachEventHandlersForOpenDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineTemplateVersion@ContentDialog@DirectUI@@AEAAXXZ
    void DetermineTemplateVersion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDeferralManagers@ContentDialog@DirectUI@@AEAAJXZ
    long EnsureDeferralManagers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCloseAction@ContentDialog@DirectUI@@AEAAJXZ
    long ExecuteCloseAction();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHelper@ContentDialog@DirectUI@@AEAAJW4ContentDialogButton@Controls@Xaml@UI@Windows@@PEAPEAUIButtonBase@Primitives@4567@@Z
    long GetButtonHelper(int, ::Windows::UI::Xaml::Controls::Primitives::IButtonBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultButtonHelper@ContentDialog@DirectUI@@AEAAJPEAPEAUIButtonBase@Primitives@Controls@Xaml@UI@Windows@@@Z
    long GetDefaultButtonHelper(::Windows::UI::Xaml::Controls::Primitives::IButtonBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDialogInnerMargin@ContentDialog@DirectUI@@AEAAJURect@Foundation@Windows@@PEAUThickness@Xaml@UI@5@@Z
    long GetDialogInnerMargin(WindissectOpaque, ::Windows::UI::Xaml::Thickness *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedElementPosition@ContentDialog@DirectUI@@AEAAJPEAUPoint@Foundation@Windows@@@Z
    long GetFocusedElementPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideAfterDeferralWorker@ContentDialog@DirectUI@@AEAAJ_NW4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    long HideAfterDeferralWorker(bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideInternal@ContentDialog@DirectUI@@AEAAJW4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    long HideInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDialogWithinPopup@ContentDialog@DirectUI@@AEAAJ_N@Z
    long HostDialogWithinPopup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandButtonClicked@ContentDialog@DirectUI@@AEAAJQEAV?$CEventSource@U?$ITypedEventHandler@PEAVContentDialog@Controls@Xaml@UI@Windows@@PEAVContentDialogButtonClickEventArgs@2345@@Foundation@Windows@@UIContentDialog@Controls@Xaml@UI@3@UIContentDialogButtonClickEventArgs@5673@@2@AEBV?$ComPtr@UICommand@Input@Xaml@UI@Windows@@@ctl@@AEBV?$ComPtr@UIInspectable@@@5@W4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    long OnCommandButtonClicked(WindissectOpaque * const, WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDialogShowingStateChanged@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIVisualStateChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnDialogShowingStateChanged(IInspectable *, ::Windows::UI::Xaml::IVisualStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDialogSizeChanged@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnDialogSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinishedClosing@ContentDialog@DirectUI@@AEAAJXZ
    long OnFinishedClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutRootKeyDown@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnLayoutRootKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutRootLoaded@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnLayoutRootLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutRootProcessKeyboardAccelerators@ContentDialog@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIProcessKeyboardAcceleratorEventArgs@Input@456@@Z
    long OnLayoutRootProcessKeyboardAccelerators(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Input::IProcessKeyboardAcceleratorEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupChildUnloaded@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnPopupChildUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPopupOpened@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnPopupOpened(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowActivated@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowActivatedEventArgs@Core@UI@Windows@@@Z
    long OnWindowActivated(IInspectable *, ::Windows::UI::Core::IWindowActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeChanged@ContentDialog@DirectUI@@AEAAJPEAUIInspectable@@PEAUIWindowSizeChangedEventArgs@Core@UI@Windows@@@Z
    long OnWindowSizeChanged(IInspectable *, ::Windows::UI::Core::IWindowSizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateButtonContainer@ContentDialog@DirectUI@@AEAAJAEBV?$ComPtr@UIButtonBase@Primitives@Controls@Xaml@UI@Windows@@@ctl@@0@Z
    long PopulateButtonContainer(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContent@ContentDialog@DirectUI@@AEAAJXZ
    long PrepareContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreparePopup@ContentDialog@DirectUI@@AEAAJ_N@Z
    long PreparePopup(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSmokeLayer@ContentDialog@DirectUI@@AEAAJXZ
    long PrepareSmokeLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClosedEvent@ContentDialog@DirectUI@@AEAAJW4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    long RaiseClosedEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOpenedEvent@ContentDialog@DirectUI@@AEAAJXZ
    long RaiseOpenedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAndPrepareContent@ContentDialog@DirectUI@@AEAAJXZ
    long ResetAndPrepareContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetContentProperties@ContentDialog@DirectUI@@AEAAJXZ
    long ResetContentProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetButtonPropertiesFromCommand@ContentDialog@DirectUI@@AEAAJW4ContentDialogButton@Controls@Xaml@UI@Windows@@PEAUICommand@Input@567@@Z
    long SetButtonPropertiesFromCommand(int, ::Windows::UI::Xaml::Input::ICommand *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialFocusElement@ContentDialog@DirectUI@@AEAAJXZ
    long SetInitialFocusElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupAutomationProperties@ContentDialog@DirectUI@@AEAAJXZ
    long SetPopupAutomationProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFireClosing@ContentDialog@DirectUI@@AEAAJPEA_N@Z
    long ShouldFireClosing(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeAndPositionContentInPopup@ContentDialog@DirectUI@@AEAAJXZ
    long SizeAndPositionContentInPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitleSpaceVisibility@ContentDialog@DirectUI@@AEAAJXZ
    long UpdateTitleSpaceVisibility();
};
} // namespace DirectUI
