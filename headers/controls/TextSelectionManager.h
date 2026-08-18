#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 88 member(s).
class TextSelectionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSelectionHighlightEdges@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAUITextView@@PEAVCMILMatrix@@MPEAVCLayer@@IIPEAUXRECTF_WH@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@_N@Z
    long AddSelectionHighlightEdges(CUIElement *, ITextView *, CMILMatrix *, float, CLayer *, unsigned int, unsigned int, XRECTF_WH *, WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectionToClipboard@TextSelectionManager@@QEAAJXZ
    long CopySelectionToClipboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TextSelectionManager@@SAJPEAVCUIElement@@PEAUITextContainer@@PEAPEAV1@@Z
    static long Create(CUIElement *, ITextContainer *, TextSelectionManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRender@TextSelectionManager@@QEAAJAEBUD2DRenderParams@@PEAUITextView@@IIPEAUXRECTF_WH@@@Z
    long D2DRender(D2DRenderParams const &, ITextView *, unsigned int, unsigned int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@TextSelectionManager@@SAJPEAPEAV1@@Z
    static long Destroy(TextSelectionManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllFlyouts@TextSelectionManager@@QEAAJXZ
    long DismissAllFlyouts();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackPlateSelectionHighlightRects@TextSelectionManager@@QEAAJPEAUITextView@@PEAIPEAPEAUXRECTF_WH@@@Z
    long GetBackPlateSelectionHighlightRects(ITextView *, unsigned int *, XRECTF_WH * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedText@TextSelectionManager@@QEAAJPEAVxstring_ptr@@@Z
    long GetSelectedText(xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionBoundingRect@TextSelectionManager@@QEAAJPEAURect@Foundation@Windows@@@Z
    long GetSelectionBoundingRect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightRects@TextSelectionManager@@QEAAJPEAUITextView@@PEAIPEAPEAUXRECTF_WH@@@Z
    long GetSelectionHighlightRects(ITextView *, unsigned int *, XRECTF_WH * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRender@TextSelectionManager@@QEAAJPEAVIContentRenderer@@PEAUITextView@@IIPEAUXRECTF_WH@@_N@Z
    long HWRender(IContentRenderer *, ITextView *, unsigned int, unsigned int, XRECTF_WH *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionVisible@TextSelectionManager@@QEBAIXZ
    unsigned int IsSelectionVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyGripperPositionChanged@TextSelectionManager@@QEAAJPEAVCTextSelectionGripper@@UXPOINTF@@H@Z
    long NotifyGripperPositionChanged(CTextSelectionGripper *, XPOINTF, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyGripperPressed@TextSelectionManager@@QEAAJPEAVCTextSelectionGripper@@@Z
    long NotifyGripperPressed(CTextSelectionGripper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPenPressedWithBarrelButton@TextSelectionManager@@QEAAJPEAVCTextSelectionGripper@@PEAVCEventArgs@@@Z
    long NotifyPenPressedWithBarrelButton(CTextSelectionGripper *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@TextSelectionManager@@QEAAJXZ
    long OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnDoubleTapped(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnGotFocus(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnHolding(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnKeyDown(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnKeyUp(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnLostFocus(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnPointerMoved(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnPointerPressed(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnPointerReleased(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnRightTapped(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@TextSelectionManager@@UEAAXXZ
    virtual void OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@TextSelectionManager@@QEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnTapped(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGrippers@TextSelectionManager@@QEAAJXZ
    long ReleaseGrippers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@TextSelectionManager@@QEAAJAEBVCPlainTextPosition@@0@Z
    long Select(CPlainTextPosition const &, CPlainTextPosition const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@TextSelectionManager@@QEAAJXZ
    long SelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveGripper@TextSelectionManager@@QEAAJPEAVCTextSelectionGripper@@@Z
    long SetActiveGripper(CTextSelectionGripper *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionHighlightColor@TextSelectionManager@@QEAAJI@Z
    long SetSelectionHighlightColor(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContextMenu@TextSelectionManager@@QEAAJUXPOINTF@@II@Z
    long ShowContextMenu(XPOINTF, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextViewChanged@TextSelectionManager@@QEAAJPEAUITextView@@0@Z
    long TextViewChanged(ITextView *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperParents@TextSelectionManager@@QEAAJXZ
    long UpdateGripperParents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperPositions@TextSelectionManager@@QEAAJXZ
    long UpdateGripperPositions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionFlyoutVisibility@TextSelectionManager@@QEAAJXZ
    long UpdateSelectionFlyoutVisibility();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePositionsInSameWord@TextSelectionManager@@AEAA_NII@Z
    bool ArePositionsInSameWord(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePositionsInSameWordBoundary@TextSelectionManager@@AEBA_NIIP81@EBAJIPEAI@Z@Z
    bool ArePositionsInSameWordBoundary(unsigned int, unsigned int, long ( ::TextSelectionManager::*)(unsigned int, unsigned int *) const) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaretOnKeyDown@TextSelectionManager@@AEAAXPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    void CaretOnKeyDown(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelection@TextSelectionManager@@AEAAJAEBU?$SelectionRange@IX@TouchTextSelection@@W4GripperSide@3@I@Z
    long ChangeSelection(WindissectOpaque const &, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@TextSelectionManager@@AEAAJAEBVCTextPosition@@@Z
    long ClearSelection(CTextPosition const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGripper@TextSelectionManager@@AEAAJPEAPEAVCTextSelectionGripper@@PEAPEAVCPopup@@@Z
    long CreateGripper(CTextSelectionGripper * *, CPopup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCaret@TextSelectionManager@@AEAAXXZ
    void EnsureCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGrippers@TextSelectionManager@@AEAAJXZ
    long EnsureGrippers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendSelectionRange@TextSelectionManager@@AEAAJW4SnappingMode@TouchTextSelection@@W4GripperSide@3@IAEBU?$SelectionRange@IX@3@PEAU53@@Z
    long ExtendSelectionRange(int, int, unsigned int, WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoundaryOfWordInPosition@TextSelectionManager@@AEBAJIW4FindBoundaryType@@PEAI@Z
    long GetBoundaryOfWordInPosition(unsigned int, int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndOfWordInPosition@TextSelectionManager@@AEBAJIPEAI@Z
    long GetEndOfWordInPosition(unsigned int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGripperCoordinatesForTextOffset@TextSelectionManager@@AEAAJIIIW4TextGravity@@PEAUXPOINTF@@1PEAM@Z
    long GetGripperCoordinatesForTextOffset(unsigned int, unsigned int, unsigned int, int, XPOINTF *, XPOINTF *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionCoordinates@TextSelectionManager@@AEAAJIIPEAUXPOINTF@@0PEAM@Z
    long GetSelectionCoordinates(unsigned int, unsigned int, XPOINTF *, XPOINTF *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutNoRef@TextSelectionManager@@AEBAPEAVCFlyoutBase@@XZ
    CFlyoutBase * GetSelectionFlyoutNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColor@TextSelectionManager@@AEAAJIPEAPEAVCSolidColorBrush@@@Z
    long GetSelectionHighlightColor(unsigned int, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightRectsInternal@TextSelectionManager@@AEAAJPEAUITextView@@PEAIPEAPEAUXRECTF_WH@@PEAUIJupiterTextSelection@@@Z
    long GetSelectionHighlightRectsInternal(ITextView *, unsigned int *, XRECTF_WH * *, IJupiterTextSelection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStartEndOffsets@TextSelectionManager@@AEAAJPEAI0@Z
    long GetSelectionStartEndOffsets(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartOfWordInPosition@TextSelectionManager@@AEBAJIPEAI@Z
    long GetStartOfWordInPosition(unsigned int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemColorWindowBrush@TextSelectionManager@@AEAAJPEAPEAVCSolidColorBrush@@@Z
    long GetSystemColorWindowBrush(CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPosition@TextSelectionManager@@AEAAJPEAVCInputPointEventArgs@@PEAVCUIElement@@PEAUITextView@@PEAVCTextPosition@@PEAI@Z
    long GetTextPosition(CInputPointEventArgs *, CUIElement *, ITextView *, CTextPosition *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextViewForRichTextBlock@TextSelectionManager@@AEAAJIW4TextGravity@@PEAPEAUITextView@@PEAPEAVCUIElement@@@Z
    long GetTextViewForRichTextBlock(unsigned int, int, ITextView * *, CUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideGrippers@TextSelectionManager@@AEAAJI@Z
    long HideGrippers(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffsetBetweenSelection@TextSelectionManager@@AEAAJVCTextPosition@@PEAI@Z
    long IsOffsetBetweenSelection(CTextPosition, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointOverElement@TextSelectionManager@@AEAAJPEAVCUIElement@@PEBUXPOINTF@@PEAU3@PEAIPEAM@Z
    long IsPointOverElement(CUIElement *, XPOINTF const *, XPOINTF *, unsigned int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPointOverLinkedView@TextSelectionManager@@AEAAJPEAVCUIElement@@PEAUITextView@@PEBUXPOINTF@@PEAU4@PEAPEAU3@PEAPEAV2@@Z
    long IsPointOverLinkedView(CUIElement *, ITextView *, XPOINTF const *, XPOINTF *, ITextView * *, CUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContextMenuOpening@TextSelectionManager@@AEAAJUXPOINTF@@I@Z
    long NotifyContextMenuOpening(XPOINTF, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySelectionChanged@TextSelectionManager@@AEAAJIII@Z
    long NotifySelectionChanged(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySelectionChanged@TextSelectionManager@@AEAAJIIII@Z
    long NotifySelectionChanged(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySelectionVisibilityChanged@TextSelectionManager@@AEAAJXZ
    long NotifySelectionVisibilityChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaretTimeout@TextSelectionManager@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCaretTimeout(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionPointerMove@TextSelectionManager@@AEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnSelectionPointerMove(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionPointerPressed@TextSelectionManager@@AEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnSelectionPointerPressed(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionPointerReleased@TextSelectionManager@@AEAAJPEAVCUIElement@@PEAVCEventArgs@@PEAUITextView@@@Z
    long OnSelectionPointerReleased(CUIElement *, CEventArgs *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueUpdateSelectionFlyoutVisibility@TextSelectionManager@@AEAAJXZ
    long QueueUpdateSelectionFlyoutVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCaret@TextSelectionManager@@AEAAXXZ
    void RemoveCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCaretBlink@TextSelectionManager@@AEAAXXZ
    void ResetCaretBlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAllText@TextSelectionManager@@AEAAJPEAUIJupiterTextSelection@@_N@Z
    long SelectAllText(IJupiterTextSelection *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectionToWord@TextSelectionManager@@AEAAJAEBVCTextPosition@@@Z
    long SetSelectionToWord(CTextPosition const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCaretBlinkAnimation@TextSelectionManager@@AEAAXXZ
    void SetupCaretBlinkAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForceFocusedVisualState@TextSelectionManager@@AEAA_NXZ
    bool ShouldForceFocusedVisualState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCaretElement@TextSelectionManager@@AEAAXXZ
    void ShowCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowGrippers@TextSelectionManager@@AEAAJI@Z
    long ShowGrippers(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextSelectionManager@@AEAA@XZ
    TextSelectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaretElement@TextSelectionManager@@AEAAXXZ
    void UpdateCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEndGripperPosition@TextSelectionManager@@AEAAJXZ
    long UpdateEndGripperPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGripperPosition@TextSelectionManager@@AEAAJI@Z
    long UpdateGripperPosition(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastSelectedTextElement@TextSelectionManager@@AEAAJXZ
    long UpdateLastSelectedTextElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStartGripperPosition@TextSelectionManager@@AEAAJXZ
    long UpdateStartGripperPosition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextSelectionManager@@AEAA@XZ
    ~TextSelectionManager();
};
