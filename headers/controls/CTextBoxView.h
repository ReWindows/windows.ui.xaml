#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 99 member(s).
class CTextBoxView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreGrippersVisible@CTextBoxView@@QEAA_NXZ
    bool AreGrippersVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CTextBoxView@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextBoxView@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultFont@CTextBoxView@@QEAAPEAGXZ
    unsigned short * GetDefaultFont();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFace@CTextBoxView@@QEAAPEAUIDWriteFontFace@@H@Z
    IDWriteFontFace * GetFontFace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CTextBoxView@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRightToLeftOffset@CTextBoxView@@QEAAMXZ
    float GetRightToLeftOffset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRunFontFaceId@CTextBoxView@@QEAAIPEBGIIII0IIPEAI@Z
    unsigned int GetRunFontFaceId(unsigned short const *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned short const *, unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionEdgeRects@CTextBoxView@@QEAAJPEAUXRECT_RB@@0@Z
    long GetSelectionEdgeRects(XRECT_RB *, XRECT_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializableFontName@CTextBoxView@@QEAAPEAGI@Z
    unsigned short * GetSerializableFontName(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBoxView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportGlobalRect@CTextBoxView@@QEAA?AUXRECTF_RB@@XZ
    XRECTF_RB GetViewportGlobalRect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCaretElement@CTextBoxView@@QEAAJXZ
    long HideCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideSelectionGrippers@CTextBoxView@@QEAAJXZ
    long HideSelectionGrippers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HwRender@CTextBoxView@@QEAAJPEAVIContentRenderer@@@Z
    long HwRender(IContentRenderer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateView@CTextBoxView@@QEAAJXZ
    long InvalidateView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewDispatcherCallback@CTextBoxView@@QEAAXXZ
    void InvalidateViewDispatcherCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCaretInViewport@CTextBoxView@@QEBA_NXZ
    bool IsCaretInViewport() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CTextBoxView@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisible@CTextBoxView@@QEAAJAEBUXRECTF_WH@@NNNNPEAU2@PEAN2@Z
    long MakeVisible(XRECTF_WH const &, double, double, double, double, XRECTF_WH *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBidiOptionsChanged@CTextBoxView@@QEAAJXZ
    long OnBidiOptionsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuDismiss@CTextBoxView@@QEAAJXZ
    long OnContextMenuDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuOpen@CTextBoxView@@QEAAJ_N@Z
    long OnContextMenuOpen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@CTextBoxView@@QEAAJXZ
    long OnGotFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritedPropertyChanged@CTextBoxView@@QEAAJXZ
    long OnInheritedPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@CTextBoxView@@QEAAJXZ
    long OnLostFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CTextBoxView@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CTextBoxView@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDefaultFormat@CTextBoxView@@QEAAJXZ
    long RefreshDefaultFormat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@CTextBoxView@@QEAAJW4Enum@ScrollCommand@1@IIIPEAI@Z
    long Scroll(int, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwnerTextControl@CTextBoxView@@QEAAJPEAVCTextBoxBase@@@Z
    long SetOwnerTextControl(CTextBoxBase *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollOffsets@CTextBoxView@@QEAAJMM@Z
    long SetScrollOffsets(float, float);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldRaiseEvent@CTextBoxView@@UEAAIPEBVCDependencyProperty@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(CDependencyProperty const *, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowCaretElement@CTextBoxView@@QEAAJXZ
    long ShowCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOrHideCaret@CTextBoxView@@QEAAJXZ
    long ShowOrHideCaret();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSelectionGrippers@CTextBoxView@@QEAAJ_N@Z
    long ShowSelectionGrippers(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxCreateCaret@CTextBoxView@@QEAAIPEAXHH@Z
    unsigned int TxCreateCaret(void *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetClientRect@CTextBoxView@@QEAAJPEAUXRECT_RB@@@Z
    long TxGetClientRect(XRECT_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetContentPadding@CTextBoxView@@QEAAJPEAUXRECT_RB@@@Z
    long TxGetContentPadding(XRECT_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxGetViewportRect@CTextBoxView@@QEAAJPEAUXRECT_RB@@@Z
    long TxGetViewportRect(XRECT_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxInvalidateRect@CTextBoxView@@QEAAXPEBUXRECT_RB@@H@Z
    void TxInvalidateRect(XRECT_RB const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaretElement@CTextBoxView@@QEAAJXZ
    long UpdateCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultParagraphFormat@CTextBoxView@@QEAAJI@Z
    long UpdateDefaultParagraphFormat(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@CTextBoxView@@UEAAJXZ
    virtual long UpdateVisibility();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CTextBoxView@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CTextBoxView@@MEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CTextBoxView@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextBoxView@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CTextBoxView@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateFontSize@CTextBoxView@@MEAAJXZ
    virtual long InvalidateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CTextBoxView@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CTextBoxView@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CTextBoxView@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CTextBoxView@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationHighContrastAdjustmentChanged@CTextBoxView@@MEAAJXZ
    virtual long NotifyApplicationHighContrastAdjustmentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CTextBoxView@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CTextBoxView@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CTextBoxView@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLineSegmentToSegmentCollection@CTextBoxView@@AEAAJPEAVCCoreServices@@PEAVCPathSegmentCollection@@UXPOINTF@@@Z
    long AddLineSegmentToSegmentCollection(CCoreServices *, CPathSegmentCollection *, XPOINTF);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBoxView@@AEAA@PEAVCCoreServices@@@Z
    CTextBoxView(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBaseLine@CTextBoxView@@AEAAJAEBV?$ComPtr@UITextRange2@@@WRL@Microsoft@@AEAI1@Z
    long CalculateBaseLine(WindissectOpaque const &, unsigned int &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSegmentVisibleScrollOffset@CTextBoxView@@CAMMMMM@Z
    static float CalculateSegmentVisibleScrollOffset(float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangePlaceholderBackPlateVisibility@CTextBoxView@@AEAAJ_N@Z
    long ChangePlaceholderBackPlateVisibility(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCaretBlinkTimeout@CTextBoxView@@AEAAMXZ
    float CheckCaretBlinkTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaretShape@CTextBoxView@@AEAAXXZ
    void CreateCaretShape();
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DRenderCommon@CTextBoxView@@AEAAJAEBUSharedRenderParams@@AEBUD2DRenderParams@@PEAUID2D1RenderTarget@@@Z
    long D2DRenderCommon(SharedRenderParams const &, D2DRenderParams const &, ID2D1RenderTarget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBaseLine@CTextBoxView@@AEAAJAEBUXRECT_RB@@I@Z
    long DrawBaseLine(XRECT_RB const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCaretElement@CTextBoxView@@AEAAXXZ
    void EnsureCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRTLCaret@CTextBoxView@@AEAAJMM@Z
    long GenerateRTLCaret(float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaretOpacity@CTextBoxView@@AEBAMXZ
    float GetCaretOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontFaceRun@CTextBoxView@@AEAAJPEAVCCompositeFontFamily@@IIIPEBGIPEAI2@Z
    long GetFontFaceRun(CCompositeFontFamily *, unsigned int, unsigned int, unsigned int, unsigned short const *, unsigned int, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRTLIndicatorSize@CTextBoxView@@AEAAMXZ
    float GetRTLIndicatorSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionRect@CTextBoxView@@AEAAJPEAUXRECT_WH@@@Z
    long GetSelectionRect(XRECT_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShouldRenderCaret@CTextBoxView@@AEAAJPEAI@Z
    long GetShouldRenderCaret(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemFontCollection@CTextBoxView@@AEAAJPEAPEAVCTypefaceCollection@@@Z
    long GetSystemFontCollection(CTypefaceCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextNaturalSize@CTextBoxView@@AEAAJUXSIZEF@@AEAU2@@Z
    long GetTextNaturalSize(XSIZEF, XSIZEF &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportAndViewportTransform@CTextBoxView@@AEAAXPEAUXRECTF_RB@@PEAVCMILMatrix@@@Z
    void GetViewportAndViewportTransform(XRECTF_RB *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWinTextCore@CTextBoxView@@AEAAJPEAPEAVWinTextCore@@@Z
    long GetWinTextCore(WinTextCore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HWNWRenderCommon@CTextBoxView@@AEAAJAEAUXRECT_RB@@0@Z
    long HWNWRenderCommon(XRECT_RB &, XRECT_RB &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateExtentAdditions@CTextBoxView@@AEAAXAEBUXSIZEF@@@Z
    void InvalidateExtentAdditions(XSIZEF const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentActive@CTextBoxView@@AEBA_NXZ
    bool IsHighContrastAdjustmentActive() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHighContrastAdjustmentEnabled@CTextBoxView@@AEBA_NXZ
    bool IsHighContrastAdjustmentEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionEdgeVisible@CTextBoxView@@AEAAJAEAI@Z
    long IsSelectionEdgeVisible(unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeScrollOffset@CTextBoxView@@CAMMMM@Z
    static float NormalizeScrollOffset(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaretStart@CTextBoxView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCaretStart(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaretTimeout@CTextBoxView@@CAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnCaretTimeout(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastAdjustmentChanged@CTextBoxView@@AEAAJW4ElementHighContrastAdjustment@DirectUI@@@Z
    long OnHighContrastAdjustmentChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PauseCaretBlink@CTextBoxView@@AEAAJXZ
    long PauseCaretBlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCaretBlink@CTextBoxView@@AEAAJXZ
    long ResetCaretBlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCaretElement@CTextBoxView@@AEAAXXZ
    void ResetCaretElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeCaretBlink@CTextBoxView@@AEAAJXZ
    long ResumeCaretBlink();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollDataOffsets@CTextBoxView@@AEAAJNN_N@Z
    long SetScrollDataOffsets(double, double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCaretBlinkAnimation@CTextBoxView@@AEAAJXZ
    long SetupCaretBlinkAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextAlignmentToParagraphAlignment@CTextBoxView@@CAFW4TextAlignment@DirectUI@@W4FlowDirection@3@@Z
    static short TextAlignmentToParagraphAlignment(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDefaultCharFormat@CTextBoxView@@AEAAJI@Z
    long UpdateDefaultCharFormat(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHighContrastAdjustments@CTextBoxView@@AEAAJXZ
    long UpdateHighContrastAdjustments();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextBoxView@@EEAA@XZ
    virtual ~CTextBoxView();
};
