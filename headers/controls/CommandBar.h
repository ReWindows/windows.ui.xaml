#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 96 member(s).
namespace DirectUI {
class CommandBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CommandBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long ArrangeOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPickupForRTBRender@CommandBar@DirectUI@@SAJPEAVCDependencyObject@@PEAI@Z
    static long CanPickupForRTBRender(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenus@CommandBar@DirectUI@@QEAAJPEAUISubMenuOwner@Controls@Xaml@UI@Windows@@_N@Z
    long CloseSubMenus(::Windows::UI::Xaml::Controls::ISubMenuOwner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsElement@CommandBar@DirectUI@@UEAAJPEAVDependencyObject@2@PEA_N@Z
    virtual long ContainsElement(::DirectUI::DependencyObject *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindParentCommandBarForElement@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAPEAUICommandBar@4567@@Z
    static long FindParentCommandBarForElement(::Windows::UI::Xaml::Controls::ICommandBarElement *, ::Windows::UI::Xaml::Controls::ICommandBar * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSetStatic@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAH@Z
    static long GetPositionInSetStatic(::Windows::UI::Xaml::Controls::ICommandBarElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxySize@CommandBar@DirectUI@@QEAAJPEAN0@Z
    long GetProxySize(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetStatic@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAH@Z
    static long GetSizeOfSetStatic(::Windows::UI::Xaml::Controls::ICommandBarElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocus@CommandBar@DirectUI@@UEAAJPEAE@Z
    virtual long HasFocus(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCommandBarElementInOverflow@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAE@Z
    static long IsCommandBarElementInOverflow(::Windows::UI::Xaml::Controls::ICommandBarElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CommandBar@DirectUI@@UEAAJUSize@Foundation@Windows@@PEAU345@@Z
    virtual long MeasureOverride(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyElementVectorChanging@CommandBar@DirectUI@@QEAAJPEAVCommandBarElementCollection@2@W4CollectionChange@Collections@Foundation@Windows@@I@Z
    long NotifyElementVectorChanging(CommandBarElementCollection *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CommandBar@DirectUI@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandBarElementVisibilityChanged@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    static long OnCommandBarElementVisibilityChanged(::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandExecutionStatic@CommandBar@DirectUI@@SAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    static long OnCommandExecutionStatic(::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterImpl@CommandBar@DirectUI@@QEAAJXZ
    long RegisterImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProxyConnected@CommandBar@DirectUI@@QEAAJI@Z
    long SetProxyConnected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterImpl@CommandBar@DirectUI@@QEAAJXZ
    long UnregisterImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@CommandBar@DirectUI@@MEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandBar@DirectUI@@IEAA@XZ
    CommandBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectFrameworkPeerCore@CommandBar@DirectUI@@MEAAJXZ
    virtual long DisconnectFrameworkPeerCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CommandBar@DirectUI@@MEAAJIIII@Z
    virtual long EnterImpl(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFocusableElementOverride@CommandBar@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetFirstFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastFocusableElementOverride@CommandBar@DirectUI@@MEAAJPEAPEAVDependencyObject@2@@Z
    virtual long GetLastFocusableElementOverride(::DirectUI::DependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalOffsetNeededToOpenInDefaultDirection@CommandBar@DirectUI@@MEAAJPEANPEA_N@Z
    virtual long GetVerticalOffsetNeededToOpenInDefaultDirection(double *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferredElementStateChanged@CommandBar@DirectUI@@MEAAJW4KnownPropertyIndex@@W4DeferredElementStateChange@@IPEAVCDependencyObject@@@Z
    virtual long NotifyDeferredElementStateChanged(int, int, unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentRootSizeChanged@CommandBar@DirectUI@@MEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    virtual long OnContentRootSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CommandBar@DirectUI@@MEAAJPEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    virtual long OnKeyDown(::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@CommandBar@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareState@CommandBar@DirectUI@@MEAAJXZ
    virtual long PrepareState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCandidateTabStopOverride@CommandBar@DirectUI@@MEAAJPEAVDependencyObject@2@00_NPEAPEAV32@PEAE@Z
    virtual long ProcessCandidateTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTabStopOverride@CommandBar@DirectUI@@MEAAJPEAVDependencyObject@2@0_N1PEAPEAV32@PEAE@Z
    virtual long ProcessTabStopOverride(::DirectUI::DependencyObject *, ::DirectUI::DependencyObject *, bool, bool, ::DirectUI::DependencyObject * *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreSavedFocusImpl@CommandBar@DirectUI@@MEAAJPEAVDependencyObject@2@W4FocusState@Xaml@UI@Windows@@@Z
    virtual long RestoreSavedFocusImpl(::DirectUI::DependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettings@CommandBar@DirectUI@@MEAAJXZ
    virtual long UpdateTemplateSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandBar@DirectUI@@MEAA@XZ
    virtual ~CommandBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOverflowContentHorizontalOffset@CommandBar@DirectUI@@AEAAJUSize@Foundation@Windows@@URect@45@PEAN@Z
    long CalculateOverflowContentHorizontalOffset(WindissectOpaque, WindissectOpaque, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSubMenu@CommandBar@DirectUI@@AEAAJAEBV?$ComPtr@UISubMenuOwner@Controls@Xaml@UI@Windows@@@ctl@@PEAUISubMenuOwner@Controls@Xaml@UI@Windows@@_N@Z
    long CloseSubMenu(WindissectOpaque const &, ::Windows::UI::Xaml::Controls::ISubMenuOwner *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureItemsControls@CommandBar@DirectUI@@AEAAJXZ
    long ConfigureItemsControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProxy@CommandBar@DirectUI@@AEAAJXZ
    long EnsureProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMovablePrimaryCommands@CommandBar@DirectUI@@AEAAJNNPEAI@Z
    long FindMovablePrimaryCommands(double, double, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMovablePrimaryCommandsFromOrderSet@CommandBar@DirectUI@@AEAAJNNPEAIAEA_N@Z
    long FindMovablePrimaryCommandsFromOrderSet(double, double, unsigned int *, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMovableSeparatorsInBackwardDirection@CommandBar@DirectUI@@AEAAJIPEAIPEAN@Z
    long FindMovableSeparatorsInBackwardDirection(unsigned int, unsigned int *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMovableSeparatorsInForwardDirection@CommandBar@DirectUI@@AEAAJIPEAIPEAN@Z
    long FindMovableSeparatorsInForwardDirection(unsigned int, unsigned int *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNonSeparatorInDynamicPrimaryCommands@CommandBar@DirectUI@@AEAAJ_NHPEA_NPEAH@Z
    long FindNonSeparatorInDynamicPrimaryCommands(bool, int, bool *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireDynamicOverflowItemsChangingEvent@CommandBar@DirectUI@@AEAAJ_N@Z
    long FireDynamicOverflowItemsChangingEvent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivePrimaryCommands@CommandBar@DirectUI@@AEAAPEAVCommandBarElementCollection@2@XZ
    CommandBarElementCollection * GetActivePrimaryCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActiveSecondaryCommands@CommandBar@DirectUI@@AEAAPEAVCommandBarElementCollection@2@XZ
    CommandBarElementCollection * GetActiveSecondaryCommands();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusState@CommandBar@DirectUI@@AEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAW4FocusState@456@@Z
    long GetFocusState(::Windows::UI::Xaml::IDependencyObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverflowContentSize@CommandBar@DirectUI@@AEAAJPEAUSize@Foundation@Windows@@@Z
    long GetOverflowContentSize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionInSet@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAH@Z
    long GetPositionInSet(::Windows::UI::Xaml::Controls::ICommandBarElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestorablePrimaryCommandsMinimumCount@CommandBar@DirectUI@@AEAAJPEAI@Z
    long GetRestorablePrimaryCommandsMinimumCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldOverflowOpenInFullWidth@CommandBar@DirectUI@@AEAAJPEA_N@Z
    long GetShouldOverflowOpenInFullWidth(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSet@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAH@Z
    long GetSizeOfSet(::Windows::UI::Xaml::Controls::ICommandBarElement *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTabKeyPressedInOverflow@CommandBar@DirectUI@@AEAAJ_NPEA_N@Z
    long HandleTabKeyPressedInOverflow(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasVisibleElements@CommandBar@DirectUI@@CAJPEAVCommandBarElementCollection@2@PEA_N@Z
    static long HasVisibleElements(CommandBarElementCollection *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPrimaryCommandToPrimaryCommandsInTransition@CommandBar@DirectUI@@AEAAJIPEAIPEAN@Z
    long InsertPrimaryCommandToPrimaryCommandsInTransition(unsigned int, unsigned int *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertSeparatorToPrimaryCommandsInTransition@CommandBar@DirectUI@@AEAAJIPEAIPEAN@Z
    long InsertSeparatorToPrimaryCommandsInTransition(unsigned int, unsigned int *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertTransitionPrimaryCommandIntoOverflow@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    long InsertTransitionPrimaryCommandIntoOverflow(::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppBarSeparatorInDynamicPrimaryCommands@CommandBar@DirectUI@@AEAAJIPEA_N@Z
    long IsAppBarSeparatorInDynamicPrimaryCommands(unsigned int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementInOverflow@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@PEAE@Z
    long IsElementInOverflow(::Windows::UI::Xaml::Controls::ICommandBarElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverrideForDynamicOverflow@CommandBar@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAU345@@Z
    long MeasureOverrideForDynamicOverflow(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverrideForWinBlue@CommandBar@DirectUI@@AEAAJUSize@Foundation@Windows@@PEAU345@@Z
    long MeasureOverrideForWinBlue(WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveTransitionPrimaryCommandsIntoOverflow@CommandBar@DirectUI@@AEAAJI@Z
    long MoveTransitionPrimaryCommandsIntoOverflow(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessKeyInvoked@CommandBar@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUIAccessKeyInvokedEventArgs@Input@456@@Z
    long OnAccessKeyInvoked(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosedImpl@CommandBar@DirectUI@@EEAAJPEAUIInspectable@@@Z
    virtual long OnClosedImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosingImpl@CommandBar@DirectUI@@EEAAJPEAUIInspectable@@@Z
    virtual long OnClosingImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLeftRightKeyDown@CommandBar@DirectUI@@AEAAJ_NPEA_N@Z
    long OnLeftRightKeyDown(bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOpeningImpl@CommandBar@DirectUI@@EEAAJPEAUIInspectable@@@Z
    virtual long OnOpeningImpl(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowContentKeyDown@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z
    long OnOverflowContentKeyDown(IInspectable *, ::Windows::UI::Xaml::Input::IKeyRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowContentRootSizeChanged@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnOverflowContentRootSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowPopupOpened@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@0@Z
    long OnOverflowPopupOpened(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPrimaryCommandsChanged@CommandBar@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnPrimaryCommandsChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyItemClicked@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long OnProxyItemClicked(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSecondaryCommandsChanged@CommandBar@DirectUI@@AEAAJPEAU?$IObservableVector@PEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Collections@Foundation@Windows@@PEAUIVectorChangedEventArgs@456@@Z
    long OnSecondaryCommandsChanged(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSecondaryItemsControlLoaded@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnSecondaryItemsControlLoaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@CommandBar@DirectUI@@AEAAJPEAUIInspectable@@PEAUIRoutedEventArgs@Xaml@UI@Windows@@@Z
    long OnUnloaded(IInspectable *, ::Windows::UI::Xaml::IRoutedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpDownKeyDown@CommandBar@DirectUI@@AEAAJ_N0PEA_N@Z
    long OnUpDownKeyDown(bool, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDefaultLabelPosition@CommandBar@DirectUI@@AEAAJXZ
    long PropagateDefaultLabelPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDefaultLabelPositionToElement@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    long PropagateDefaultLabelPositionToElement(::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDynamicCommands@CommandBar@DirectUI@@AEAAJXZ
    long ResetDynamicCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreCommandBarElementFocus@CommandBar@DirectUI@@AEAAJXZ
    long RestoreCommandBarElementFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreFocusToExpandButton@CommandBar@DirectUI@@AEAAJXZ
    long RestoreFocusToExpandButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveMovedPrimaryCommandsIntoPreviousTransitionCollection@CommandBar@DirectUI@@AEAAJXZ
    long SaveMovedPrimaryCommandsIntoPreviousTransitionCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompactMode@CommandBar@DirectUI@@AEAAJ_N@Z
    long SetCompactMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedElementInOverflow@CommandBar@DirectUI@@AEAAJ_NPEA_N@Z
    long SetFocusedElementInOverflow(bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputModeOnSecondaryCommand@CommandBar@DirectUI@@AEAAJIW4InputDeviceType@2@@Z
    long SetInputModeOnSecondaryCommand(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowStyleAndInputModeOnSecondaryCommand@CommandBar@DirectUI@@AEAAJI_N@Z
    long SetOverflowStyleAndInputModeOnSecondaryCommand(unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowStyleParams@CommandBar@DirectUI@@AEAAJXZ
    long SetOverflowStyleParams();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowStyleUsage@CommandBar@DirectUI@@AEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@_N@Z
    long SetOverflowStyleUsage(::Windows::UI::Xaml::Controls::ICommandBarElement *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftFocusHorizontally@CommandBar@DirectUI@@AEAAJ_N@Z
    long ShiftFocusHorizontally(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftFocusVerticallyInOverflow@CommandBar@DirectUI@@AEAAJ_N0@Z
    long ShiftFocusVerticallyInOverflow(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreFocusedCommandBarElement@CommandBar@DirectUI@@AEAAJXZ
    long StoreFocusedCommandBarElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimPrimaryCommandSeparatorInOverflow@CommandBar@DirectUI@@AEAAJPEAI@Z
    long TrimPrimaryCommandSeparatorInOverflow(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDismissCommandBarOverflow@CommandBar@DirectUI@@AEAAJXZ
    long TryDismissCommandBarOverflow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputDeviceTypeUsedToOpen@CommandBar@DirectUI@@AEAAJXZ
    long UpdateInputDeviceTypeUsedToOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimaryCommandElementMinWidthInOverflow@CommandBar@DirectUI@@AEAAJXZ
    long UpdatePrimaryCommandElementMinWidthInOverflow();
};
} // namespace DirectUI
