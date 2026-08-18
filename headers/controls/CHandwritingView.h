#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 140 member(s).
class CHandwritingView {
public:
    class InputProfileMapValue;
    class LanguageSwitcherFlyout;
    class LanguageSwitcherMenuItem;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustForViewChange@CHandwritingView@@QEAAJ_N0@Z
    long AdjustForViewChange(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplatesForAllButtons@CHandwritingView@@QEAAJXZ
    long ApplyTemplatesForAllButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreCandidatesShown@CHandwritingView@@QEBA_NXZ
    bool AreCandidatesShown() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseHandwritingTipsFlyout@CHandwritingView@@QEAAJXZ
    long CollapseHandwritingTipsFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseInkControl@CHandwritingView@@QEAAJXZ
    long CollapseInkControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRectVisibleAsync@CHandwritingView@@QEAAJAEBURect@Foundation@Windows@@@Z
    long EnsureRectVisibleAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterDraftMode@CHandwritingView@@QEAAJXZ
    long EnterDraftMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CHandwritingView@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandHandwritingTipsFlyout@CHandwritingView@@QEAAJXZ
    long ExpandHandwritingTipsFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandInkControl@CHandwritingView@@QEAAJXZ
    long ExpandInkControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidates@CHandwritingView@@QEAAJIPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    long GetCandidates(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCandidatesBar@CHandwritingView@@QEAA?AV?$xref_ptr@VCHandwritingViewCandidatesBar@@@@XZ
    WindissectOpaque GetCandidatesBar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeleteAndFunctionButtonVisibilities@CHandwritingView@@QEAAJAEAW4Visibility@DirectUI@@0@Z
    long GetDeleteAndFunctionButtonVisibilities(int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingView@CHandwritingView@@SAJPEAVCDependencyObject@@PEAPEAV1@@Z
    static long GetHandwritingView(CDependencyObject *, CHandwritingView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHideCandidatesTimerIntervalInSeconds@CHandwritingView@@SAMXZ
    static float GetHideCandidatesTimerIntervalInSeconds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextWrapping@CHandwritingView@@UEBA?AW4TextWrapping@DirectUI@@XZ
    virtual int GetTextWrapping() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CHandwritingView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCandidates@CHandwritingView@@QEAAJXZ
    long HideCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTemplateChildren@CHandwritingView@@QEAAJXZ
    long InitializeTemplateChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDeleteButton@CHandwritingView@@QEAAJXZ
    long InvokeDeleteButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeExpandedFunctionButton@CHandwritingView@@QEAAJW4HandwritingViewFunctionButtonType@DirectUI@@@Z
    long InvokeExpandedFunctionButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeReturnButton@CHandwritingView@@QEAAJXZ
    long InvokeReturnButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSpaceButton@CHandwritingView@@QEAAJXZ
    long InvokeSpaceButton();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActivated@CHandwritingView@@QEBA_NXZ
    bool IsActivated() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAllCandidatesAppliedTemplate@CHandwritingView@@QEAAJM@Z
    long OnAllCandidatesAppliedTemplate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CHandwritingView@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCandidateSelected@CHandwritingView@@QEAAJI@Z
    long OnCandidateSelected(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConfigUpdated@CHandwritingView@@QEAAJXZ
    long OnConfigUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CHandwritingView@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CHandwritingView@@UEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCandidatesChangedEvent@CHandwritingView@@QEAAJI@Z
    long RaiseCandidatesChangedEvent(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClosedEvent@CHandwritingView@@QEAAXXZ
    void RaiseClosedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseOpenedEvent@CHandwritingView@@QEAAXXZ
    void RaiseOpenedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepFocus@CHandwritingView@@QEAA_NPEAVCDependencyObject@@@Z
    bool ShouldKeepFocus(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubmitText@CHandwritingView@@QEAAJW4InkToTextDismissReason@InkingExperiences@@@Z
    long SubmitText(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryOpen@CHandwritingView@@QEAAJPEAE@Z
    long TryOpen(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@CHandwritingView@@UEAAJIPEAX@Z
    virtual long TxNotify(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnInitialize@CHandwritingView@@QEAAJW4InkToTextDismissReason@InkingExperiences@@@Z
    long UnInitialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCachedButtonSize@CHandwritingView@@QEAAJXZ
    long UpdateCachedButtonSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFunctionButtonIcon@CHandwritingView@@QEAAJW4Symbol@DirectUI@@@Z
    long UpdateFunctionButtonIcon(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFunctionButtonState@CHandwritingView@@QEAAJXZ
    long UpdateFunctionButtonState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePendingPositionAndSize@CHandwritingView@@QEAAJW4HandwritingViewHostType@1@AEAW4PositionAndSizeResultStatus@1@_N@Z
    long UpdatePendingPositionAndSize(int, int &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionOnGrow@CHandwritingView@@QEAAXAEBUXSIZEF@@0@Z
    void UpdatePositionOnGrow(XSIZEF const &, XSIZEF const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CHandwritingView@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputScope@CHandwritingView@@MEAAJPEAW4InputScopeNameValue@@@Z
    virtual long GetInputScope(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPastePropertyID@CHandwritingView@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetPastePropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutPropertyID@CHandwritingView@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionFlyoutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorPropertyID@CHandwritingView@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorWhenNotFocusedPropertyID@CHandwritingView@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetSelectionHighlightColorWhenNotFocusedPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@CHandwritingView@@MEAA_NXZ
    virtual bool IsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CHandwritingView@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CHandwritingView@@MEAAJ_N@Z
    virtual long OnContentChanged(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOrRemoveButtonEventListeners@CHandwritingView@@AEAAJ_N@Z
    long AddOrRemoveButtonEventListeners(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMinMaxHeight@CHandwritingView@@AEAAJXZ
    long ApplyMinMaxHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPendingPosition@CHandwritingView@@AEAAJXZ
    long ApplyPendingPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPendingSize@CHandwritingView@@AEAAJXZ
    long ApplyPendingSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStyleFromOriginalTextBox@CHandwritingView@@AEAAJXZ
    long ApplyStyleFromOriginalTextBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWidth@CHandwritingView@@AEAAJXZ
    long ApplyWidth();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHandwritingView@@AEAA@PEAVCCoreServices@@@Z
    CHandwritingView(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMinMaxHeight@CHandwritingView@@AEAAXI@Z
    void CalculateMinMaxHeight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePopupBounds@CHandwritingView@@AEAA?AUXRECTF_RB@@W4HandwritingViewHostType@1@AEAW4PositionAndSizeResultStatus@1@@Z
    XRECTF_RB CalculatePopupBounds(int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFlyout@CHandwritingView@@AEAAJPEAVCDependencyObject@@@Z
    long CloseFlyout(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFlyouts@CHandwritingView@@AEAAJXZ
    long CloseFlyouts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeGlobalBounds@CHandwritingView@@AEAAJAEAW4PositionAndSizeResultStatus@1@@Z
    long ComputeGlobalBounds(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDoubleAnimation@CHandwritingView@@AEAAJAEAV?$xref_ptr@VCDoubleAnimation@@@@NNPEAVCDependencyObject@@PEBVCDependencyProperty@@@Z
    long ConfigureDoubleAnimation(WindissectOpaque &, double, double, CDependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureGestureTipsIcons@CHandwritingView@@AEAAJXZ
    long ConfigureGestureTipsIcons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureLanguageMenuItems@CHandwritingView@@AEAAJPEAVCMenuFlyoutItemBaseCollection@@@Z
    long ConfigureLanguageMenuItems(CMenuFlyoutItemBaseCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationStoryboard@CHandwritingView@@AEAAJAEAV?$xref_ptr@VCStoryboard@@@@@Z
    long CreateAnimationStoryboard(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCandidatePopup@CHandwritingView@@AEAAJXZ
    long CreateCandidatePopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInkingHost@CHandwritingView@@AEAAJXZ
    long CreateInkingHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInkingView@CHandwritingView@@AEAAJ_N@Z
    long CreateInkingView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLanguageSwitcherFlyout@CHandwritingView@@AEAAJXZ
    long CreateLanguageSwitcherFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineCandidatesBarHostXOffset@CHandwritingView@@AEAAJAEBUXRECTF_WH@@AEBURect@Foundation@Windows@@AEAMAEA_NM@Z
    long DetermineCandidatesBarHostXOffset(XRECTF_WH const &, WindissectOpaque const &, float &, bool &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineCandidatesBarHostYOffset@CHandwritingView@@AEAAJAEBUXRECTF_WH@@AEBURect@Foundation@Windows@@AEAMAEA_N@Z
    long DetermineCandidatesBarHostYOffset(XRECTF_WH const &, WindissectOpaque const &, float &, bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplayAttachedFlyout@CHandwritingView@@AEAAJPEAVCDependencyObject@@@Z
    long DisplayAttachedFlyout(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInput@CHandwritingView@@AEAAJ_N@Z
    long EnableInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureButtonColorIsVisible@CHandwritingView@@AEAAXQEAVCButton@@@Z
    void EnsureButtonColorIsVisible(CButton * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureButtonIsCollapsed@CHandwritingView@@AEAAXQEAVCButton@@@Z
    void EnsureButtonIsCollapsed(CButton * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureButtonIsVisible@CHandwritingView@@AEAAXQEAVCButton@@@Z
    void EnsureButtonIsVisible(CButton * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureButtonsAreVisible@CHandwritingView@@AEAAJXZ
    long EnsureButtonsAreVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExitDraftMode@CHandwritingView@@AEAAJXZ
    long ExitDraftMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixBorderColorAndThickness@CHandwritingView@@AEAAJXZ
    long FixBorderColorAndThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardOriginalTextControlBackground@CHandwritingView@@AEAAJXZ
    long ForwardOriginalTextControlBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardOriginalTextControlTheme@CHandwritingView@@AEAAXXZ
    void ForwardOriginalTextControlTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeightOrOverride@CHandwritingView@@AEAAMXZ
    float GetActualHeightOrOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedPlacementTargetBounds@CHandwritingView@@AEAAJXZ
    long GetAdjustedPlacementTargetBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedRectBounds@CHandwritingView@@AEAA?AUXRECTF_RB@@AEBU2@@Z
    XRECTF_RB GetAdjustedRectBounds(XRECTF_RB const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRootBounds@CHandwritingView@@AEAAJW4HandwritingViewHostType@1@AEAUXRECTF_WH@@@Z
    long GetContentRootBounds(int, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveRootScale@CHandwritingView@@AEAAMXZ
    float GetEffectiveRootScale();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinLineCountForCurrentWidth@CHandwritingView@@AEBAIXZ
    unsigned int GetMinLineCountForCurrentWidth() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlacementTargetNoRef@CHandwritingView@@AEAAPEAVCUIElement@@XZ
    CUIElement * GetPlacementTargetNoRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupAfterActivation@CHandwritingView@@AEAAJXZ
    long HookupAfterActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupButtonEvents@CHandwritingView@@AEAAJXZ
    long HookupButtonEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitiateInputProfileManager@CHandwritingView@@AEAAJXZ
    long InitiateInputProfileManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeBrushOpaque@CHandwritingView@@AEAA?AVCValue@@V2@@Z
    CValue MakeBrushOpaque(CValue);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddLanguageClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnAddLanguageClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollapseButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCollapseButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeleteButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDeleteButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDotDotDotButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDotDotDotButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnabledInputProfilesChanged@CHandwritingView@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@34567@@Z
    long OnEnabledInputProfilesChanged(::Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, ::Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandDownButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnExpandDownButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFindButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnFindButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForwardButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnForwardButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFunctionButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnFunctionButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingTipsClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnHandwritingTipsClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputProfileActivated@CHandwritingView@@AEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileActivatedEventArgs@34567@@Z
    long OnInputProfileActivated(::Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *, ::Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileActivatedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLanguageSelected@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnLanguageSelected(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLaunchHandwritingTipsUriClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnLaunchHandwritingTipsUriClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrigTextBoxLosingFocus@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnOrigTextBoxLosingFocus(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResumeInput@CHandwritingView@@AEAAJXZ
    long OnResumeInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReturnButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnReturnButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowTipsOnFirstLaunchedTimerTick@CHandwritingView@@AEAAJXZ
    long OnShowTipsOnFirstLaunchedTimerTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpaceButtonClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnSpaceButtonClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokeCanceledOrEnded@CHandwritingView@@AEAAJPEAUIInkStrokeInput@Inking@Input@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    long OnStrokeCanceledOrEnded(::Windows::UI::Input::Inking::IInkStrokeInput *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStrokeStarted@CHandwritingView@@AEAAJPEAUIInkStrokeInput@Inking@Input@UI@Windows@@PEAUIPointerEventArgs@Core@56@@Z
    long OnStrokeStarted(::Windows::UI::Input::Inking::IInkStrokeInput *, ::Windows::UI::Core::IPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwitchLanguageClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnSwitchLanguageClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSwitchToKeyboardClicked@CHandwritingView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnSwitchToKeyboardClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTransitionToExpandedIfFirstInvocation@CHandwritingView@@AEAAJXZ
    long QueueTransitionToExpandedIfFirstInvocation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterStrokeEventHandlers@CHandwritingView@@AEAAJXZ
    long RegisterStrokeEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePalmRejectionDelayZone@CHandwritingView@@AEAAJXZ
    long RemovePalmRejectionDelayZone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCandidatesBarHostShow@CHandwritingView@@AEAAJAEBURect@Foundation@Windows@@_N@Z
    long RequestCandidatesBarHostShow(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollLastRectToView@CHandwritingView@@AEAAJXZ
    long ScrollLastRectToView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimerIfNotNull@CHandwritingView@@CAJV?$xref_ptr@VCDispatcherTimer@@@@@Z
    static long StopTimerIfNotNull(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendInputTemporarily@CHandwritingView@@AEAAJXZ
    long SuspendInputTemporarily();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleAttachedFlyout@CHandwritingView@@AEAAJPEAVCDependencyObject@@@Z
    long ToggleAttachedFlyout(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterStrokeEventHandlers@CHandwritingView@@AEAAJXZ
    long UnRegisterStrokeEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonVisibilityIfNotNull@CHandwritingView@@AEAAXV?$xref_ptr@VCButton@@@@AEBW4Visibility@DirectUI@@@Z
    void UpdateButtonVisibilityIfNotNull(WindissectOpaque, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHandwritingView@CHandwritingView@@AEAAJXZ
    long UpdateHandwritingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHandwritingViewLaunchedBefore@CHandwritingView@@CAJAEA_N@Z
    static long UpdateHandwritingViewLaunchedBefore(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputDeviceTypes@CHandwritingView@@AEAAJXZ
    long UpdateInputDeviceTypes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInputProfiles@CHandwritingView@@AEAAJXZ
    long UpdateInputProfiles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePalmRejectionDelayZone@CHandwritingView@@AEAAJAEBUXSIZEF@@@Z
    long UpdatePalmRejectionDelayZone(XSIZEF const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePlaceHolder@CHandwritingView@@AEAAJXZ
    long UpdatePlaceHolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePopupVerticalOffset@CHandwritingView@@AEAAJM@Z
    long UpdatePopupVerticalOffset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionAndSize@CHandwritingView@@AEAAJXZ
    long UpdatePositionAndSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSwitchLanguageButtonIcon@CHandwritingView@@AEAAJAEBUInputProfileMapValue@1@@Z
    long UpdateSwitchLanguageButtonIcon(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextPropertiesForOpening@CHandwritingView@@AEAAJXZ
    long UpdateTextPropertiesForOpening();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHandwritingView@@EEAA@XZ
    virtual ~CHandwritingView();
};
