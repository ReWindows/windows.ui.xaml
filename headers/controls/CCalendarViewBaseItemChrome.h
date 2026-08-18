#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 79 member(s).
class CCalendarViewBaseItemChrome {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTemplateChild@CCalendarViewBaseItemChrome@@UEAAJPEAVCUIElement@@@Z
    virtual long AddTemplateChild(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomizeFocusRectangle@CCalendarViewBaseItemChrome@@QEAAJAEAUFocusRectangleOptions@@PEA_N@Z
    long CustomizeFocusRectangle(FocusRectangleOptions &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CCalendarViewBaseItemChrome@@UEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CCalendarViewBaseItemChrome@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstChild@CCalendarViewBaseItemChrome@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetFirstChild();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainText@CCalendarViewBaseItemChrome@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetMainText(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTemplateChild@CCalendarViewBaseItemChrome@@UEAA_NXZ
    virtual bool HasTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CCalendarViewBaseItemChrome@@UEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CCalendarViewBaseItemChrome@@UEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRender@CCalendarViewBaseItemChrome@@QEAAX_N@Z
    void InvalidateRender(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCalendarViewBaseItemChromeDenied@CCalendarViewBaseItemChrome@@SA_NXZ
    static bool IsRoundedCalendarViewBaseItemChromeDenied();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCalendarViewBaseItemChromeEnabled@CCalendarViewBaseItemChrome@@QEBA_NXZ
    bool IsRoundedCalendarViewBaseItemChromeEnabled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCalendarViewBaseItemChromeEnabled@CCalendarViewBaseItemChrome@@SA_NPEAVCCoreServices@@@Z
    static bool IsRoundedCalendarViewBaseItemChromeEnabled(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRoundedCalendarViewBaseItemChromeForced@CCalendarViewBaseItemChrome@@SA_NXZ
    static bool IsRoundedCalendarViewBaseItemChromeForced();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CCalendarViewBaseItemChrome@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateChild@CCalendarViewBaseItemChrome@@UEAAJXZ
    virtual long RemoveTemplateChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderChrome@CCalendarViewBaseItemChrome@@QEAAJPEAVIContentRenderer@@W4CalendarViewBaseItemChromeLayerPosition@@@Z
    long RenderChrome(IContentRenderer *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCornerRadius@CCalendarViewBaseItemChrome@@QEAAJXZ
    long SetCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDensityColors@CCalendarViewBaseItemChrome@@QEAAJPEAU?$IIterable@UColor@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long SetDensityColors(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerBorderCornerRadius@CCalendarViewBaseItemChrome@@QEAAJXZ
    long SetInnerBorderCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsBlackout@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsBlackout(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHovered@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsHovered(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOutOfScope@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsOutOfScope(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsPressed@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsPressed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsSelected@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsSelected(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsToday@CCalendarViewBaseItemChrome@@QEAAJ_N@Z
    long SetIsToday(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderCornerRadius@CCalendarViewBaseItemChrome@@QEAAJXZ
    long SetOuterBorderCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CCalendarViewBaseItemChrome@@QEAAXPEAVCCalendarView@@@Z
    void SetOwner(CCalendarView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawDottedLinesFocusVisual@CCalendarViewBaseItemChrome@@QEAAJPEA_N@Z
    long ShouldDrawDottedLinesFocusVisual(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackgroundAndBorderBrushes@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateBackgroundAndBorderBrushes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCornerRadius@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateCornerRadius();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLabelText@CCalendarViewBaseItemChrome@@QEAAJPEAUHSTRING__@@@Z
    long UpdateLabelText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMainText@CCalendarViewBaseItemChrome@@QEAAJPEAUHSTRING__@@@Z
    long UpdateMainText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlocksFontProperties@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateTextBlocksFontProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlocksForeground@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateTextBlocksForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlocksForegroundOpacity@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateTextBlocksForegroundOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlocksMargin@CCalendarViewBaseItemChrome@@QEAAJXZ
    long UpdateTextBlocksMargin();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCalendarViewBaseItemChrome@@UEAA@XZ
    virtual ~CCalendarViewBaseItemChrome();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CCalendarViewBaseItemChrome@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCalendarViewBaseItemChrome@@IEAA@PEAVCCoreServices@@@Z
    CCalendarViewBaseItemChrome(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CCalendarViewBaseItemChrome@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CCalendarViewBaseItemChrome@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldUseLayoutRounding@CCalendarViewBaseItemChrome@@IEAA_NXZ
    bool ShouldUseLayoutRounding();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTextBlock@CCalendarViewBaseItemChrome@@AEAAJAEAV?$xref_ptr@VCTextBlock@@@@@Z
    long CreateTextBlock(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBackground@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawBackground(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBorder@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawBorder(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBorder@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@PEAVCBrush@@AEBUXRECTF_WH@@AEBUXRECTF_RB@@_N@Z
    long DrawBorder(IContentRenderer *, CBrush *, XRECTF_WH const &, XRECTF_RB const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawControlBackground@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawControlBackground(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDensityBar@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawDensityBar(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawFocusBorder@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawFocusBorder(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawInnerBorder@CCalendarViewBaseItemChrome@@AEAAJPEAVIContentRenderer@@AEBUXRECTF_WH@@@Z
    long DrawInnerBorder(IContentRenderer *, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInnerBorder@CCalendarViewBaseItemChrome@@AEAAJXZ
    long EnsureInnerBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOuterBorder@CCalendarViewBaseItemChrome@@AEAAJXZ
    long EnsureOuterBorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStrikethroughLine@CCalendarViewBaseItemChrome@@AEAAJXZ
    long EnsureStrikethroughLine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextBlock@CCalendarViewBaseItemChrome@@AEAAJAEAV?$xref_ptr@VCTextBlock@@@@@Z
    long EnsureTextBlock(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemBackgroundBrush@CCalendarViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetItemBackgroundBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemBorderBrush@CCalendarViewBaseItemChrome@@AEBAPEAVCBrush@@_N@Z
    CBrush * GetItemBorderBrush(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemBorderThickness@CCalendarViewBaseItemChrome@@AEAA?AUXRECTF_RB@@XZ
    XRECTF_RB GetItemBorderThickness();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFocusAltBorderBrush@CCalendarViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetItemFocusAltBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemInnerBorderBrush@CCalendarViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetItemInnerBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterBorderCornerRadius@CCalendarViewBaseItemChrome@@AEAA?AUXRECTF_CR@@XZ
    XRECTF_CR GetOuterBorderCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockForeground@CCalendarViewBaseItemChrome@@AEBAPEAVCBrush@@XZ
    CBrush * GetTextBlockForeground() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockForegroundOpacity@CCalendarViewBaseItemChrome@@AEBAMXZ
    float GetTextBlockForegroundOpacity() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTransparentSolidColorBrush@CCalendarViewBaseItemChrome@@CA_NPEAVCBrush@@@Z
    static bool IsTransparentSolidColorBrush(CBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackoutStrikethroughBrush@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetBlackoutStrikethroughBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlackoutStrikethroughSize@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetBlackoutStrikethroughSize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerBorderBackground@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetInnerBorderBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerBorderBrush@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetInnerBorderBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerBorderThickness@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetInnerBorderThickness();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderBackground@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderBackground();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderBrush@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterBorderThickness@CCalendarViewBaseItemChrome@@AEAAJXZ
    long SetOuterBorderThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockAlignments@CCalendarViewBaseItemChrome@@AEAAJPEAVCTextBlock@@@Z
    long UpdateTextBlockAlignments(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockFontProperties@CCalendarViewBaseItemChrome@@AEAAJPEAVCTextBlock@@@Z
    long UpdateTextBlockFontProperties(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockForeground@CCalendarViewBaseItemChrome@@AEAAJPEAVCTextBlock@@@Z
    long UpdateTextBlockForeground(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockForegroundOpacity@CCalendarViewBaseItemChrome@@AEAAJPEAVCTextBlock@@@Z
    long UpdateTextBlockForegroundOpacity(CTextBlock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextBlockMargin@CCalendarViewBaseItemChrome@@AEAAJPEAVCTextBlock@@@Z
    long UpdateTextBlockMargin(CTextBlock *);
};
