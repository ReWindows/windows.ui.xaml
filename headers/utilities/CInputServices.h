#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 161 member(s).
class CInputServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntryToPointerDownTrackerMap@CInputServices@@QEAAJIPEAVCUIElement@@@Z
    long AddEntryToPointerDownTrackerMap(unsigned int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointerIdToInteractionElement@CInputServices@@QEAAJIPEAVCUIElement@@@Z
    long AddPointerIdToInteractionElement(unsigned int, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySecondaryContentRelationship@CInputServices@@QEAAJPEAVCSecondaryContentRelationship@@@Z
    long ApplySecondaryContentRelationship(CSecondaryContentRelationship *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySecondaryContentRelationships@CInputServices@@QEAAJXZ
    long ApplySecondaryContentRelationships();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoViewport@CInputServices@@QEAAJPEAVCUIElement@@0AEAUXRECTF_WH@@MMMIIIIIIPEAI@Z
    long BringIntoViewport(CUIElement *, CUIElement *, XRECTF_WH &, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputServices@@QEAA@PEAVCCoreServices@@@Z
    CInputServices(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDirectManipulations@CInputServices@@QEAAJPEAVCUIElement@@PEAI@Z
    long CancelDirectManipulations(CUIElement *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanPointerElementObject@CInputServices@@QEAAJPEAVCDependencyObject@@@Z
    long CleanPointerElementObject(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanPointerProcessingState@CInputServices@@QEAAJPEAVCContentRoot@@PEAUInputMessage@@IPEAVCPointerState@@PEAVCDependencyObject@@@Z
    long CleanPointerProcessingState(CContentRoot *, InputMessage *, unsigned int, CPointerState *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDirectManipulation@CInputServices@@QEAAJPEAVCDMViewport@@I@Z
    long CompleteDirectManipulation(CDMViewport *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTransformPointToGlobal@CInputServices@@SAJPEAVCUIElement@@PEAUXPOINTF@@@Z
    static long ConvertTransformPointToGlobal(CUIElement *, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewportInteractionForManipulatableElement@CInputServices@@QEAAXPEAVCUIElement@@PEAUIDCompositionDesktopDevicePartner@@PEAPEAUIUnknown@@@Z
    void CreateViewportInteractionForManipulatableElement(CUIElement *, IDCompositionDesktopDevicePartner *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewportInteractionForRootVisual@CInputServices@@QEAAXPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIUnknown@@@Z
    void CreateViewportInteractionForRootVisual(IDCompositionDesktopDevicePartner *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPointerObjects@CInputServices@@QEAAXXZ
    void DestroyPointerObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectManipulationCrossSlideContainerCompleted@CInputServices@@QEAAJPEAVCUIElement@@PEAVCDMCrossSlideViewport@@@Z
    long DirectManipulationCrossSlideContainerCompleted(CUIElement *, CDMCrossSlideViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscardRejectionViewportsInParentChain@CInputServices@@QEAAJPEAVCDependencyObject@@@Z
    long DiscardRejectionViewportsInParentChain(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationClipContentTransform@CInputServices@@QEAAJPEAVCUIElement@@PEAUIPALDirectManipulationService@@PEAUIObject@@AEAM333@Z
    long GetDirectManipulationClipContentTransform(CUIElement *, IPALDirectManipulationService *, IObject *, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationServiceAndContent@CInputServices@@QEAAJPEAVCUIElement@@PEAPEAUIPALDirectManipulationService@@PEAPEAUIObject@@2PEAW4XDMContentType@@PEAM4@Z
    long GetDirectManipulationServiceAndContent(CUIElement *, IPALDirectManipulationService * *, IObject * *, IObject * *, int *, float *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationViewportStatus@CInputServices@@QEAAJPEAVCUIElement@@PEAW4XDMViewportStatus@@@Z
    long GetDirectManipulationViewportStatus(CUIElement *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationViewports@CInputServices@@QEAAJIAEAV?$xvector@PEAVCDMCViewport@@@@@Z
    long GetDirectManipulationViewports(unsigned int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyTipManager@CInputServices@@QEAAAEAVKeyTipManager@@XZ
    KeyTipManager & GetKeyTipManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageFromPointerCaptureLostArgs@CInputServices@@SAIPEAUIPointerEventArgs@Core@UI@Windows@@@Z
    static unsigned int GetMessageFromPointerCaptureLostArgs(::Windows::UI::Core::IPointerEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOldDirectManipulationViewport@CInputServices@@QEAAJPEAPEAUIObject@@@Z
    long GetOldDirectManipulationViewport(IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfoFromCurrentWin32PointerInfo@CInputServices@@SAJIPEAUHWND__@@PEAVCContentRoot@@PEAUPointerInfo@@@Z
    static long GetPointerInfoFromCurrentWin32PointerInfo(unsigned int, HWND__*, CContentRoot *, PointerInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfoFromPointerPoint@CInputServices@@SAJPEAUIPointerPoint@Input@UI@Windows@@PEAUPointerInfo@@@Z
    static long GetPointerInfoFromPointerPoint(::Windows::UI::Input::IPointerPoint *, PointerInfo *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryContentDMContainer@CInputServices@@QEBAPEAVCUIElement@@PEAV2@@Z
    CUIElement * GetPrimaryContentDMContainer(CUIElement *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryContentTransform@CInputServices@@QEAAJPEAVCUIElement@@0AEAM1111@Z
    long GetSecondaryContentTransform(CUIElement *, CUIElement *, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewport@CInputServices@@QEBAPEAVCDMViewport@@PEAVCUIElement@@@Z
    CDMViewport * GetViewport(CUIElement *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportInteraction@CInputServices@@QEAAXPEAVCUIElement@@PEAUIDCompositionDesktopDevicePartner@@PEAPEAUIUnknown@@@Z
    void GetViewportInteraction(CUIElement *, IDCompositionDesktopDevicePartner *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPointerEnter@CInputServices@@QEBA_NPEAVCDependencyObject@@I@Z
    bool HasPointerEnter(CDependencyObject *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPointerNodeDirty@CInputServices@@QEBA_NPEAVCDependencyObject@@I@Z
    bool IsInputPointerNodeDirty(CDependencyObject *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStretchAlignmentTreatedAsNear@CInputServices@@QEAAJPEAVCUIElement@@_NPEA_N@Z
    long IsStretchAlignmentTreatedAsNear(CUIElement *, bool, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextBoxBase@CInputServices@@SAHQEBVCDependencyObject@@@Z
    static int IsTextBoxBase(CDependencyObject const * const);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTextEditableControl@CInputServices@@SAHQEBVCDependencyObject@@@Z
    static int IsTextEditableControl(CDependencyObject const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentOffsetChanged@CInputServices@@QEAAJPEAVCUIElement@@PEAVCDMViewport@@@Z
    long NotifyContentOffsetChanged(CUIElement *, CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLockScreenModeChanged@CInputServices@@QEAAJPEAVCUIElement@@0@Z
    long NotifyLockScreenModeChanged(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyManipulatableElementChanged@CInputServices@@QEAAJPEAVCUIElement@@00@Z
    long NotifyManipulatableElementChanged(CUIElement *, CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyReleaseManipulationContainer@CInputServices@@QEAAJPEAVCUIElement@@@Z
    long NotifyReleaseManipulationContainer(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySecondaryContentAdded@CInputServices@@QEAAJPEAVCUIElement@@00W4XDMContentType@@@Z
    long NotifySecondaryContentAdded(CUIElement *, CUIElement *, CUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySecondaryContentRemoved@CInputServices@@QEAAJPEAVCUIElement@@00@Z
    long NotifySecondaryContentRemoved(CUIElement *, CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportNormalizationCorrected@CInputServices@@QEAAJPEAVCUIElement@@0@Z
    long NotifyViewportNormalizationCorrected(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPostUIThreadTick@CInputServices@@QEAAJXZ
    long OnPostUIThreadTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSecondaryContentRelationshipForCurveUpdate@CInputServices@@QEAAJPEAVCSecondaryContentRelationship@@@Z
    long PrepareSecondaryContentRelationshipForCurveUpdate(CSecondaryContentRelationship *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeferredReleaseQueue@CInputServices@@QEAAJPEAUIDirectManipulationViewport@@@Z
    long ProcessDeferredReleaseQueue(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportInteractionTypeUpdate@CInputServices@@QEAAJPEAVCDMViewport@@W4XDMViewportInteractionType@@@Z
    long ProcessDirectManipulationViewportInteractionTypeUpdate(CDMViewport *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportStatusUpdate@CInputServices@@QEAAJPEAVCDMViewport@@W4XDMViewportStatus@@1@Z
    long ProcessDirectManipulationViewportStatusUpdate(CDMViewport *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CInputServices@@QEAAJPEAUInputMessage@@PEAVCContentRoot@@PEAH@Z
    long ProcessInput(InputMessage *, CContentRoot *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInputMessageWithDirectManipulation@CInputServices@@QEAAJPEAVCUIElement@@0_NPEAVCContentRoot@@AEAI@Z
    long ProcessInputMessageWithDirectManipulation(CUIElement *, CUIElement *, bool, CContentRoot *, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInteractionPointerMessages@CInputServices@@QEAAJIPEAUInputMessage@@@Z
    long ProcessInteractionPointerMessages(unsigned int, InputMessage *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerExitedEventByPointerEnteredElementStateChange@CInputServices@@QEAAJPEAVCDependencyObject@@PEAVCPointerState@@@Z
    long ProcessPointerExitedEventByPointerEnteredElementStateChange(CDependencyObject *, CPointerState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTouchInteractionCallback@CInputServices@@QEAAJAEBV?$xref_ptr@VCUIElement@@@@PEAUTouchInteractionMsg@@@Z
    long ProcessTouchInteractionCallback(WindissectOpaque const &, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUIThreadTick@CInputServices@@QEAAJXZ
    long ProcessUIThreadTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseQueuedDirectManipulationStateChanges@CInputServices@@QEAAJPEAVCDMViewport@@_N1@Z
    long RaiseQueuedDirectManipulationStateChanges(CDMViewport *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRightTappedEvent@CInputServices@@QEAAJPEAVCDependencyObject@@W4PointerDeviceType@DirectUI@@@Z
    long RaiseRightTappedEvent(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDirectManipulationContainer@CInputServices@@QEAAJPEAVCUIElement@@I@Z
    long RegisterDirectManipulationContainer(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDirectManipulationCrossSlideContainer@CInputServices@@QEAAJPEAVCUIElement@@I@Z
    long RegisterDirectManipulationCrossSlideContainer(CUIElement *, unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputServices@@QEAAIXZ
    unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEntryFromPointerDownTrackerMap@CInputServices@@QEAAJI@Z
    long RemoveEntryFromPointerDownTrackerMap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveInputPointerNodeDirty@CInputServices@@QEAAXPEAVCDependencyObject@@I@Z
    void RemoveInputPointerNodeDirty(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerEnter@CInputServices@@QEAAXPEAVCDependencyObject@@I@Z
    void RemovePointerEnter(CDependencyObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePointerIdFromInteractionElement@CInputServices@@QEAAJI@Z
    long RemovePointerIdFromInteractionElement(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryContentRelationship@CInputServices@@QEAAJPEAVCSecondaryContentRelationship@@@Z
    long RemoveSecondaryContentRelationship(CSecondaryContentRelationship *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiresViewportInteraction@CInputServices@@QEAA_NPEAVCUIElement@@@Z
    bool RequiresViewportInteraction(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CInputServices@@QEAAXXZ
    void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDManipCompositors@CInputServices@@QEAAJXZ
    long ResetDManipCompositors();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConstantVelocities@CInputServices@@QEAAJPEAVCUIElement@@0MM@Z
    long SetConstantVelocities(CUIElement *, CUIElement *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoreWindow@CInputServices@@QEAAXPEAUICoreWindow@Core@UI@Windows@@@Z
    void SetCoreWindow(::Windows::UI::Core::ICoreWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputPointerNodeDirty@CInputServices@@QEAAXPEAVCDependencyObject@@I_N@Z
    void SetInputPointerNodeDirty(CDependencyObject *, unsigned int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPointerEnter@CInputServices@@QEAAXPEAVCDependencyObject@@I_N@Z
    void SetPointerEnter(CDependencyObject *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInertialViewport@CInputServices@@QEAAJPEAVCDMViewport@@_NPEA_N@Z
    long StopInertialViewport(CDMViewport *, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInertialViewport@CInputServices@@QEAAJPEAVCUIElement@@0PEA_N@Z
    long StopInertialViewport(CUIElement *, CUIElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendWrapping@CInputServices@@QEAAJPEAVCUIElement@@0@Z
    long SuspendWrapping(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartDirectManipulation@CInputServices@@QEAAJPEAVCPointer@@PEA_N@Z
    long TryStartDirectManipulation(CPointer *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterDMViewportsOnPointerUp@CInputServices@@QEAAJI@Z
    long UnRegisterDMViewportsOnPointerUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursor@CInputServices@@QEAAJH@Z
    long UpdateCursor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationPrimaryContent@CInputServices@@QEAAJPEAVCUIElement@@0IIIIIPEA_N@Z
    long UpdateManipulationPrimaryContent(CUIElement *, CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationPrimaryContentTransform@CInputServices@@QEAAJPEAVCUIElement@@0IIII@Z
    long UpdateManipulationPrimaryContentTransform(CUIElement *, CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationSnapPoints@CInputServices@@QEAAJPEAVCUIElement@@0W4XDMMotionTypes@@@Z
    long UpdateManipulationSnapPoints(CUIElement *, CUIElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationViewport@CInputServices@@QEAAJPEAVCUIElement@@0IIIIIIIIIIIPEAI@Z
    long UpdateManipulationViewport(CUIElement *, CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryContentRelationshipDependencyProperties@CInputServices@@QEAAJPEAVCDMViewport@@@Z
    long UpdateSecondaryContentRelationshipDependencyProperties(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryContentRelationshipOffsets@CInputServices@@QEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@PEAVCDMContent@@IMM@Z
    long UpdateSecondaryContentRelationshipOffsets(IPALDirectManipulationService *, CDMViewport *, CDMContent *, unsigned int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSecondaryContentsOffsets@CInputServices@@QEAAJPEAVCUIElement@@0PEAVCDMViewport@@@Z
    long UpdateSecondaryContentsOffsets(CUIElement *, CUIElement *, CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWrappingParameters@CInputServices@@QEAAJPEAVCUIElement@@0IMMMPEAMI@Z
    long UpdateWrappingParameters(CUIElement *, CUIElement *, unsigned int, float, float, float, float *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputServices@@QEAA@XZ
    ~CInputServices();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCrossSlideViewportContactId@CInputServices@@AEAAJIPEAVCDMCrossSlideViewport@@PEAI@Z
    long AddCrossSlideViewportContactId(unsigned int, CDMCrossSlideViewport *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyQueuedWrappingParameters@CInputServices@@AEAAJXZ
    long ApplyQueuedWrappingParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupViewportInteractionForRootVisual@CInputServices@@AEAAXXZ
    void CleanupViewportInteractionForRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDirectManipulationCrossSlideContainers@CInputServices@@AEAAJXZ
    long CompleteDirectManipulationCrossSlideContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteParentViewports@CInputServices@@AEAAJPEAVCDMViewport@@@Z
    long CompleteParentViewports(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTransformPointToLocal@CInputServices@@AEAAJPEAVCUIElement@@PEAUXPOINTF@@@Z
    long ConvertTransformPointToLocal(CUIElement *, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSubstituteHWND@CInputServices@@AEAAXXZ
    void CreateSubstituteHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeclareNewViewportForCompositor@CInputServices@@AEAAJPEAVCDMViewport@@PEAVCUIDMContainer@@@Z
    long DeclareNewViewportForCompositor(CDMViewport *, CUIDMContainer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDMCrossSlideViewports@CInputServices@@AEAAJXZ
    long DeleteDMCrossSlideViewports();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDMServices@CInputServices@@AEAAJXZ
    long DeleteDMServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteDMViewports@CInputServices@@AEAAJXZ
    long DeleteDMViewports();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteSecondaryContentRelationshipsToBeApplied@CInputServices@@AEAAJXZ
    long DeleteSecondaryContentRelationshipsToBeApplied();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirtyDirectManipulationTransforms@CInputServices@@AEAAJPEAVCDMViewport@@@Z
    long DirtyDirectManipulationTransforms(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableViewport@CInputServices@@AEAAJPEAVCUIElement@@0@Z
    long DisableViewport(CUIElement *, CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableViewport@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@@Z
    long EnableViewport(IPALDirectManipulationService *, CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDMServices@CInputServices@@AEAAJXZ
    long EnsureDMServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePointerPointStatics@CInputServices@@AEAAXXZ
    void EnsurePointerPointStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureViewports@CInputServices@@AEAAJXZ
    long EnsureViewports();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FilterChainedMotions@CInputServices@@AEAAJW4XDMConfigurations@@AEAW4XDMMotionTypes@@@Z
    long FilterChainedMotions(int, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentForContentElement@CInputServices@@AEAAJPEAVCUIElement@@IPEAPEAVCDMContent@@@Z
    long GetContentForContentElement(CUIElement *, unsigned int, CDMContent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideViewport@CInputServices@@AEAAJPEAVCUIElement@@PEAPEAVCDMCrossSlideViewport@@@Z
    long GetCrossSlideViewport(CUIElement *, CDMCrossSlideViewport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDMService@CInputServices@@AEAAJPEAVCUIElement@@PEAPEAUIPALDirectManipulationService@@@Z
    long GetDMService(CUIElement *, IPALDirectManipulationService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationViewportEventHandler@CInputServices@@AEAAJPEAPEAUIXcpDirectManipulationViewportEventHandler@@@Z
    long GetDirectManipulationViewportEventHandler(IXcpDirectManipulationViewportEventHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewport@CInputServices@@AEAAJPEAVCUIElement@@0PEAPEAVCDMViewport@@@Z
    long GetViewport(CUIElement *, CUIElement *, CDMViewport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportForContentElement@CInputServices@@AEAAJPEAVCUIElement@@PEAPEAVCDMViewport@@PEAPEAVCDMContent@@@Z
    long GetViewportForContentElement(CUIElement *, CDMViewport * *, CDMContent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChainingChildViewport@CInputServices@@AEAAJPEAVCDMViewport@@IAEAI@Z
    long HasChainingChildViewport(CDMViewport *, unsigned int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CInputServices@@AEAAXPEAVCCoreServices@@@Z
    void Init(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDirectManipulationContainer@CInputServices@@AEAAJPEAVCUIElement@@@Z
    long InitializeDirectManipulationContainer(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDirectManipulationContainers@CInputServices@@AEAAJXZ
    long InitializeDirectManipulationContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDirectManipulationForPointerId@CInputServices@@AEAAJIIPEAVCUIElement@@PEA_N@Z
    long InitializeDirectManipulationForPointerId(unsigned int, unsigned int, CUIElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDirectManipulationViewportValues@CInputServices@@AEAAJPEAVCDMViewport@@PEAUIPALDirectManipulationService@@MMM@Z
    long InitializeDirectManipulationViewportValues(CDMViewport *, IPALDirectManipulationService *, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewportActive@CInputServices@@CAIW4XDMViewportStatus@@@Z
    static unsigned int IsViewportActive(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySecondaryContentAdded@CInputServices@@AEAAJPEAVCUIElement@@00W4XDMContentType@@IPEAUCParametricCurveDefinition@@PEAVCSecondaryContentRelationship@@@Z
    long NotifySecondaryContentAdded(CUIElement *, CUIElement *, CUIElement *, int, unsigned int, CParametricCurveDefinition *, CSecondaryContentRelationship *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareCompositionNodesForBringIntoView@CInputServices@@AEAAJPEAVCDMViewport@@@Z
    long PrepareCompositionNodesForBringIntoView(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessConstantVelocityViewportStatusUpdate@CInputServices@@AEAAJPEAVCDMViewport@@W4XDMViewportStatus@@@Z
    long ProcessConstantVelocityViewportStatusUpdate(CDMViewport *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationPointerHitTest@CInputServices@@AEAAJPEAUInputMessage@@PEAVCContentRoot@@PEAH@Z
    long ProcessDirectManipulationPointerHitTest(InputMessage *, CContentRoot *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationSecondaryContentsUpdate@CInputServices@@AEAAJPEAVCDMViewport@@PEAUIPALDirectManipulationService@@@Z
    long ProcessDirectManipulationSecondaryContentsUpdate(CDMViewport *, IPALDirectManipulationService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportChanges@CInputServices@@AEAAJPEAVCDMViewport@@@Z
    long ProcessDirectManipulationViewportChanges(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportStatusUpdate@CInputServices@@AEAAJPEAVCDMViewport@@W4XDMViewportStatus@@1IPEAI2@Z
    long ProcessDirectManipulationViewportStatusUpdate(CDMViewport *, int, int, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDirectManipulationViewportValuesUpdate@CInputServices@@AEAAJPEAVCDMViewport@@III@Z
    long ProcessDirectManipulationViewportValuesUpdate(CDMViewport *, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGestureInput@CInputServices@@AEAAJPEAVCDependencyObject@@PEAUTouchInteractionMsg@@@Z
    long ProcessGestureInput(CDependencyObject *, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInputLanguageChange@CInputServices@@AEAAJPEAUInputMessage@@PEAVCContentRoot@@PEAH@Z
    long ProcessInputLanguageChange(InputMessage *, CContentRoot *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessManipulationCompletedInput@CInputServices@@AEAAJPEAVCDependencyObject@@PEAUTouchInteractionMsg@@@Z
    long ProcessManipulationCompletedInput(CDependencyObject *, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessManipulationDeltaInput@CInputServices@@AEAAJPEAVCDependencyObject@@PEAUTouchInteractionMsg@@@Z
    long ProcessManipulationDeltaInput(CDependencyObject *, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessManipulationStartedInput@CInputServices@@AEAAJPEAVCDependencyObject@@PEAUTouchInteractionMsg@@@Z
    long ProcessManipulationStartedInput(CDependencyObject *, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerMessagesWithInteractionEngine@CInputServices@@AEAAJIPEAUInputMessage@@PEAVCUIElement@@1IPEAVElementGestureTracker@@I@Z
    long ProcessPointerMessagesWithInteractionEngine(unsigned int, InputMessage *, CUIElement *, CUIElement *, unsigned int, ElementGestureTracker *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWindowMove@CInputServices@@AEAAJPEAUInputMessage@@PEAVCContentRoot@@@Z
    long ProcessWindowMove(InputMessage *, CContentRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDelayedPointerUpEvent@CInputServices@@AEAAJPEAUTouchInteractionMsg@@PEAVCDependencyObject@@@Z
    long RaiseDelayedPointerUpEvent(TouchInteractionMsg *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseManipulationInertiaStartingEvent@CInputServices@@AEAAJPEAVCUIElement@@PEAUTouchInteractionMsg@@@Z
    long RaiseManipulationInertiaStartingEvent(CUIElement *, TouchInteractionMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseManipulationStartingEvent@CInputServices@@AEAAJPEAVCUIElement@@PEAW4ManipulationModes@DirectUI@@PEAUXPOINTF@@PEAM@Z
    long RaiseManipulationStartingEvent(CUIElement *, int *, XPOINTF *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseRightTappedUnhandledEvent@CInputServices@@AEAAJPEAUTouchInteractionMsg@@PEAVCDependencyObject@@@Z
    long RaiseRightTappedUnhandledEvent(TouchInteractionMsg *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDirectManipulationHandlerWantsNotifications@CInputServices@@AEAAJXZ
    long RefreshDirectManipulationHandlerWantsNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryClipContent@CInputServices@@AEAAJPEAVCUIElement@@PEAVCDMContent@@PEAVCDMViewport@@PEAUIPALDirectManipulationService@@@Z
    long RemoveSecondaryClipContent(CUIElement *, CDMContent *, CDMViewport *, IPALDirectManipulationService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryContent@CInputServices@@AEAAJPEAVCUIElement@@PEAVCDMContent@@PEAVCDMViewport@@PEAUIPALDirectManipulationService@@@Z
    long RemoveSecondaryContent(CUIElement *, CDMContent *, CDMViewport *, IPALDirectManipulationService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAdditionalFrame@CInputServices@@AEAAJXZ
    long RequestAdditionalFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectManipulationContact@CInputServices@@AEAAJIIPEAVCDependencyObject@@PEAVCUIElement@@1PEAIPEA_N@Z
    long SetDirectManipulationContact(unsigned int, unsigned int, CDependencyObject *, CUIElement *, CUIElement *, unsigned int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectManipulationCrossSlideContainer@CInputServices@@AEAAJIPEAVCUIElement@@PEAI@Z
    long SetDirectManipulationCrossSlideContainer(unsigned int, CUIElement *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectManipulationCrossSlideContainer@CInputServices@@AEAAJIPEAVCUIElement@@W4XDMConfigurations@@PEAI@Z
    long SetDirectManipulationCrossSlideContainer(unsigned int, CUIElement *, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectManipulationHandlerWantsNotifications@CInputServices@@AEAAJPEAVCDMViewport@@PEAVCUIElement@@PEAVCUIDMContainer@@I@Z
    long SetDirectManipulationHandlerWantsNotifications(CDMViewport *, CUIElement *, CUIDMContainer *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportBounds@CInputServices@@AEBAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@AEBUXRECTF_WH@@@Z
    long SetViewportBounds(IPALDirectManipulationService *, CDMViewport *, XRECTF_WH const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDirectManipulationViewport@CInputServices@@AEAAJPEAVCUIElement@@0PEAVCDMViewport@@PEAVCUIDMContainer@@PEAUIPALDirectManipulationService@@IIIIPEA_N@Z
    long SetupDirectManipulationViewport(CUIElement *, CUIElement *, CDMViewport *, CUIDMContainer *, IPALDirectManipulationService *, unsigned int, unsigned int, unsigned int, unsigned int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDirectManipulationCrossSlideContainer@CInputServices@@AEAAJPEAVCUIElement@@W4XDMConfigurations@@1@Z
    long StartDirectManipulationCrossSlideContainer(CUIElement *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDirectManipulationCrossSlideContainers@CInputServices@@AEAAJXZ
    long StartDirectManipulationCrossSlideContainers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToTouchConfiguration@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@@Z
    long SwitchToTouchConfiguration(IPALDirectManipulationService *, CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContactId@CInputServices@@AEAAJIPEAVCDMViewport@@I@Z
    long UnregisterContactId(unsigned int, CDMViewport *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContactIds@CInputServices@@AEAAJPEAVCDMViewport@@I@Z
    long UnregisterContactIds(CDMViewport *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCrossSlideViewport@CInputServices@@AEAAJPEAVCDMCrossSlideViewport@@@Z
    long UnregisterCrossSlideViewport(CDMCrossSlideViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterCrossSlideViewportContactId@CInputServices@@AEAAJI@Z
    long UnregisterCrossSlideViewportContactId(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterViewport@CInputServices@@AEAAJPEAVCDMViewport@@@Z
    long UnregisterViewport(CDMViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBringIntoViewportConfiguration@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@W4XDMConfigurations@@@Z
    long UpdateBringIntoViewportConfiguration(IPALDirectManipulationService *, CDMViewport *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCrossSlideViewportConfigurations@CInputServices@@AEAAJIPEAVCDMViewport@@PEAI@Z
    long UpdateCrossSlideViewportConfigurations(unsigned int, CDMViewport *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDirectManipulationManagerActivation@CInputServices@@AEAAJPEAVCUIElement@@IIIII@Z
    long UpdateDirectManipulationManagerActivation(CUIElement *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDirectManipulationManagerActivation@CInputServices@@AEAAJPEAVCUIElement@@I@Z
    long UpdateDirectManipulationManagerActivation(CUIElement *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationConfigurations@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@IPEAW4XDMConfigurations@@PEAI@Z
    long UpdateManipulationConfigurations(IPALDirectManipulationService *, CDMViewport *, unsigned int, int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationNonTouchConfiguration@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@W4XDMConfigurations@@@Z
    long UpdateManipulationNonTouchConfiguration(IPALDirectManipulationService *, CDMViewport *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationOverpanModes@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@I@Z
    long UpdateManipulationOverpanModes(IPALDirectManipulationService *, CDMViewport *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationTouchConfiguration@CInputServices@@AEAAJPEAUIPALDirectManipulationService@@PEAVCDMViewport@@W4XDMConfigurations@@@Z
    long UpdateManipulationTouchConfiguration(IPALDirectManipulationService *, CDMViewport *, int);
};
