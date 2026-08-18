#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 49 member(s).
class CContentPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CContentPresenter@@UEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@CContentPresenter@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Content(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CContentPresenter@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDefaultContent@CContentPresenter@@QEAAJPEBVxstring_ptr@@PEAPEAVCDependencyObject@@@Z
    long CreateDefaultContent(xstring_ptr const *, CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundBrush@CContentPresenter@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBackgroundBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundSizing@CContentPresenter@@UEBA?AW4BackgroundSizing@DirectUI@@XZ
    virtual int GetBackgroundSizing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CContentPresenter@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CContentPresenter@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CContentPresenter@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHorizontalContentAlignment@CContentPresenter@@QEBA?AW4HorizontalAlignment@DirectUI@@XZ
    int GetHorizontalContentAlignment() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CContentPresenter@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPadding@CContentPresenter@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetPadding() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateChildNoRef@CContentPresenter@@UEAAPEAVCUIElement@@XZ
    virtual CUIElement * GetTemplateChildNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockText@CContentPresenter@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetTextBlockText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CContentPresenter@@UEAAPEAVCTransitionCollection@@PEAVCUIElement@@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CContentPresenter@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalContentAlignment@CContentPresenter@@QEBA?AW4VerticalAlignment@DirectUI@@XZ
    int GetVerticalContentAlignment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBackgroundDirty@CContentPresenter@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBackgroundDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBorderBrushDirty@CContentPresenter@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBorderBrushDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CContentPresenter@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CContentPresenter@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTemplateChild@CContentPresenter@@UEAAJXZ
    virtual long RemoveTemplateChild();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CContentPresenter@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CContentPresenter@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CContentPresenter@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContentPresenter@@IEAA@PEAVCCoreServices@@@Z
    CContentPresenter(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContentRenderDataVirtual@CContentPresenter@@MEAAXW4RenderWalkType@@0@Z
    virtual void EnsureContentRenderDataVirtual(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CContentPresenter@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBoundsImpl@CContentPresenter@@IEAAXPEAUXRECTF_RB@@@Z
    void GenerateContentBoundsImpl(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplate@CContentPresenter@@MEBA?AV?$xref_ptr@VCControlTemplate@@@@XZ
    virtual WindissectOpaque GetTemplate() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CContentPresenter@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CContentPresenter@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CContentPresenter@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CContentPresenter@@MEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CContentPresenter@@MEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CContentPresenter@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CContentPresenter@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformEmergencyInvalidation@CContentPresenter@@MEAAJPEAVCDependencyObject@@@Z
    virtual long PerformEmergencyInvalidation(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CContentPresenter@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentPresenter@@MEAA@XZ
    virtual ~CContentPresenter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedContentTemplate@CContentPresenter@@AEBA?AV?$xref_ptr@VCDataTemplate@@@@XZ
    WindissectOpaque GetSelectedContentTemplate() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextBlockChildOfDefaultTemplate@CContentPresenter@@AEAA?AV?$xref_ptr@VCTextBlock@@@@_N@Z
    WindissectOpaque GetTextBlockChildOfDefaultTemplate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@CContentPresenter@@AEAAJ_N@Z
    long Invalidate(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInUnloadingContentTransition@CContentPresenter@@AEAA_NXZ
    bool ParticipatesInUnloadingContentTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateInheritedProperty@CContentPresenter@@AEAAJPEAVCUIElement@@PEBVCDependencyProperty@@@Z
    long PropagateInheritedProperty(CUIElement *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWalkSpecificResources@CContentPresenter@@AEAAXW4RenderWalkType@@@Z
    void ReleaseWalkSpecificResources(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataContext@CContentPresenter@@AEAAJXZ
    long SetDataContext();
};
