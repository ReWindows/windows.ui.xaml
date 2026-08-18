#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 202 member(s).
class CTextBoxBase {
public:
    class ScopedSuppressChangeNotifications;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptsReturn@CTextBoxBase@@UEBAIXZ
    virtual unsigned int AcceptsReturn() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringLastVisibleRectIntoView@CTextBoxBase@@QEAAJ_N@Z
    long BringLastVisibleRectIntoView(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPasteClipboardContent@CTextBoxBase@@QEBA_NXZ
    bool CanPasteClipboardContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelClosingHandwritingViewPopup@CTextBoxBase@@QEAAJXZ
    long CancelClosingHandwritingViewPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientToTextBox@CTextBoxBase@@QEAAJPEAUXPOINTF@@@Z
    long ClientToTextBox(XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CTextBoxBase@@QEAAJXZ
    long Copy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandwritingViewContainer@CTextBoxBase@@QEAAJ_N@Z
    long CreateHandwritingViewContainer(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cut@CTextBoxBase@@QEAAJXZ
    long Cut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllFlyouts@CTextBoxBase@@QEAAJXZ
    long DismissAllFlyouts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableCandidateWindowBoundsTracking@CTextBoxBase@@QEAAJUEventHandle@@@Z
    long EnableCandidateWindowBoundsTracking(EventHandle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRectVisible@CTextBoxBase@@QEAAJAEBUtagRECT@@@Z
    long EnsureRectVisible(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRectVisibleWithPadding@CTextBoxBase@@QEAAJAEBUtagRECT@@@Z
    long EnsureRectVisibleWithPadding(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateHandwritingViewPolicy@CTextBoxBase@@QEAA_N_N00@Z
    bool EvaluateHandwritingViewPolicy(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuOpeningEventSynchronously@CTextBoxBase@@QEAAJAEA_NAEBUPoint@Foundation@Windows@@@Z
    long FireContextMenuOpeningEventSynchronously(bool &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceEditFocusLoss@CTextBoxBase@@QEAAJXZ
    long ForceEditFocusLoss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualSize@CTextBoxBase@@QEAAXAEAM0@Z
    void GetActualSize(float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignment@CTextBoxBase@@UEAAJPEAW4TextAlignment@DirectUI@@@Z
    virtual long GetAlignment(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionPrefixAndPostfixStrings@CTextBoxBase@@QEAAJPEAPEAUHSTRING__@@0@Z
    long GetCompositionPrefixAndPostfixStrings(HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositionString@CTextBoxBase@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetCompositionString(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextMenuShowPosition@CTextBoxBase@@QEAAJPEAUXPOINTF@@@Z
    long GetContextMenuShowPosition(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentInputLanguage@CTextBoxBase@@QEAAJPEAPEAUILanguage@Globalization@Windows@@@Z
    long GetCurrentInputLanguage(::Windows::Globalization::ILanguage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDocument@CTextBoxBase@@QEBAJPEAPEAUITextDocument2@@@Z
    long GetDocument(ITextDocument2* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalSize@CTextBoxBase@@QEAAXAEAM0@Z
    void GetOriginalSize(float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProofingMenuFlyout@CTextBoxBase@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetProofingMenuFlyout(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRichEditRawElementProviderSimple@CTextBoxBase@@QEAAJPEAPEAX@Z
    long GetRichEditRawElementProviderSimple(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@CTextBoxBase@@QEAAJPEAPEAUITextSelection2@@@Z
    long GetSelection(ITextSelection2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionBoundingRect@CTextBoxBase@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetSelectionBoundingRect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpellCheckEnabled@CTextBoxBase@@UEBAJPEAI0@Z
    virtual long GetSpellCheckEnabled(unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPredictionEnabled@CTextBoxBase@@UEBAJPEAI0@Z
    virtual long GetTextPredictionEnabled(unsigned int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextWrapping@CTextBoxBase@@UEBA?AW4TextWrapping@DirectUI@@XZ
    virtual int GetTextWrapping() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBoxBase@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwrappedPattern@CTextBoxBase@@QEAAJHIPEAPEAX@Z
    long GetUnwrappedPattern(int, unsigned int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CTextBoxBase@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleRect@CTextBoxBase@@QEAAJPEAUXRECT_RB@@@Z
    long GetVisibleRect(XRECT_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasContextFlyout@CTextBoxBase@@QEBA_NXZ
    bool HasContextFlyout() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSelection@CTextBoxBase@@QEAA_NXZ
    bool HasSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateView@CTextBoxBase@@QEAAXXZ
    void InvalidateView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewAndForceRedraw@CTextBoxBase@@QEAAXXZ
    void InvalidateViewAndForceRedraw();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandwritingViewExpandedUpwards@CTextBoxBase@@QEAA_NXZ
    bool IsHandwritingViewExpandedUpwards();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandwritingViewVisible@CTextBoxBase@@QEBA_NXZ
    bool IsHandwritingViewVisible() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInXamlIsland@CTextBoxBase@@QEAA_NXZ
    bool IsInXamlIsland();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPassword@CTextBoxBase@@UEBAIXZ
    virtual unsigned int IsPassword() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPasswordRevealed@CTextBoxBase@@UEBAIXZ
    virtual unsigned int IsPasswordRevealed() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@CTextBoxBase@@UEBAIXZ
    virtual unsigned int IsReadOnly() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenForSIPVisibilityChanges@CTextBoxBase@@QEAAJXZ
    long ListenForSIPVisibilityChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@CTextBoxBase@@UEAAJXZ
    virtual long OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGripperHeld@CTextBoxBase@@QEAAJPEAVCEventArgs@@@Z
    long OnGripperHeld(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGripperPressedWithBarrelButtonDown@CTextBoxBase@@QEAAJPEAVCEventArgs@@@Z
    long OnGripperPressedWithBarrelButtonDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGripperTapped@CTextBoxBase@@QEAAJPEAVCEventArgs@@_N@Z
    long OnGripperTapped(CEventArgs *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewPopupClosing@CTextBoxBase@@QEAAJXZ
    long OnHandwritingViewPopupClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CTextBoxBase@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRoutedPointerPressedEvenHandled@CTextBoxBase@@QEAAJ_N@Z
    long OnRoutedPointerPressedEvenHandled(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSIPHiding@CTextBoxBase@@QEAAJPEAUIInputPane@ViewManagement@UI@Windows@@PEAUIInputPaneVisibilityEventArgs@345@@Z
    long OnSIPHiding(::Windows::UI::ViewManagement::IInputPane *, ::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSIPShowing@CTextBoxBase@@QEAAJPEAUIInputPane@ViewManagement@UI@Windows@@PEAUIInputPaneVisibilityEventArgs@345@@Z
    long OnSIPShowing(::Windows::UI::ViewManagement::IInputPane *, ::Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMoved@CTextBoxBase@@QEAAJXZ
    long OnWindowMoved();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenHandwritingViewIfApplicable@CTextBoxBase@@QEAAJPEBVCPointerEventArgs@@@Z
    long OpenHandwritingViewIfApplicable(CPointerEventArgs const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paste@CTextBoxBase@@QEAAJXZ
    long Paste();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCandidateWindowBoundsChangedEvent@CTextBoxBase@@QEAAJAEAUXRECTF_WH@@@Z
    long RaiseCandidateWindowBoundsChangedEvent(XRECTF_WH &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCandidateWindowBoundsChangedEventForDIPs@CTextBoxBase@@QEAAJAEBURect@Foundation@Windows@@@Z
    long RaiseCandidateWindowBoundsChangedEventForDIPs(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCandidateWindowBoundsChangedEventForRoot@CTextBoxBase@@QEAAJPEBUtagRECT@@@Z
    long RaiseCandidateWindowBoundsChangedEventForRoot(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCopyEventAndCheckIfHandled@CTextBoxBase@@QEAA_NXZ
    bool RaiseCopyEventAndCheckIfHandled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCutEventAndCheckIfHandled@CTextBoxBase@@QEAA_NXZ
    bool RaiseCutEventAndCheckIfHandled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePasteEventAndCheckIfHandled@CTextBoxBase@@QEAA_NXZ
    bool RaisePasteEventAndCheckIfHandled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePendingBringLastVisibleRectIntoView@CTextBoxBase@@QEAAJI_N@Z
    long RaisePendingBringLastVisibleRectIntoView(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Redo@CTextBoxBase@@QEAAJXZ
    long Redo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCloseHandwritingViewPopup@CTextBoxBase@@QEAAJW4InkToTextDismissReason@InkingExperiences@@@Z
    long RequestCloseHandwritingViewPopup(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenToTextBox@CTextBoxBase@@QEAAJPEAUXPOINT@@_N@Z
    long ScreenToTextBox(XPOINT *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@CTextBoxBase@@QEAAJXZ
    long SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRichEditFocus@CTextBoxBase@@QEAAJXZ
    long SendRichEditFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGripperBeingManipulated@CTextBoxBase@@QEAAJ_N@Z
    long SetGripperBeingManipulated(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTextBoxBase@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldRaiseEvent@CTextBoxBase@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchFromHandwritingViewToSIP@CTextBoxBase@@QEAAJW4InkToTextDismissReason@InkingExperiences@@@Z
    long SwitchFromHandwritingViewToSIP(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBoxToClient@CTextBoxBase@@QEAAJPEAUXPOINT@@_N@Z
    long TextBoxToClient(XPOINT *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBoxToScreen@CTextBoxBase@@QEAAJPEAUXPOINT@@@Z
    long TextBoxToScreen(XPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetMaxLength@CTextBoxBase@@UEAAJPEAI@Z
    virtual long TxGetMaxLength(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPasswordChar@CTextBoxBase@@UEAAJPEAG@Z
    virtual long TxGetPasswordChar(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetPropertyBits@CTextBoxBase@@QEAAJIPEAI@Z
    long TxGetPropertyBits(unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxNotify@CTextBoxBase@@UEAAJIPEAX@Z
    virtual long TxNotify(unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Undo@CTextBoxBase@@QEAAJXZ
    long Undo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CTextBoxBase@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHandwritingSettings@CTextBoxBase@@QEAAJ_N@Z
    long UpdateHandwritingSettings(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRichEditContextMenu@CTextBoxBase@@QEAAJ_N@Z
    long UpdateRichEditContextMenu(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionFlyoutVisibility@CTextBoxBase@@QEAAJXZ
    long UpdateSelectionFlyoutVisibility();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptsRichText@CTextBoxBase@@MEBAIXZ
    virtual unsigned int AcceptsRichText() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPeerReferenceToView@CTextBoxBase@@IEAAJXZ
    long AddPeerReferenceToView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CTextBoxBase@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToHost@CTextBoxBase@@IEAAJPEAVCFrameworkElement@@@Z
    long AttachToHost(CFrameworkElement *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBoxBase@@IEAA@PEAVCCoreServices@@@Z
    CTextBoxBase(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoercePropertyValue@CTextBoxBase@@IEAAJPEBVCDependencyProperty@@AEAVxstring_ptr@@1@Z
    long CoercePropertyValue(CDependencyProperty const *, xstring_ptr &, xstring_ptr &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoercePropertyValue@CTextBoxBase@@IEAAJPEBVCDependencyProperty@@PEAHH@Z
    long CoercePropertyValue(CDependencyProperty const *, int *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CTextBoxBase@@IEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromHost@CTextBoxBase@@IEAAJXZ
    long DetachFromHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDocument@CTextBoxBase@@IEAAJXZ
    long EnsureDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRemoveFocus@CTextBoxBase@@IEAAJXZ
    long ForceRemoveFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCopyPropertyID@CTextBoxBase@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCopyPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCutPropertyID@CTextBoxBase@@MEBA?AW4KnownEventIndex@@XZ
    virtual int GetCutPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandwritingViewPropertyID@CTextBoxBase@@MEBA?AW4KnownPropertyIndex@@XZ
    virtual int GetHandwritingViewPropertyID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColorNoRef@CTextBoxBase@@IEAAPEAVCSolidColorBrush@@XZ
    CSolidColorBrush * GetSelectionHighlightColorNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextCompositionEventPropertyID@CTextBoxBase@@MEBA?AW4KnownEventIndex@@W4TextCompositionStage@1@@Z
    virtual int GetTextCompositionEventPropertyID(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextServicesBuffer@CTextBoxBase@@IEAAJPEAVxstring_ptr@@@Z
    long GetTextServicesBuffer(xstring_ptr *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTextBoxBase@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeView@CTextBoxBase@@IEAAJXZ
    long InitializeView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPrivate@CTextBoxBase@@IEBA_NXZ
    bool IsInputPrivate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPositiveInteger@CTextBoxBase@@KA_NAEBVCValue@@@Z
    static bool IsPositiveInteger(CValue const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWrapWholeWords@CTextBoxBase@@KA_NAEBVCValue@@@Z
    static bool IsWrapWholeWords(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CTextBoxBase@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CTextBoxBase@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAcceptsReturnChanged@CTextBoxBase@@MEAAJXZ
    virtual long OnAcceptsReturnChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBidiOptionsChanged@CTextBoxBase@@IEAAJXZ
    long OnBidiOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCharacterReceived@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnCharacterReceived(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDesiredCandidateWindowAlignmentChanged@CTextBoxBase@@IEAAJW4CandidateWindowAlignment@DirectUI@@@Z
    long OnDesiredCandidateWindowAlignmentChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewClosed@CTextBoxBase@@MEAAJXZ
    virtual long OnHandwritingViewClosed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnInheritedPropertyChanged(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputScopeChanged@CTextBoxBase@@IEAAJPEAVCInputScope@@@Z
    long OnInputScopeChanged(CInputScope *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnIsEnabledChanged(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsReadOnlyChanged@CTextBoxBase@@IEAAJXZ
    long OnIsReadOnlyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSpellCheckEnabledChanged@CTextBoxBase@@IEAAJAEA_N@Z
    long OnIsSpellCheckEnabledChanged(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTextPredictionEnabledChanged@CTextBoxBase@@IEAAJAEA_N@Z
    long OnIsTextPredictionEnabledChanged(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnLostFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaxLengthChanged@CTextBoxBase@@IEAAJXZ
    long OnMaxLengthChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPasswordRevealedChanged@CTextBoxBase@@IEAAJI@Z
    long OnPasswordRevealedChanged(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerCaptureLost(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerEntered(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CTextBoxBase@@MEAAJXZ
    virtual long OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionHighlightColorWhenNotFocusedChanged@CTextBoxBase@@IEAAJXZ
    long OnSelectionHighlightColorWhenNotFocusedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CTextBoxBase@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextAlignmentChanged@CTextBoxBase@@IEAAJXZ
    long OnTextAlignmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTextWrappingChanged@CTextBoxBase@@MEAAJXZ
    virtual long OnTextWrappingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSelectionChangingEvent@CTextBoxBase@@IEAAJAEAJ0AEAE@Z
    long ProcessSelectionChangingEvent(long &, long &, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsRightToLeftChangedEvent@CTextBoxBase@@MEAAJPEAVCValue@@@Z
    virtual long RaiseIsRightToLeftChangedEvent(CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDocumentIfNotFocused@CTextBoxBase@@IEAAXXZ
    void ReleaseDocumentIfNotFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePeerReferenceToView@CTextBoxBase@@IEAAJXZ
    long RemovePeerReferenceToView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLinguisticAlternativeState@CTextBoxBase@@IEAAXXZ
    void ResetLinguisticAlternativeState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmbeddedHandwritingViewVisibleSetting@CTextBoxBase@@IEAAJ_N@Z
    long SetEmbeddedHandwritingViewVisibleSetting(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguageOption@CTextBoxBase@@IEAAJII@Z
    long SetLanguageOption(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextServicesBuffer@CTextBoxBase@@MEAAJAEBVxstring_ptr@@@Z
    virtual long SetTextServicesBuffer(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateHandwritingView@CTextBoxBase@@IEAA_NXZ
    bool ShouldCreateHandwritingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrivateInputScope@CTextBoxBase@@IEAAJXZ
    long UpdatePrivateInputScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextForCompositionStartedEvent@CTextBoxBase@@MEAAJXZ
    virtual long UpdateTextForCompositionStartedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@CTextBoxBase@@MEAAJXZ
    virtual long UpdateVisualState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextBoxBase@@MEAA@XZ
    virtual ~CTextBoxBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSpellingSuggestions@CTextBoxBase@@AEAAJAEBU_getcontextmenuexex@@AEAPEAVCMenuFlyoutItemBaseCollection@@@Z
    long AddSpellingSuggestions(_getcontextmenuexex const &, CMenuFlyoutItemBaseCollection * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupHandwritingView@CTextBoxBase@@AEAAJXZ
    long CleanupHandwritingView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandwritingViewPopup@CTextBoxBase@@AEAAJXZ
    long CloseHandwritingViewPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProofingMenuItem@CTextBoxBase@@AEAAJP6AJPEAVCDependencyObject@@PEAVCEventArgs@@@ZAEBVxstring_ptr@@AEAPEAVCMenuFlyoutItemBaseCollection@@@Z
    long CreateProofingMenuItem(long ( *)(CDependencyObject *, CEventArgs *), xstring_ptr const &, CMenuFlyoutItemBaseCollection * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSelectionHighlightColor@CTextBoxBase@@AEAAJXZ
    long CreateSelectionHighlightColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSelectionHighlightColorWhenNotFocused@CTextBoxBase@@AEAAJXZ
    long CreateSelectionHighlightColorWhenNotFocused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProofingMenu@CTextBoxBase@@AEAAJXZ
    long EnsureProofingMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextInputSettings@CTextBoxBase@@AEAAJXZ
    long EnsureTextInputSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowlessHost@CTextBoxBase@@AEAAJXZ
    long EnsureWindowlessHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusOnPointerReleased@CTextBoxBase@@AEAA_NPEAVCPointerEventArgs@@@Z
    bool FocusOnPointerReleased(CPointerEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceNotifyFocusEnterIfNeeded@CTextBoxBase@@AEAAJXZ
    long ForceNotifyFocusEnterIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutNoRef@CTextBoxBase@@AEBAPEAVCFlyoutBase@@XZ
    CFlyoutBase * GetSelectionFlyoutNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionLength@CTextBoxBase@@AEAAJAEAI@Z
    long GetSelectionLength(unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpellingInfoForCP@CTextBoxBase@@AEAAJAEAU_getcontextmenuexex@@@Z
    long GetSpellingInfoForCP(_getcontextmenuexex &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTextServiceManager@CTextBoxBase@@AEAAJXZ
    long InitializeTextServiceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTextServices@CTextBoxBase@@AEAAJXZ
    long InitializeTextServices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAutoGrowing@CTextBoxBase@@AEAAJAEA_N@Z
    long IsAutoGrowing(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrozen@CTextBoxBase@@AEAAJAEA_N@Z
    long IsFrozen(bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHandwritingView@CTextBoxBase@@AEBA_NXZ
    bool IsHandwritingView() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseHandwritingViewPopupAnimationCompleted@CTextBoxBase@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCloseHandwritingViewPopupAnimationCompleted(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentInputLanguageChanged@CTextBoxBase@@AEAAJPEAUICoreTextServicesManager@Core@Text@UI@Windows@@PEAUIInspectable@@@Z
    long OnCurrentInputLanguageChanged(::Windows::UI::Text::Core::ICoreTextServicesManager *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelayCloseHandwritingViewPopup@CTextBoxBase@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDelayCloseHandwritingViewPopup(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelayEnsureRectVisible@CTextBoxBase@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDelayEnsureRectVisible(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelayEnsureRectVisible@CTextBoxBase@@AEAAJXZ
    long OnDelayEnsureRectVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandwritingViewPopupClosed@CTextBoxBase@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnHandwritingViewPopupClosed(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowGrippersTimeout@CTextBoxBase@@AEAAJXZ
    long OnShowGrippersTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowGrippersTimeout@CTextBoxBase@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnShowGrippersTimeout(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackageMouseEventParams@CTextBoxBase@@AEBAJIPEAVCInputPointEventArgs@@W4VirtualKeyModifiers@DirectUI@@W4PointerDeviceType@4@PEAURE_MOUSEINPUT@@@Z
    long PackageMouseEventParams(unsigned int, CInputPointEventArgs *, int, int, RE_MOUSEINPUT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointerMessageToMouseMessage@CTextBoxBase@@AEAAIIPEAVCPointer@@@Z
    unsigned int PointerMessageToMouseMessage(unsigned int, CPointer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostAsyncEnsureRectVisibleCall@CTextBoxBase@@AEAAJXZ
    long PostAsyncEnsureRectVisibleCall();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueUpdateSelectionFlyoutVisibility@CTextBoxBase@@AEAAJXZ
    long QueueUpdateSelectionFlyoutVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendGripperHostTapMessage@CTextBoxBase@@AEAAJPEAVCPointerEventArgs@@H@Z
    long SendGripperHostTapMessage(CPointerEventArgs *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendKeyMessage@CTextBoxBase@@AEAAJIPEAVCEventArgs@@@Z
    long SendKeyMessage(unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMouseInput@CTextBoxBase@@AEAAJIPEAVCInputPointEventArgs@@@Z
    long SendMouseInput(unsigned int, CInputPointEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPointerMessage@CTextBoxBase@@AEAAJIPEAVCEventArgs@@@Z
    long SendPointerMessage(unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTextCompositionEvent@CTextBoxBase@@AEAAJW4TextCompositionStage@1@@Z
    long SendTextCompositionEvent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusFromPointer@CTextBoxBase@@AEAAJPEAVCPointerEventArgs@@AEA_N@Z
    long SetFocusFromPointer(CPointerEventArgs *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParagraphDirectionIfEmpty@CTextBoxBase@@AEAAJJ@Z
    long SetParagraphDirectionIfEmpty(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForceFocusedVisualState@CTextBoxBase@@AEAA_NXZ
    bool ShouldForceFocusedVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFowardMoveMessage@CTextBoxBase@@AEBA_NPEBVCPointerEventArgs@@@Z
    bool ShouldFowardMoveMessage(CPointerEventArgs const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldProcessKeyMessage@CTextBoxBase@@AEAA_NPEAVCEventArgs@@@Z
    bool ShouldProcessKeyMessage(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryApplyHandwritingConfig@CTextBoxBase@@AEAAJAEA_N@Z
    long TryApplyHandwritingConfig(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaretParagraphDirection@CTextBoxBase@@AEAAJXZ
    long UpdateCaretParagraphDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateKeyboardLCID@CTextBoxBase@@AEAAJK@Z
    long UpdateKeyboardLCID(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastSelectedTextElement@CTextBoxBase@@AEAAJXZ
    long UpdateLastSelectedTextElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProofingMenu@CTextBoxBase@@AEAAJXZ
    long UpdateProofingMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSIPSettings@CTextBoxBase@@AEAAJW4FocusState@DirectUI@@@Z
    long UpdateSIPSettings(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseMultiLineMode@CTextBoxBase@@AEBA_NXZ
    bool UseMultiLineMode() const;
};
