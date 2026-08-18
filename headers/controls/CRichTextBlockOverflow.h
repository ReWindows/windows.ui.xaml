#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 78 member(s).
class CRichTextBlockOverflow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@CRichTextBlockOverflow@@UEAAJUXRECTF_WH@@@Z
    virtual long ArrangeCore(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CRichTextBlockOverflow@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CRichTextBlockOverflow@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CRichTextBlockOverflow@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CRichTextBlockOverflow@@UEAAJPEAM@Z
    virtual long GetActualHeight(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CRichTextBlockOverflow@@UEAAJPEAM@Z
    virtual long GetActualWidth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@CRichTextBlockOverflow@@QEAAJPEAM@Z
    long GetBaselineOffset(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreak@CRichTextBlockOverflow@@UEBAPEAVTextBreak@RichTextServices@@XZ
    virtual WindissectOpaque * GetBreak() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEnd@CRichTextBlockOverflow@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentLength@CRichTextBlockOverflow@@QEBAIXZ
    unsigned int GetContentLength() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStart@CRichTextBlockOverflow@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStartPosition@CRichTextBlockOverflow@@QEBAIXZ
    unsigned int GetContentStartPosition() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextFlyout@CRichTextBlockOverflow@@UEBA?AV?$xref_ptr@VCFlyoutBase@@@@XZ
    virtual WindissectOpaque GetContextFlyout() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CRichTextBlockOverflow@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CRichTextBlockOverflow@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkAPChildrenCount@CRichTextBlockOverflow@@UEAAIXZ
    virtual unsigned int GetLinkAPChildrenCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNext@CRichTextBlockOverflow@@UEBAPEAUILinkedTextContainer@RichTextServices@@XZ
    virtual WindissectOpaque * GetNext() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CRichTextBlockOverflow@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrevious@CRichTextBlockOverflow@@UEBAPEAUILinkedTextContainer@RichTextServices@@XZ
    virtual WindissectOpaque * GetPrevious() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPositionFromPoint@CRichTextBlockOverflow@@QEAAJUXPOINTF@@PEAPEAVCTextPointerWrapper@@@Z
    long GetTextPositionFromPoint(XPOINTF, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRichTextBlockOverflow@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderContent@CRichTextBlockOverflow@@QEAAJPEAVIContentRenderer@@@Z
    long HWRenderContent(IContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOverflowContent@CRichTextBlockOverflow@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long HasOverflowContent(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLink@CRichTextBlockOverflow@@QEAAJPEAUXPOINTF@@PEAPEAVCInline@@@Z
    long HitTestLink(XPOINTF *, CInline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAllOverflowContentMeasure@CRichTextBlockOverflow@@SAXPEAV1@@Z
    static void InvalidateAllOverflowContentMeasure(CRichTextBlockOverflow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBreakValid@CRichTextBlockOverflow@@UEBAIXZ
    virtual unsigned int IsBreakValid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CRichTextBlockOverflow@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CRichTextBlockOverflow@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaster@CRichTextBlockOverflow@@UEBAIXZ
    virtual unsigned int IsMaster() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CRichTextBlockOverflow@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CRichTextBlockOverflow@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextLinkDetached@CRichTextBlockOverflow@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int NextLinkDetached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildDesiredSizeChanged@CRichTextBlockOverflow@@UEAAXPEAVCUIElement@@@Z
    virtual void OnChildDesiredSizeChanged(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnLostFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@CRichTextBlockOverflow@@QEAAJIIII@Z
    long OnSelectionChanged(unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CRichTextBlockOverflow@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousBreakUpdated@CRichTextBlockOverflow@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousBreakUpdated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousLinkAttached@CRichTextBlockOverflow@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousLinkAttached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousLinkDetached@CRichTextBlockOverflow@@UEAA?AW4EnumImpl@Result@RichTextServices@@PEAUILinkedTextContainer@4@@Z
    virtual int PreviousLinkDetached(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllOverflowMasters@CRichTextBlockOverflow@@SAXPEAV1@@Z
    static void ResetAllOverflowMasters(CRichTextBlockOverflow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CRichTextBlockOverflow@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CRichTextBlockOverflow@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRichTextBlockOverflow@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CRichTextBlockOverflow@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRichTextBlockOverflow@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CRichTextBlockOverflow@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalArrangeSizeMaximized@CRichTextBlockOverflow@@MEAA_NXZ
    virtual bool IsFinalArrangeSizeMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRichTextBlockOverflow@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PE Export
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CRichTextBlockOverflow@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPostChildrenEdgesVirtual@CRichTextBlockOverflow@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPostChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CRichTextBlockOverflow@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CRichTextBlockOverflow@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRichTextBlockOverflow@@AEAA@PEAVCCoreServices@@@Z
    CRichTextBlockOverflow(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@CRichTextBlockOverflow@@AEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DPreChildrenRenderVirtual@CRichTextBlockOverflow@@AEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@@Z
    long D2DPreChildrenRenderVirtual(SharedRenderParams const &, D2DRenderParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementForFocusRect@CRichTextBlockOverflow@@AEAAPEAVCTextElement@@XZ
    CTextElement * GetTextElementForFocusRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContent@CRichTextBlockOverflow@@AEAAXXZ
    void InvalidateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContentArrange@CRichTextBlockOverflow@@AEAAXXZ
    void InvalidateContentArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerImpl@CRichTextBlockOverflow@@EEAAPEAVCAutomationPeer@@XZ
    virtual CAutomationPeer * OnCreateAutomationPeerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsTextTrimmedChangedEvent@CRichTextBlockOverflow@@AEAAXXZ
    void RaiseIsTextTrimmedChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderHighlighterForegroundCallback@CRichTextBlockOverflow@@AEAAJPEAVCSolidColorBrush@@IPEAUXRECTF_WH@@@Z
    long RenderHighlighterForegroundCallback(CSolidColorBrush *, unsigned int, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBreak@CRichTextBlockOverflow@@AEAAJPEAVRichTextBlockBreak@@@Z
    long SetBreak(RichTextBlockBreak *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupLinkedBlockLayout@CRichTextBlockOverflow@@AEAAJXZ
    long SetupLinkedBlockLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTextTrimmed@CRichTextBlockOverflow@@AEAAJXZ
    long UpdateIsTextTrimmed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionAndHighlightRegions@CRichTextBlockOverflow@@AEAAJPEA_N@Z
    long UpdateSelectionAndHighlightRegions(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRichTextBlockOverflow@@EEAA@XZ
    virtual ~CRichTextBlockOverflow();
};
