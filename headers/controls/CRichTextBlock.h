#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 122 member(s).
class CRichTextBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@CRichTextBlock@@UEAAJUXRECTF_WH@@@Z
    virtual long ArrangeCore(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CRichTextBlock@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CRichTextBlock@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectedText@CRichTextBlock@@QEAAJXZ
    long CopySelectedText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CRichTextBlock@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuOpeningEventSynchronously@CRichTextBlock@@QEAAJAEA_NAEBUPoint@Foundation@Windows@@@Z
    long FireContextMenuOpeningEventSynchronously(bool &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CRichTextBlock@@UEAAJPEAM@Z
    virtual long GetActualHeight(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CRichTextBlock@@UEAAJPEAM@Z
    virtual long GetActualWidth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@CRichTextBlock@@QEAAJPEAM@Z
    long GetBaselineOffset(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreak@CRichTextBlock@@UEBAPEAVTextBreak@RichTextServices@@XZ
    virtual WindissectOpaque * GetBreak() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEnd@CRichTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLength@CRichTextBlock@@QEBAIXZ
    unsigned int GetContentLength() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStart@CRichTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableChildren@CRichTextBlock@@QEAAJPEAPEAVCDOCollection@@@Z
    long GetFocusableChildren(CDOCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CRichTextBlock@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CRichTextBlock@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkAPChildrenCount@CRichTextBlock@@UEAAIXZ
    virtual unsigned int GetLinkAPChildrenCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkAPChildrenCountHelper@CRichTextBlock@@SAIPEAVCInlineCollection@@@Z
    static unsigned int GetLinkAPChildrenCountHelper(CInlineCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CRichTextBlock@@UEBAPEAUILinkedTextContainer@RichTextServices@@XZ
    virtual WindissectOpaque * GetNext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CRichTextBlock@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@CRichTextBlock@@SAJPEAVCFrameworkElement@@PEAVxstring_ptr@@@Z
    static long GetPlainText(CFrameworkElement *, xstring_ptr *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevious@CRichTextBlock@@UEBAPEAUILinkedTextContainer@RichTextServices@@XZ
    virtual WindissectOpaque * GetPrevious() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedText@CRichTextBlock@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetSelectedText(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionEnd@CRichTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetSelectionEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutNoRef@CRichTextBlock@@QEBAPEAVCFlyoutBase@@XZ
    CFlyoutBase * GetSelectionFlyoutNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStart@CRichTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetSelectionStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContainer@CRichTextBlock@@QEAAPEAUITextContainer@@XZ
    ITextContainer * GetTextContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementBoundRect@CRichTextBlock@@SAJPEAVCTextElement@@PEAUITextView@@PEAVCUIElement@@PEAUXRECTF_WH@@_N@Z
    static long GetTextElementBoundRect(CTextElement *, ITextView *, CUIElement *, XRECTF_WH *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPositionFromPoint@CRichTextBlock@@QEAAJUXPOINTF@@PEAPEAVCTextPointerWrapper@@@Z
    long GetTextPositionFromPoint(XPOINTF, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextView@CRichTextBlock@@QEBAPEAUITextView@@XZ
    ITextView * GetTextView() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRichTextBlock@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CRichTextBlock@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderContent@CRichTextBlock@@QEAAJPEAVIContentRenderer@@@Z
    long HWRenderContent(IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderFocusRects@CRichTextBlock@@SAJPEAVIContentRenderer@@PEAVCTextElement@@PEAUITextView@@@Z
    static long HWRenderFocusRects(IContentRenderer *, CTextElement *, ITextView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOverflowContent@CRichTextBlock@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long HasOverflowContent(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLink@CRichTextBlock@@SAJPEAUITextContainer@@PEAVCUIElement@@PEAUXPOINTF@@PEAUITextView@@PEAPEAVCInline@@@Z
    static long HitTestLink(ITextContainer *, CUIElement *, XPOINTF *, ITextView *, CInline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLink@CRichTextBlock@@QEAAJPEAUXPOINTF@@PEAPEAVCInline@@@Z
    long HitTestLink(XPOINTF *, CInline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContent@CRichTextBlock@@QEAAXXZ
    void InvalidateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContentMeasure@CRichTextBlock@@QEAAXXZ
    void InvalidateContentMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRender@CRichTextBlock@@QEAAXXZ
    void InvalidateRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBreakValid@CRichTextBlock@@UEBAIXZ
    virtual unsigned int IsBreakValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CRichTextBlock@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CRichTextBlock@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsMaster@CRichTextBlock@@UEBAIXZ
    virtual unsigned int IsMaster() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionEnabled@CRichTextBlock@@QEBA_NXZ
    bool IsSelectionEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CRichTextBlock@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderFocusRects@CRichTextBlock@@SAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@PEAVCTextElement@@PEAUITextView@@@Z
    static long NWRenderFocusRects(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &, CTextElement *, ITextView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextLinkDetached@CRichTextBlock@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int NextLinkDetached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildDesiredSizeChanged@CRichTextBlock@@UEAAXPEAVCUIElement@@@Z
    virtual void OnChildDesiredSizeChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CRichTextBlock@@QEAAJPEBVCDependencyProperty@@@Z
    long OnContentChanged(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnLostFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerCaptureLost(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CRichTextBlock@@QEAAJIIII@Z
    long OnSelectionChanged(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionVisibilityChanged@CRichTextBlock@@QEAAJII@Z
    long OnSelectionVisibilityChanged(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CRichTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousBreakUpdated@CRichTextBlock@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousBreakUpdated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousLinkAttached@CRichTextBlock@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousLinkAttached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousLinkDetached@CRichTextBlock@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousLinkDetached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CRichTextBlock@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateMeasure@CRichTextBlock@@UEAAXXZ
    virtual void RecursiveInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSelectionEdgeStores@CRichTextBlock@@QEAAJIAEBUSharedRenderParams@@AEBUNWRenderParams@@IPEAUXRECTF_WH@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@_N@Z
    long RenderSelectionEdgeStores(unsigned int, SharedRenderParams const &, NWRenderParams const &, unsigned int, XRECTF_WH *, WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CRichTextBlock@@QEAAJPEAVCTextPointerWrapper@@0@Z
    long Select(CTextPointerWrapper *, CTextPointerWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@CRichTextBlock@@QEAAJXZ
    long SelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRichTextBlock@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CRichTextBlock@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CRichTextBlock@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRichTextBlock@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CRichTextBlock@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRichTextBlock@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRichTextBlock@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalArrangeSizeMaximized@CRichTextBlock@@MEAA_NXZ
    virtual bool IsFinalArrangeSizeMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CRichTextBlock@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRichTextBlock@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PE Export
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CRichTextBlock@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPostChildrenEdgesVirtual@CRichTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPostChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CRichTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationHighContrastAdjustmentChanged@CRichTextBlock@@MEAAJXZ
    virtual long NotifyApplicationHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CRichTextBlock@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CRichTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichTextBlock@@AEAA@PEAVCCoreServices@@@Z
    CRichTextBlock(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlocks@CRichTextBlock@@AEAAJXZ
    long CreateBlocks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSelectionHighlightColor@CRichTextBlock@@AEAAJXZ
    long CreateSelectionHighlightColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextHighlighters@CRichTextBlock@@AEAAJXZ
    long CreateTextHighlighters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextSelectionManager@CRichTextBlock@@AEAAJXZ
    long CreateTextSelectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@CRichTextBlock@@AEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DPreChildrenRenderVirtual@CRichTextBlock@@AEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@@Z
    long D2DPreChildrenRenderVirtual(SharedRenderParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackPlateDependencies@CRichTextBlock@@AEAAJXZ
    long EnsureBackPlateDependencies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBlockLayout@CRichTextBlock@@AEAAJXZ
    long EnsureBlockLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFontContext@CRichTextBlock@@AEAAJXZ
    long EnsureFontContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableChildrenHelper@CRichTextBlock@@CAJPEAVCDOCollection@@PEAVCTextElementCollection@@@Z
    static long GetFocusableChildrenHelper(CDOCollection *, CTextElementCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementForFocusRect@CRichTextBlock@@AEAAPEAVCTextElement@@XZ
    CTextElement * GetTextElementForFocusRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContentArrange@CRichTextBlock@@AEAAXXZ
    void InvalidateContentArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateFontSize@CRichTextBlock@@EEAAJXZ
    virtual long InvalidateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateNextLink@CRichTextBlock@@AEAAJXZ
    long InvalidateNextLink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentActive@CRichTextBlock@@AEBA_NXZ
    bool IsHighContrastAdjustmentActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentEnabled@CRichTextBlock@@AEBA_NXZ
    bool IsHighContrastAdjustmentEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerImpl@CRichTextBlock@@EEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastAdjustmentChanged@CRichTextBlock@@AEAAJW4ElementHighContrastAdjustment@DirectUI@@@Z
    long OnHighContrastAdjustmentChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionEnabledChanged@CRichTextBlock@@AEAAJ_N@Z
    long OnSelectionEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsTextTrimmedChangedEvent@CRichTextBlock@@AEAAXXZ
    void RaiseIsTextTrimmedChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEvent@CRichTextBlock@@AEAAJXZ
    long RaiseSelectionChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderHighlighterForegroundCallback@CRichTextBlock@@AEAAJPEAVCSolidColorBrush@@IPEAUXRECTF_WH@@@Z
    long RenderHighlighterForegroundCallback(CSolidColorBrush *, unsigned int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveNextLink@CRichTextBlock@@AEAAJXZ
    long ResolveNextLink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBreak@CRichTextBlock@@AEAAJPEAVRichTextBlockBreak@@@Z
    long SetBreak(RichTextBlockBreak *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackPlateForegroundOverride@CRichTextBlock@@AEAAXXZ
    void UpdateBackPlateForegroundOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHighContrastAdjustments@CRichTextBlock@@AEAAJXZ
    long UpdateHighContrastAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTextTrimmed@CRichTextBlock@@AEAAJXZ
    long UpdateIsTextTrimmed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionAndHighlightRegions@CRichTextBlock@@AEAAJPEA_N@Z
    long UpdateSelectionAndHighlightRegions(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionHighlightColor@CRichTextBlock@@AEAAXXZ
    void UpdateSelectionHighlightColor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichTextBlock@@EEAA@XZ
    virtual ~CRichTextBlock();
};
