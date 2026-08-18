#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 105 member(s).
class CPopup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CPopup@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowsHandlerWhenNotLive@CPopup@@UEBA_NHW4KnownEventIndex@@@Z
    virtual bool AllowsHandlerWhenNotLive(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyHostBackdropTreatment@CPopup@@SAXPEAUIDCompositionDesktopDevicePartner@@PEAUIUnknown@@@Z
    static void ApplyHostBackdropTreatment(IDCompositionDesktopDevicePartner *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociatedFlyout@CPopup@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long AssociatedFlyout(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelHideAnimationToPrepareForShow@CPopup@@QEAAXXZ
    void CancelHideAnimationToPrepareForShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Child@CPopup@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Child(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CPopup@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPopup@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesPlatformSupportWindowedPopup@CPopup@@SA_NPEAVCCoreServices@@@Z
    static bool DoesPlatformSupportWindowedPopup(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUIAWindow@CPopup@@QEAAXXZ
    void EnsureUIAWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushPendingKeepVisibleOperations@CPopup@@UEAAXXZ
    virtual void FlushPendingKeepVisibleOperations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssociatedPopupRootNoRef@CPopup@@QEAAPEAVCPopupRoot@@XZ
    CPopupRoot * GetAssociatedPopupRootNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssociatedXamlIslandNoRef@CPopup@@QEAAPEAVCXamlIslandRoot@@XZ
    CXamlIslandRoot * GetAssociatedXamlIslandNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestFlyoutAncestor@CPopup@@SAPEAVCFlyoutBase@@PEAVCUIElement@@@Z
    static CFlyoutBase * GetClosestFlyoutAncestor(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClosestPopupAncestor@CPopup@@SAPEAV1@PEAVCUIElement@@@Z
    static CPopup * GetClosestPopupAncestor(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayInputPassThroughElementNoRef@CPopup@@QEAAJPEAPEAVCDependencyObject@@@Z
    long GetOverlayInputPassThroughElementNoRef(CDependencyObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupOfUnloadingChild@CPopup@@SAPEAV1@PEAVCUIElement@@@Z
    static CPopup * GetPopupOfUnloadingChild(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupWindow@CPopup@@QEAAPEAUHWND__@@XZ
    HWND__* GetPopupWindow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSavedFocusState@CPopup@@QEAA?AW4FocusState@DirectUI@@XZ
    int GetSavedFocusState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPopup@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlyout@CPopup@@QEBA_NXZ
    bool IsFlyout() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@CPopup@@UEAAIXZ
    virtual unsigned int IsFocusable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelfOrAncestorLightDismiss@CPopup@@QEAAIXZ
    unsigned int IsSelfOrAncestorLightDismiss();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsToolTip@CPopup@@QEBA_NXZ
    bool IsToolTip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CPopup@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CPopup@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateFontSize@CPopup@@UEAAJXZ
    virtual long RecursiveInvalidateFontSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecursiveInvalidateMeasure@CPopup@@UEAAXXZ
    virtual void RecursiveInvalidateMeasure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseOverride@CPopup@@UEAAXXZ
    virtual void ReleaseOverride();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CPopup@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveWindowedPopupBackground@CPopup@@QEAAXXZ
    void RemoveWindowedPopupBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reposition@CPopup@@QEAAJXZ
    long Reposition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociatedIsland@CPopup@@QEAAXPEAVCDependencyObject@@@Z
    void SetAssociatedIsland(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociatedVisualTree@CPopup@@QEAAXPEAVVisualTree@@@Z
    void SetAssociatedVisualTree(VisualTree *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocus@CPopup@@QEAAJW4FocusState@DirectUI@@@Z
    long SetFocus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWindowed@CPopup@@QEAAJXZ
    long SetIsWindowed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsWindowedIfNeeded@CPopup@@QEAAJXZ
    long SetIsWindowedIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayThemeBrush@CPopup@@QEAAJAEBVxstring_ptr@@@Z
    long SetOverlayThemeBrush(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisualForWindowedPopupWindow@CPopup@@QEAAJPEAUIDCompositionVisual2@@@Z
    long SetRootVisualForWindowedPopupWindow(IDCompositionVisual2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CPopup@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldPopupRootNotifyThemeChange@CPopup@@QEAAIXZ
    unsigned int ShouldPopupRootNotifyThemeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipRenderForLayoutTransition@CPopup@@UEAAIXZ
    virtual unsigned int SkipRenderForLayoutTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitStyle@CPopup@@UEAAJPEAVCStyle@@0_N11@Z
    virtual long UpdateImplicitStyle(CStyle *, CStyle *, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopup@@UEAA@XZ
    virtual ~CPopup();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CPopup@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestChildren@CPopup@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestChildren(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestInternal@CPopup@@MEAAJAEBUXPOINTF@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestInternal(XPOINTF const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoundsTestInternal@CPopup@@MEAAJAEBVHitTestPolygon@@PEAVCBoundedHitTestVisitor@@PEBVHitTestParams@@_N3PEAW4Value@BoundsWalkHitResult@@@Z
    virtual long BoundsTestInternal(HitTestPolygon const &, CBoundedHitTestVisitor *, HitTestParams const *, bool, bool, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPopup@@IEAA@PEAVCCoreServices@@@Z
    CPopup(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CPopup@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateChildOuterBounds@CPopup@@MEAAJPEAVHitTestParams@@PEAUXRECTF_RB@@@Z
    virtual long GenerateChildOuterBounds(HitTestParams *, XRECTF_RB *);
    // Category: Method | Source: PE Export
    // Symbol: ?IgnoresInheritedClips@CPopup@@MEAAIXZ
    virtual unsigned int IgnoresInheritedClips();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CPopup@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CPopup@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NWPropagateDirtyFlag@CPopup@@MEAAXW4Value@DirtyFlags@@@Z
    virtual void NWPropagateDirtyFlag(int);
    // Category: Method | Source: PE Export
    // Symbol: ?NWSkipRendering@CPopup@@MEAAIXZ
    virtual unsigned int NWSkipRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CPopup@@MEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClosing@CPopup@@MEAAJPEA_N@Z
    virtual long OnClosing(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@CPopup@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyDown(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyUp@CPopup@@MEAAJPEAVCEventArgs@@@Z
    virtual long OnKeyUp(CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreChildrenPrintVirtual@CPopup@@MEAAJAEBUSharedRenderParams@@AEBUD2DPrecomputeParams@@AEBUD2DRenderParams@@@Z
    virtual long PreChildrenPrintVirtual(SharedRenderParams const &, D2DPrecomputeParams const &, D2DRenderParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReferenceTrackerWalkCore@CPopup@@MEAA_NW4EReferenceTrackerWalkType@DirectUI@@_N1@Z
    virtual bool ReferenceTrackerWalkCore(int, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildAsNamescopeOwner@CPopup@@AEAAJXZ
    long AddChildAsNamescopeOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOverlayElementToPopupRoot@CPopup@@AEAAJXZ
    long AddOverlayElementToPopupRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowedPopupBoundsForDropShadow@CPopup@@AEAAXPEBUXRECTF_WH@@@Z
    void AdjustWindowedPopupBoundsForDropShadow(XRECTF_WH const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearUCRemoveLogicalParentFlag@CPopup@@AEAAJPEAVCUIElement@@@Z
    long ClearUCRemoveLogicalParentFlag(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CPopup@@AEAAJ_N@Z
    long Close(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePopupOnKeyEventIfNecessary@CPopup@@AEAAJPEAVCKeyEventArgs@@@Z
    long ClosePopupOnKeyEventIfNecessary(CKeyEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowedPopupWindowVisual@CPopup@@AEAAXXZ
    void CreateWindowedPopupWindowVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowForWindowedPopup@CPopup@@AEAAJXZ
    long DestroyWindowForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DipsToPhysicalPixelsRect@CPopup@@AEAAXPEAUXRECTF_WH@@@Z
    void DipsToPhysicalPixelsRect(XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDCompResourcesForWindowedPopup@CPopup@@AEAAJXZ
    long EnsureDCompResourcesForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowClassForWindowedPopup@CPopup@@AEAAJXZ
    long EnsureWindowClassForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowForWindowedPopup@CPopup@@AEAAJXZ
    long EnsureWindowForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCloseForTreeReset@CPopup@@AEAAXXZ
    void ForceCloseForTreeReset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInsetsForDropShadow@CPopup@@AEAA?AUXRECTF_RB@@XZ
    XRECTF_RB GetInsetsForDropShadow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwnerHWNDForWindowedPopup@CPopup@@AEAAPEAUHWND__@@XZ
    HWND__* GetOwnerHWNDForWindowedPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalBounds@CPopup@@AEAAJPEAVCUIElement@@PEAUXRECTF_WH@@@Z
    long GetPhysicalBounds(CUIElement *, XRECTF_WH *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleGetObjectMessage@CPopup@@AEAA_J_K_J@Z
    int64_t HandleGetObjectMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWindowedPopupMessage@CPopup@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t HandleWindowedPopupMessage(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusedElementAsChild@CPopup@@AEAA_NXZ
    bool HasFocusedElementAsChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindowForWindowedPopup@CPopup@@AEAAJXZ
    long HideWindowForWindowedPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementOrParentEngaged@CPopup@@CA_NQEAVCDependencyObject@@@Z
    static bool IsElementOrParentEngaged(CDependencyObject * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCScene@CPopup@@AEAAXXZ
    void LeavePCScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeavePCSceneSubgraph@CPopup@@EEAAXXZ
    virtual void LeavePCSceneSubgraph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeetsRenderingRequirementsForWindowedPopup@CPopup@@AEAA_NXZ
    bool MeetsRenderingRequirementsForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CPopup@@AEAAJXZ
    long Open();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionAndSizeWindowForWindowedPopup@CPopup@@AEAAJXZ
    long PositionAndSizeWindowForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePopupEvent@CPopup@@AEAAXUEventHandle@@@Z
    void RaisePopupEvent(EventHandle);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateIsOverlayVisible@CPopup@@AEAAJXZ
    long ReevaluateIsOverlayVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResourcesForWindowedPopup@CPopup@@AEAAXXZ
    void ReleaseDCompResourcesForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWindowIfInvalid@CPopup@@AEAAXXZ
    void ReleaseWindowIfInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@CPopup@@AEAAJXZ
    long RemoveChild();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChildAsNamescopeOwner@CPopup@@AEAAJXZ
    long RemoveChildAsNamescopeOwner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOverlayElement@CPopup@@AEAAJXZ
    long RemoveOverlayElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOverlayElementFromPopupRoot@CPopup@@AEAAJXZ
    long RemoveOverlayElementFromPopupRoot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChild@CPopup@@AEAAJPEAVCUIElement@@@Z
    long SetChild(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverlayElement@CPopup@@AEAAJPEAVCFrameworkElement@@@Z
    long SetOverlayElement(CFrameworkElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowForWindowedPopup@CPopup@@AEAAJXZ
    long ShowWindowForWindowedPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindowedPopupBackgroundAfterDelay@CPopup@@AEAAXXZ
    void ShowWindowedPopupBackgroundAfterDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartComposition@CPopup@@AEAAJXZ
    long StartComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopComposition@CPopup@@AEAAJXZ
    long StopComposition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowedPopupWindowProc@CPopup@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t WindowedPopupWindowProc(HWND__*, unsigned int, uint64_t, int64_t);
};
