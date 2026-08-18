#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 120 member(s).
class CDirectManipulationService {
public:
    class SharedTransformParts;
    class ViewportOverpanReflexes;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateAutoScroll@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@_N@Z
    virtual long ActivateAutoScroll(IObject *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateDirectManipulationManager@CDirectManipulationService@@UEAAJXZ
    virtual long ActivateDirectManipulationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateViewportConfiguration@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMConfigurations@@PEA_N@Z
    virtual long ActivateViewportConfiguration(IObject *, int, bool *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDirectManipulationService@@UEAAIXZ
    virtual unsigned int AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryClipContent@CDirectManipulationService@@UEAAJPEAUIObject@@0IPEAUCParametricCurveDefinition@@MM@Z
    virtual long AddSecondaryClipContent(IObject *, IObject *, unsigned int, CParametricCurveDefinition *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryContent@CDirectManipulationService@@UEAAJPEAUIObject@@0IPEAUCParametricCurveDefinition@@MM@Z
    virtual long AddSecondaryContent(IObject *, IObject *, unsigned int, CParametricCurveDefinition *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSecondaryContent@CDirectManipulationService@@UEAAJPEAUIObject@@0W4XDMContentType@@@Z
    virtual long AddSecondaryContent(IObject *, IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewportConfiguration@CDirectManipulationService@@UEAAJPEAUIObject@@IIW4XDMConfigurations@@@Z
    virtual long AddViewportConfiguration(IObject *, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOverpanModes@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMOverpanMode@@1MIPEAI@Z
    virtual long ApplyOverpanModes(IObject *, int, int, float, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringIntoViewport@CDirectManipulationService@@UEAAJPEAUIObject@@AEAUXRECTF_WH@@I@Z
    virtual long BringIntoViewport(IObject *, XRECTF_WH &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentOffsetTransform@CDirectManipulationService@@UEAAJPEAUIDCompositionDesktopDevicePartner@@MMPEAPEAUIDCompositionTransform@@@Z
    virtual long CreateContentOffsetTransform(IDCompositionDesktopDevicePartner *, float, float, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrSetWrappingHelper@CDirectManipulationService@@UEAAJPEAVCCoreServices@@PEAPEAUIObject@@@Z
    virtual long CreateOrSetWrappingHelper(CCoreServices *, IObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeactivateDirectManipulationManager@CDirectManipulationService@@UEAAJXZ
    virtual long DeactivateDirectManipulationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableViewport@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long DisableViewport(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableLockScreenMode@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long EnableLockScreenMode(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableViewport@CDirectManipulationService@@UEAAJPEAUIObject@@AEAI@Z
    virtual long EnableViewport(IObject *, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDManipInitializedForOneCoreTransformsMode@CDirectManipulationService@@SAXPEAUIDirectManipulationManager@@@Z
    static void EnsureDManipInitializedForOneCoreTransformsMode(IDirectManipulationManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDirectManipulationManager@CDirectManipulationService@@UEAAJPEAXI@Z
    virtual long EnsureDirectManipulationManager(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSharedContentTransform@CDirectManipulationService@@UEAAJPEAUIDCompositionDesktopDevicePartner@@PEAUIObject@@W4XDMContentType@@PEAPEAUIDCompositionTransform@@3@Z
    virtual long EnsureSharedContentTransform(IDCompositionDesktopDevicePartner *, IObject *, int, IDCompositionTransform * *, IDCompositionTransform * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMContentType@@AEAIAEAM3333@Z
    virtual long GetCompositorContentTransform(IObject *, int, unsigned int &, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorPrimaryContent@CDirectManipulationService@@UEAAJPEAUIObject@@PEAPEAU2@@Z
    virtual long GetCompositorPrimaryContent(IObject *, IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorSecondaryClipContent@CDirectManipulationService@@UEAAJPEAUIObject@@0PEAPEAU2@@Z
    virtual long GetCompositorSecondaryClipContent(IObject *, IObject *, IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorSecondaryContent@CDirectManipulationService@@UEAAJPEAUIObject@@0PEAPEAU2@@Z
    virtual long GetCompositorSecondaryContent(IObject *, IObject *, IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorService@CDirectManipulationService@@UEAAJPEAPEAUIPALDirectManipulationCompositorService@@@Z
    virtual long GetCompositorService(IPALDirectManipulationCompositorService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorViewport@CDirectManipulationService@@UEAAJPEAUIObject@@PEAPEAU2@@Z
    virtual long GetCompositorViewport(IObject *, IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorViewportAnimationDescription@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMViewportStatus@@PEAGI@Z
    virtual long GetCompositorViewportAnimationDescription(IObject *, int, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorViewportKey@CDirectManipulationService@@UEAAJPEAUIObject@@PEAPEAX@Z
    virtual long GetCompositorViewportKey(IObject *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorViewportLastPointerInfo@CDirectManipulationService@@UEAAJPEAUIObject@@PEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z
    virtual long GetCompositorViewportLastPointerInfo(IObject *, TOUCH_TELEMETRY_UPDATE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompositorViewportStatus@CDirectManipulationService@@UEAAJPEAUIObject@@PEAW4XDMViewportStatus@@@Z
    virtual long GetCompositorViewportStatus(IObject *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentBounds@CDirectManipulationService@@UEAAJPEAUIObject@@AEAUXRECTF_WH@@@Z
    virtual long GetContentBounds(IObject *, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentInertiaEndTransform@CDirectManipulationService@@UEAAJPEAUIObject@@AEAM11@Z
    virtual long GetContentInertiaEndTransform(IObject *, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationHubService@CDirectManipulationService@@UEAAJPEAPEAUIPALDirectManipulationHubService@@@Z
    virtual long GetDirectManipulationHubService(IPALDirectManipulationHubService * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDirectManipulationViewport@CDirectManipulationService@@UEAAJPEAUIObject@@PEAPEAUIDirectManipulationViewport@@@Z
    virtual long GetDirectManipulationViewport(IObject *, IDirectManipulationViewport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragDropViewport@CDirectManipulationService@@UEAAJPEAPEAUIObject@@@Z
    virtual long GetDragDropViewport(IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHasDragDropViewport@CDirectManipulationService@@UEAA_NXZ
    virtual bool GetHasDragDropViewport();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsWrapping@CDirectManipulationService@@UEAAJPEAUIObject@@PEAI@Z
    virtual long GetIsWrapping(IObject *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimaryContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@AEAM1111@Z
    virtual long GetPrimaryContentTransform(IObject *, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryClipContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@0W4XDMContentType@@AEAM2222@Z
    virtual long GetSecondaryClipContentTransform(IObject *, IObject *, int, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSecondaryContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@0W4XDMContentType@@AEAM2222@Z
    virtual long GetSecondaryContentTransform(IObject *, IObject *, int, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportBounds@CDirectManipulationService@@UEAAJPEAUIObject@@AEAUXRECTF_WH@@@Z
    virtual long GetViewportBounds(IObject *, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportCenterPoint@CDirectManipulationService@@UEAAJPEAUIObject@@AEAM1@Z
    virtual long GetViewportCenterPoint(IObject *, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportStatus@CDirectManipulationService@@UEAAJPEAUIObject@@AEAW4XDMViewportStatus@@@Z
    virtual long GetViewportStatus(IObject *, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportInteractionTypeUpdate@CDirectManipulationService@@QEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_INTERACTION_TYPE@@@Z
    long NotifyViewportInteractionTypeUpdate(IDirectManipulationViewport *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportNormalizationCorrected@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long NotifyViewportNormalizationCorrected(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyViewportStatusUpdate@CDirectManipulationService@@QEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@1@Z
    long NotifyViewportStatusUpdate(IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentOffsetChanged@CDirectManipulationService@@UEAAJPEAUIObject@@M@Z
    virtual long OnContentOffsetChanged(IObject *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFirstTouch@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long OnFirstTouch(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@CDirectManipulationService@@UEAAJPEAUIObject@@PEAXW4MessageMap@@IIW4XDMConfigurations@@AEAI@Z
    virtual long ProcessInput(IObject *, void *, int, unsigned int, unsigned int, int, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterViewportEventHandler@CDirectManipulationService@@UEAAJPEAUIXcpDirectManipulationViewportEventHandler@@@Z
    virtual long RegisterViewportEventHandler(IXcpDirectManipulationViewportEventHandler *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDirectManipulationService@@UEAAIXZ
    virtual unsigned int Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllContacts@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long ReleaseAllContacts(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseContact@CDirectManipulationService@@UEAAJPEAUIObject@@I@Z
    virtual long ReleaseContact(IObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSharedContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMContentType@@@Z
    virtual long ReleaseSharedContentTransform(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryClipContent@CDirectManipulationService@@UEAAJPEAUIObject@@0PEAVDMDeferredRelease@@@Z
    virtual long RemoveSecondaryClipContent(IObject *, IObject *, DMDeferredRelease *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSecondaryContent@CDirectManipulationService@@UEAAJPEAUIObject@@0PEAVDMDeferredRelease@@@Z
    virtual long RemoveSecondaryContent(IObject *, IObject *, DMDeferredRelease *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSharedContentTransformMapping@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long RemoveSharedContentTransformMapping(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveViewportConfiguration@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMConfigurations@@@Z
    virtual long RemoveViewportConfiguration(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCompositor@CDirectManipulationService@@UEAAJXZ
    virtual long ResetCompositor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContact@CDirectManipulationService@@UEAAJPEAUIObject@@IPEAI@Z
    virtual long SetContact(IObject *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentAlignment@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMAlignment@@I@Z
    virtual long SetContentAlignment(IObject *, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentBounds@CDirectManipulationService@@UEAAJPEAUIObject@@AEAUXRECTF_WH@@@Z
    virtual long SetContentBounds(IObject *, XRECTF_WH &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentSnapPoints@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@MM@Z
    virtual long SetPrimaryContentSnapPoints(IObject *, int, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentSnapPoints@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@IPEAM@Z
    virtual long SetPrimaryContentSnapPoints(IObject *, int, unsigned int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentSnapPointsCoordinate@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@W4XDMSnapCoordinate@@M@Z
    virtual long SetPrimaryContentSnapPointsCoordinate(IObject *, int, int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentSnapPointsType@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@II@Z
    virtual long SetPrimaryContentSnapPointsType(IObject *, int, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@MMM@Z
    virtual long SetPrimaryContentTransform(IObject *, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrimaryContentZoomBoundaries@CDirectManipulationService@@UEAAJPEAUIObject@@MM@Z
    virtual long SetPrimaryContentZoomBoundaries(IObject *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportBounds@CDirectManipulationService@@UEAAJPEAUIObject@@AEBUXRECTF_WH@@@Z
    virtual long SetViewportBounds(IObject *, XRECTF_WH const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportChaining@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@@Z
    virtual long SetViewportChaining(IObject *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportInputTransform@CDirectManipulationService@@UEAAJPEAUIObject@@PEAVCMILMatrix@@@Z
    virtual long SetViewportInputTransform(IObject *, CMILMatrix *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewportTrackingDescription@CDirectManipulationService@@UEAAJPEAUIObject@@PEBG@Z
    virtual long SetViewportTrackingDescription(IObject *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAutoScroll@CDirectManipulationService@@UEAAJPEAUIObject@@W4XDMMotionTypes@@@Z
    virtual long StopAutoScroll(IObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDMHubController@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long StopDMHubController(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopViewport@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long StopViewport(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendWrapping@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long SuspendWrapping(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterViewport@CDirectManipulationService@@UEAAJPEAUIObject@@@Z
    virtual long UnregisterViewport(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositorContentTransform@CDirectManipulationService@@UEAAJPEAUIObject@@I@Z
    virtual long UpdateCompositorContentTransform(IObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWrappingParameters@CDirectManipulationService@@UEAAJPEAUIObject@@IMMMPEAMI@Z
    virtual long UpdateWrappingParameters(IObject *, unsigned int, float, float, float, float *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddViewport@CDirectManipulationService@@AEAAJPEAUIObject@@PEAUIDirectManipulationViewport@@@Z
    long AddViewport(IObject *, IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyConstantCurve@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@MKK@Z
    long ApplyConstantCurve(IDirectManipulationParametricMotionBehavior *, float, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLinearCurve@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@MKK@Z
    long ApplyLinearCurve(IDirectManipulationParametricMotionBehavior *, float, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOverpanDefaultOverrideCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@KK@Z
    long ApplyOverpanDefaultOverrideCurves(IDirectManipulationParametricMotionBehavior *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOverpanScaleCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@MMMW4XDMOverpanMode@@KK@Z
    long ApplyOverpanScaleCurves(IDirectManipulationParametricMotionBehavior *, float, float, float, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOverpanTranslationCorrectionCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@MMMMW4XDMOverpanMode@@KK@Z
    long ApplyOverpanTranslationCorrectionCurves(IDirectManipulationParametricMotionBehavior *, float, float, float, float, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyOverpanTranslationSuppressionCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationParametricMotionBehavior@@MMMW4XDMOverpanMode@@KK@Z
    long ApplyOverpanTranslationSuppressionCurves(IDirectManipulationParametricMotionBehavior *, float, float, float, int, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPrimaryReflexCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@W4XDMContentType@@W4XDMOverpanMode@@2MUtagRECT@@3@Z
    long ApplyPrimaryReflexCurves(IDirectManipulationContent *, int, int, int, float, tagRECT, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySecondaryReflexCurves@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@W4XDMContentType@@W4XDMOverpanMode@@2UtagRECT@@3@Z
    long ApplySecondaryReflexCurves(IDirectManipulationContent *, int, int, int, tagRECT, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachDragDropBehavior@CDirectManipulationService@@AEAAJPEAUIDirectManipulationViewport@@@Z
    long AttachDragDropBehavior(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOverpanReflexData@CDirectManipulationService@@AEAAJPEAUIObject@@PEAUIDirectManipulationViewport2@@@Z
    long CleanupOverpanReflexData(IObject *, IDirectManipulationViewport2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossSlideViewport@CDirectManipulationService@@AEAAJIPEAPEAUIDirectManipulationViewport@@@Z
    long CreateCrossSlideViewport(unsigned int, IDirectManipulationViewport * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParametricBehavior@CDirectManipulationService@@AEAAJPEAUIDirectManipulationManager2@@PEAUIDirectManipulationViewport2@@PEAVViewportOverpanReflexes@1@@Z
    long CreateParametricBehavior(IDirectManipulationManager2*, IDirectManipulationViewport2*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateParametricReflex@CDirectManipulationService@@AEAAJPEAUIDirectManipulationManager2@@PEAUIDirectManipulationViewport2@@PEAPEAUIDirectManipulationContent@@@Z
    long CreateParametricReflex(IDirectManipulationManager2*, IDirectManipulationViewport2*, IDirectManipulationContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedContentTransformForContent@CDirectManipulationService@@AEAAJPEAUIDCompositionDesktopDevicePartner@@PEAUIObject@@PEAPEAUIDCompositionTransform@@@Z
    long CreateSharedContentTransformForContent(IDCompositionDesktopDevicePartner *, IObject *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedContentTransformsForOverpanReflex@CDirectManipulationService@@AEAAJPEAUIDCompositionDesktopDevicePartner@@W4XDMContentType@@PEAPEAUIDCompositionTransform@@2@Z
    long CreateSharedContentTransformsForOverpanReflex(IDCompositionDesktopDevicePartner *, int, IDCompositionTransform * *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewport@CDirectManipulationService@@AEAAJPEAPEAUIDirectManipulationViewport@@@Z
    long CreateViewport(IDirectManipulationViewport * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewportEventHandler@CDirectManipulationService@@AEAAJXZ
    long CreateViewportEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewportInteraction@CDirectManipulationService@@EEAAJPEAUIDCompositionDesktopDevicePartner@@PEAUIObject@@PEAPEAUIUnknown@@@Z
    virtual long CreateViewportInteraction(IDCompositionDesktopDevicePartner *, IObject *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFrameInfoProvider@CDirectManipulationService@@AEAAJXZ
    long EnsureFrameInfoProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDMConfigurations@CDirectManipulationService@@AEAA?AW4DIRECTMANIPULATION_CONFIGURATION@@W4XDMConfigurations@@@Z
    int GetDMConfigurations(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDMTransform@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@PEAUIObject@@W4XDMContentType@@AEAM3333@Z
    long GetDMTransform(IDirectManipulationContent *, IObject *, int, float &, float &, float &, float &, float &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDMTransformFromOverpanReflexes@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@PEAVViewportOverpanReflexes@1@W4XDMContentType@@PEAM@Z
    long GetDMTransformFromOverpanReflexes(IDirectManipulationContent *, WindissectOpaque *, int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDMViewportFromHandle@CDirectManipulationService@@AEAAJPEAUIObject@@PEAPEAUIDirectManipulationViewport@@@Z
    long GetDMViewportFromHandle(IObject *, IDirectManipulationViewport * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleFromDMViewport@CDirectManipulationService@@AEAAJPEAUIDirectManipulationViewport@@PEAPEAUIObject@@@Z
    long GetHandleFromDMViewport(IDirectManipulationViewport *, IObject * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMotionTypeFromDMProperty@CDirectManipulationService@@AEAA?AW4DIRECTMANIPULATION_MOTION_TYPES@@W4XDMProperty@@@Z
    int GetMotionTypeFromDMProperty(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewportStatus@CDirectManipulationService@@AEAAJPEAUIDirectManipulationViewport@@AEAW4XDMViewportStatus@@@Z
    long GetViewportStatus(IDirectManipulationViewport *, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsMessageWParam@CDirectManipulationService@@AEAA_KW4MessageMap@@_KI@Z
    uint64_t GetWindowsMessageWParam(int, uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshOverpanCurves@CDirectManipulationService@@AEAAJPEAUIObject@@@Z
    long RefreshOverpanCurves(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSharedContentTransformForContent@CDirectManipulationService@@AEAAJPEAUIObject@@@Z
    long ReleaseSharedContentTransformForContent(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseSharedContentTransformForOverpanReflex@CDirectManipulationService@@AEAAJW4XDMContentType@@@Z
    long ReleaseSharedContentTransformForOverpanReflex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOverpanBehavior@CDirectManipulationService@@AEAAJPEAUIDirectManipulationViewport2@@PEAVViewportOverpanReflexes@1@@Z
    long RemoveOverpanBehavior(IDirectManipulationViewport2*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveViewportInteraction@CDirectManipulationService@@EEAAJPEAUIObject@@@Z
    virtual long RemoveViewportInteraction(IObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupSecondaryContent@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@IPEAUCParametricCurveDefinition@@MM@Z
    long SetupSecondaryContent(IDirectManipulationContent *, unsigned int, CParametricCurveDefinition *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupSecondaryContent@CDirectManipulationService@@AEAAJPEAUIDirectManipulationContent@@W4XDMContentType@@@Z
    long SetupSecondaryContent(IDirectManipulationContent *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDirectManipulationService@@EEAA@XZ
    virtual ~CDirectManipulationService();
};
