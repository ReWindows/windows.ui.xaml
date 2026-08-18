#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 44 member(s).
class CPopupRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToDeferredOpenPopupList@CPopupRoot@@QEAAJPEAVCPopup@@@Z
    long AddToDeferredOpenPopupList(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToOpenPopupList@CPopupRoot@@QEAAJPEAVCPopup@@@Z
    long AddToOpenPopupList(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CPopupRoot@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPrintDirtyFlagOnOpenPopups@CPopupRoot@@QEAAJXZ
    long ClearPrintDirtyFlagOnOpenPopups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllPopupsForTreeReset@CPopupRoot@@QEAAXXZ
    void CloseAllPopupsForTreeReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTopmostPopup@CPopupRoot@@QEAAJW4FocusState@DirectUI@@W4PopupFilter@1@PEA_N@Z
    long CloseTopmostPopup(int, int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeDepthInOpenPopups@CPopupRoot@@QEAA_NXZ
    bool ComputeDepthInOpenPopups();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOpenOrUnloadingPopup@CPopupRoot@@QEAA_NPEAVCPopup@@@Z
    bool ContainsOpenOrUnloadingPopup(CPopup *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPopupRoot@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsLayoutElement@CPopupRoot@@UEBA_NXZ
    virtual bool GetIsLayoutElement() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightDismissBounds@CPopupRoot@@QEAA?BUXRECTF_WH@@XZ
    XRECTF_WH GetLightDismissBounds();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopupForElement@CPopupRoot@@SAJPEAVCUIElement@@PEAPEAVCPopup@@@Z
    static long GetOpenPopupForElement(CUIElement *, CPopup * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopupWithChild@CPopupRoot@@QEBAPEAVCPopup@@QEBVCUIElement@@_N@Z
    CPopup * GetOpenPopupWithChild(CUIElement const * const, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOpenPopups@CPopupRoot@@QEAAJPEAHPEAPEAPEAVCPopup@@@Z
    long GetOpenPopups(int *, CPopup * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopmostPopup@CPopupRoot@@QEAAPEAVCPopup@@W4PopupFilter@1@@Z
    CPopup * GetTopmostPopup(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPopupRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpenPopupInputHwnd@CPopupRoot@@QEAA_NPEAUHWND__@@@Z
    bool IsOpenPopupInputHwnd(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopmostPopupInLightDismissChain@CPopupRoot@@QEAAIXZ
    unsigned int IsTopmostPopupInLightDismissChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChanged@CPopupRoot@@QEAAJW4Theme@Theming@@_N@Z
    long NotifyThemeChanged(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIslandLostFocus@CPopupRoot@@QEAAXXZ
    void OnIslandLostFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromOpenPopupList@CPopupRoot@@QEAAJPEAVCPopup@@I@Z
    long RemoveFromOpenPopupList(CPopup *, unsigned int);
    // Category: Method | Source: PE Export
    // Symbol: ?SkipNameRegistrationForChildren@CPopupRoot@@UEAAIXZ
    virtual unsigned int SkipNameRegistrationForChildren();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CPopupRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CPopupRoot@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CPopupRoot@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CPopupRoot@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionsForChildElementNoAddRef@CPopupRoot@@MEAAPEAVCTransitionCollection@@PEAVCUIElement@@@Z
    virtual CTransitionCollection * GetTransitionsForChildElementNoAddRef(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CPopupRoot@@MEAAJAEBUXPOINTF@@PEAI@Z
    virtual long HitTestLocalInternal(XPOINTF const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestLocalInternal@CPopupRoot@@MEAAJAEBVHitTestPolygon@@PEAI@Z
    virtual long HitTestLocalInternal(HitTestPolygon const &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CPopupRoot@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CPopupRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CPopupRoot@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CPopupRoot@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@CPopupRoot@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnPointerPressed(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrintChildren@CPopupRoot@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PrintChildren(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopupRoot@@MEAA@XZ
    virtual ~CPopupRoot();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAndLeaveSubgraphHelper@CPopupRoot@@AEAAXI_N@Z
    void CleanupAndLeaveSubgraphHelper(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCSceneSubgraph@CPopupRoot@@EEAAXXZ
    virtual void LeavePCSceneSubgraph();
};
