#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 31 member(s).
class CPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreChildrenInLogicalTree@CPanel@@UEAA_NXZ
    virtual bool AreChildrenInLogicalTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CPanel@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransitionStorageForChildren@CPanel@@SAJPEAV1@@Z
    static long EnsureTransitionStorageForChildren(CPanel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundBrush@CPanel@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBackgroundBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderBrush@CPanel@@UEBA?AV?$xref_ptr@VCBrush@@@@XZ
    virtual WindissectOpaque GetBorderBrush() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderThickness@CPanel@@UEBA?AUXRECTF_RB@@XZ
    virtual XRECTF_RB GetBorderThickness() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerRadius@CPanel@@UEBA?AUXRECTF_CR@@XZ
    virtual XRECTF_CR GetCornerRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsIgnoringTransitions@CPanel@@QEBA_NXZ
    bool GetIsIgnoringTransitions() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsItemsHost@CPanel@@QEBA_NXZ
    bool GetIsItemsHost() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CPanel@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPanel@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBackgroundDirty@CPanel@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBackgroundDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWSetBorderBrushDirty@CPanel@@SAXPEAVCDependencyObject@@W4Value@DirtyFlags@@@Z
    static void NWSetBorderBrushDirty(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PanelGetClosestIndexSlow@CPanel@@QEAAJUXPOINTF@@PEAH@Z
    long PanelGetClosestIndexSlow(XPOINTF, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CPanel@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPanel@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPanel@@IEAA@PEAVCCoreServices@@@Z
    CPanel(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanHaveChildren@CPanel@@MEBA_NXZ
    virtual bool CanHaveChildren() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContentRenderDataVirtual@CPanel@@MEAAXW4RenderWalkType@@0@Z
    virtual void EnsureContentRenderDataVirtual(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CPanel@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CPanel@@MEAAPEAVCTransitionCollection@@PEAVCUIElement@@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CPanel@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CPanel@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWCleanDirtyFlags@CPanel@@MEAAXXZ
    virtual void NWCleanDirtyFlags();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWIsContentDirty@CPanel@@MEAAIXZ
    virtual unsigned int NWIsContentDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CPanel@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CPanel@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPanel@@MEAA@XZ
    virtual ~CPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWalkSpecificResources@CPanel@@AEAAXW4RenderWalkType@@@Z
    void ReleaseWalkSpecificResources(int);
};
