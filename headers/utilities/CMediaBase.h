#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 33 member(s).
class CMediaBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CMediaBase@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBrush@CMediaBase@@UEAAJXZ
    virtual long EnsureBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CMediaBase@@UEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CMediaBase@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CMediaBase@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CMediaBase@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibleImageSourceBounds@CMediaBase@@QEAAJPEBUXRECTF_RB@@PEAUXRECTF_WH@@@Z
    long GetVisibleImageSourceBounds(XRECTF_RB const *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRightToLeft@CMediaBase@@UEAA_NXZ
    virtual bool IsRightToLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CMediaBase@@UEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CMediaBase@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CMediaBase@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternalSize@CMediaBase@@QEAAJAEAM0AEAW4AlignmentX@DirectUI@@AEAW4AlignmentY@3@@Z
    long UpdateInternalSize(float &, float &, int &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CMediaBase@@UEAAJXZ
    virtual long UpdateState();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CMediaBase@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaBase@@IEAA@PEAVCCoreServices@@@Z
    CMediaBase(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseMedia@CMediaBase@@MEAAXXZ
    virtual void CloseMedia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMedia@CMediaBase@@MEAAJXZ
    virtual long EnsureMedia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateContentBounds@CMediaBase@@MEAAJPEAUXRECTF_RB@@@Z
    virtual long GenerateContentBounds(XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalBounds@CMediaBase@@MEAAJAEAUXRECTF_WH@@@Z
    virtual long GetNaturalBounds(XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidMediaSource@CMediaBase@@MEAA_NXZ
    virtual bool HasValidMediaSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CMediaBase@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CMediaBase@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureArrangeHelper@CMediaBase@@IEAAJUXSIZEF@@AEAU2@W4PrimaryStretchDirection@@PEAW43@@Z
    long MeasureArrangeHelper(XSIZEF, XSIZEF &, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CMediaBase@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWRenderPreChildrenEdgesVirtual@CMediaBase@@MEAAJAEBUSharedRenderParams@@AEBUNWRenderParams@@AEAV?$xvector@V?$xref_ptr@VCRasterizerEdgeStore@@@@@@@Z
    virtual long NWRenderPreChildrenEdgesVirtual(SharedRenderParams const &, NWRenderParams const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CMediaBase@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCreateBackgroundBrush@CMediaBase@@MEAAIXZ
    virtual unsigned int ShouldCreateBackgroundBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPickupParentIsRightToLeft@CMediaBase@@MEAAIXZ
    virtual unsigned int ShouldPickupParentIsRightToLeft();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaBase@@MEAA@XZ
    virtual ~CMediaBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForUpdate@CMediaBase@@AEAAJXZ
    long RegisterForUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForUpdate@CMediaBase@@AEAAJXZ
    long UnregisterForUpdate();
};
