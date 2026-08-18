#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 129 member(s).
class CTextBlock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddText@CTextBlock@@QEAAJAEBVxstring_ptr@@W4RunFlags@@@Z
    long AddText(xstring_ptr const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeCore@CTextBlock@@UEAAJUXRECTF_WH@@@Z
    virtual long ArrangeCore(XRECTF_WH);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CTextBlock@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CTextBlock@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBaseRealization@CTextBlock@@QEAAXXZ
    void ClearBaseRealization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPCRenderData@CTextBlock@@UEAAXXZ
    virtual void ClearPCRenderData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CTextBlock@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySelectedText@CTextBlock@@QEAAJXZ
    long CopySelectedText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextBlock@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CTextBlock@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireContextMenuOpeningEventSynchronously@CTextBlock@@QEAAJAEA_NAEBUPoint@Foundation@Windows@@@Z
    long FireContextMenuOpeningEventSynchronously(bool &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CTextBlock@@UEAAJPEAM@Z
    virtual long GetActualHeight(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CTextBlock@@UEAAJPEAM@Z
    virtual long GetActualWidth(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlphaMask@CTextBlock@@QEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long GetAlphaMask(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaselineOffset@CTextBlock@@QEAAJPEAM@Z
    long GetBaselineOffset(float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentEnd@CTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRenderTransform@CTextBlock@@QEAAJPEAVCMILMatrix@@@Z
    long GetContentRenderTransform(CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentStart@CTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetContentStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWriteFontAndScriptServices@CTextBlock@@QEAAJPEAPEAVDWriteFontAndScriptServices@@@Z
    long GetDWriteFontAndScriptServices(DWriteFontAndScriptServices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWriteTextLayout@CTextBlock@@QEBAJPEAPEAUIDWriteTextLayout@@@Z
    long GetDWriteTextLayout(IDWriteTextLayout * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowDirection@CTextBlock@@QEAAJPEAW4FlowDirection@DirectUI@@@Z
    long GetFlowDirection(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableChildren@CTextBlock@@QEAAJPEAPEAVCDOCollection@@@Z
    long GetFocusableChildren(CDOCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndependentlyAnimatedBrushes@CTextBlock@@UEAAXPEAPEAVCSolidColorBrush@@0@Z
    virtual void GetIndependentlyAnimatedBrushes(CSolidColorBrush * *, CSolidColorBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CTextBlock@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CTextBlock@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedText@CTextBlock@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetSelectedText(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionEnd@CTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetSelectionEnd(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionFlyoutNoRef@CTextBlock@@QEBAPEAVCFlyoutBase@@XZ
    CFlyoutBase * GetSelectionFlyoutNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionHighlightColor@CTextBlock@@QEBA?AV?$xref_ptr@VCSolidColorBrush@@@@XZ
    WindissectOpaque GetSelectionHighlightColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionStart@CTextBlock@@QEAAJPEAPEAVCTextPointerWrapper@@@Z
    long GetSelectionStart(CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextContainer@CTextBlock@@QEBAPEAUITextContainer@@XZ
    ITextContainer * GetTextContainer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBlock@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUseLayoutRounding@CTextBlock@@UEBA_NXZ
    virtual bool GetUseLayoutRounding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CTextBlock@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWRenderContent@CTextBlock@@QEAAJPEAVIContentRenderer@@@Z
    long HWRenderContent(IContentRenderer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidFontName@CTextBlock@@QEAAJPEAH@Z
    long HasValidFontName(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLink@CTextBlock@@QEAAJPEAUXPOINTF@@PEAPEAVCInline@@@Z
    long HitTestLink(XPOINTF *, CInline * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContent@CTextBlock@@QEAAXXZ
    void InvalidateContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContentMeasure@CTextBlock@@QEAAXXZ
    void InvalidateContentMeasure();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CTextBlock@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocused@CTextBlock@@UEAAIXZ
    virtual unsigned int IsFocused();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionEnabled@CTextBlock@@QEBA_NXZ
    bool IsSelectionEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CTextBlock@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedNumberSubsitution@CTextBlock@@QEAAJPEAH@Z
    long NeedNumberSubsitution(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderContent@CTextBlock@@QEAAJW4HWRenderVisibility@@@Z
    long NotifyRenderContent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@CTextBlock@@QEAAJPEBVCDependencyProperty@@@Z
    long OnContentChanged(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCaptureLost@CTextBlock@@UEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerCaptureLost(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CTextBlock@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateMeasure@CTextBlock@@UEAAXXZ
    virtual void RecursiveInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseTextFormatter@CTextBlock@@QEAAXPEAVTextFormatter@RichTextServices@@@Z
    void ReleaseTextFormatter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderBackplateIfRequired@CTextBlock@@QEAAJ_NPEAVIContentRenderer@@PEBUSharedRenderParams@@PEBUNWRenderParams@@PEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    long RenderBackplateIfRequired(bool, IContentRenderer *, SharedRenderParams const *, NWRenderParams const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderSelectionEdgeStores@CTextBlock@@QEAAJIAEBUSharedRenderParams@@AEBUNWRenderParams@@IPEAUXRECTF_WH@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@_N@Z
    long RenderSelectionEdgeStores(unsigned int, SharedRenderParams const &, NWRenderParams const &, unsigned int, XRECTF_WH *, WindissectOpaque &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@CTextBlock@@QEAAJPEAVCTextPointerWrapper@@0@Z
    long Select(CTextPointerWrapper *, CTextPointerWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@CTextBlock@@QEAAJXZ
    long SelectAll();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTextBlock@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusState@CTextBlock@@UEAAJW4FocusState@DirectUI@@@Z
    virtual long UpdateFocusState(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CTextBlock@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CTextBlock@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightGlobalBounds@CTextBlock@@MEAAJPEAUXRECTF_RB@@I_N@Z
    virtual long GetTightGlobalBounds(XRECTF_RB *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTightInnerBounds@CTextBlock@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GetTightInnerBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextBlock@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextBlock@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinalArrangeSizeMaximized@CTextBlock@@MEAA_NXZ
    virtual bool IsFinalArrangeSizeMaximized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CTextBlock@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CTextBlock@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PE Export
    // Symbol: ?NWCanApplyOpacityWithoutLayer@CTextBlock@@MEAAIXZ
    virtual unsigned int NWCanApplyOpacityWithoutLayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPostChildrenEdgesVirtual@CTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPostChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationHighContrastAdjustmentChanged@CTextBlock@@MEAAJXZ
    virtual long NotifyApplicationHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CTextBlock@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoubleTapped@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnDoubleTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnGotFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolding@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnHolding(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnLostFocus(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerExited(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerMoved@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerMoved(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerReleased(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CTextBlock@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertySetImpl@CTextBlock@@MEAAJPEBVCDependencyProperty@@AEBVCValue@@1_N@Z
    virtual long OnPropertySetImpl(CDependencyProperty const *, CValue const &, CValue const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRightTapped@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnRightTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTapped@CTextBlock@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnTapped(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CTextBlock@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBlock@@AEAA@PEAVCCoreServices@@@Z
    CTextBlock(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureDWriteTextLayout@CTextBlock@@AEAAJUXSIZEF@@MM@Z
    long ConfigureDWriteTextLayout(XSIZEF, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInlines@CTextBlock@@AEAAJXZ
    long CreateInlines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSelectionHighlightColor@CTextBlock@@AEAAJXZ
    long CreateSelectionHighlightColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextHighlighters@CTextBlock@@AEAAJXZ
    long CreateTextHighlighters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureResources@CTextBlock@@AEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@@Z
    long D2DEnsureResources(D2DPrecomputeParams const &, CMILMatrix const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DPreChildrenRenderVirtual@CTextBlock@@AEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@@Z
    long D2DPreChildrenRenderVirtual(SharedRenderParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredCreateInlineCollection@CTextBlock@@AEAAJXZ
    long DeferredCreateInlineCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackPlateDependencies@CTextBlock@@AEAAJXZ
    long EnsureBackPlateDependencies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBlockLayout@CTextBlock@@AEAAJXZ
    long EnsureBlockLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFontContext@CTextBlock@@AEAAJXZ
    long EnsureFontContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextBlockView@CTextBlock@@AEAAXXZ
    void EnsureTextBlockView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextDrawingContext@CTextBlock@@AEAAJXZ
    long EnsureTextDrawingContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextSelectionManager@CTextBlock@@AEAAJXZ
    long EnsureTextSelectionManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentRenderingOffset@CTextBlock@@AEBA?AUXPOINTF@@W4FlowDirection@DirectUI@@@Z
    XPOINTF GetContentRenderingOffset(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWriteTextMetricsOffset@CTextBlock@@AEAAJPEAUXPOINTF@@@Z
    long GetDWriteTextMetricsOffset(XPOINTF *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusableChildrenHelper@CTextBlock@@CAJPEAVCDOCollection@@PEAVCTextElementCollection@@@Z
    static long GetFocusableChildrenHelper(CDOCollection *, CTextElementCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineHeight@CTextBlock@@AEAAJPEAM0@Z
    long GetLineHeight(float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineStackingOffset@CTextBlock@@AEAAJIPEAM@Z
    long GetLineStackingOffset(unsigned int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLinkAPChildrenCount@CTextBlock@@EEAAIXZ
    virtual unsigned int GetLinkAPChildrenCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextElementForFocusRect@CTextBlock@@AEAAPEAVCTextElement@@XZ
    CTextElement * GetTextElementForFocusRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CTextBlock@@EEAAJXZ
    virtual long InitInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateContentArrange@CTextBlock@@AEAAXXZ
    void InvalidateContentArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateFontSize@CTextBlock@@EEAAJXZ
    virtual long InvalidateFontSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentActive@CTextBlock@@AEBA_NXZ
    bool IsHighContrastAdjustmentActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentEnabled@CTextBlock@@AEBA_NXZ
    bool IsHighContrastAdjustmentEnabled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastAdjustmentChanged@CTextBlock@@AEAAJW4ElementHighContrastAdjustment@DirectUI@@@Z
    long OnHighContrastAdjustmentChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionEnabledChanged@CTextBlock@@AEAAJ_N@Z
    long OnSelectionEnabledChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseIsTextTrimmedChangedEvent@CTextBlock@@AEAAXXZ
    void RaiseIsTextTrimmedChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEvent@CTextBlock@@AEAAJXZ
    long RaiseSelectionChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RedrawText@CTextBlock@@AEAAJXZ
    long RedrawText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderHighlighterForegroundCallback@CTextBlock@@AEAAJPEAVCSolidColorBrush@@IPEAUXRECTF_WH@@@Z
    long RenderHighlighterForegroundCallback(CSolidColorBrush *, unsigned int, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTextMode@CTextBlock@@AEAAJXZ
    long ResolveTextMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFastPathOptOutConditions@CTextBlock@@AEAAXW4FastPathOptOutConditions@@I@Z
    void SetFastPathOptOutConditions(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextToInlineCollection@CTextBlock@@AEAAJXZ
    long SetTextToInlineCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackPlateForegroundOverride@CTextBlock@@AEAAXXZ
    void UpdateBackPlateForegroundOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHighContrastAdjustments@CTextBlock@@AEAAJXZ
    long UpdateHighContrastAdjustments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTextTrimmedFastPath@CTextBlock@@AEAAJPEAUDWRITE_TEXT_METRICS@@@Z
    long UpdateIsTextTrimmedFastPath(DWRITE_TEXT_METRICS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTextTrimmedSlowPath@CTextBlock@@AEAAJXZ
    long UpdateIsTextTrimmedSlowPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionAndHighlightRegions@CTextBlock@@AEAAJPEA_N@Z
    long UpdateSelectionAndHighlightRegions(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionHighlightColor@CTextBlock@@AEAAXXZ
    void UpdateSelectionHighlightColor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextBlock@@EEAA@XZ
    virtual ~CTextBlock();
};
