#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 87 member(s).
class DCompTreeHost {
public:
    class AnimationScenarioInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddXamlIslandTarget@DCompTreeHost@@QEAAXPEAVCXamlIslandRoot@@@Z
    void AddXamlIslandTarget(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingScenarioBegin@DCompTreeHost@@QEAAJ_KPEBUAnimationTrackingScenarioInfo@@@Z
    long AnimationTrackingScenarioBegin(uint64_t, AnimationTrackingScenarioInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingScenarioReference@DCompTreeHost@@QEAAJ_K@Z
    long AnimationTrackingScenarioReference(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingScenarioUnreference@DCompTreeHost@@QEAAJ_K@Z
    long AnimationTrackingScenarioUnreference(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDesignModeV2Visual@DCompTreeHost@@QEBAXXZ
    void CleanupDesignModeV2Visual() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAndReleaseInteropCompositor@DCompTreeHost@@QEAAXXZ
    void CloseAndReleaseInteropCompositor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitMainDevice@DCompTreeHost@@QEAAJ_N@Z
    long CommitMainDevice(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectXamlIslandTargetRoots@DCompTreeHost@@QEAAJXZ
    long ConnectXamlIslandTargetRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerVisualsEnabled@DCompTreeHost@@SA_NXZ
    static bool ContainerVisualsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerVisual@DCompTreeHost@@QEAAJPEAPEAUIContainerVisual@Composition@UI@Windows@@@Z
    long CreateContainerVisual(::Windows::UI::Composition::IContainerVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@DCompTreeHost@@QEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@IPEAUIDCompositionColorPartner@@MPEAVDCompSurface@@0301IIIIPEAPEAUIDCompositionPrimitivePartner@@@Z
    long CreatePrimitive(CMILMatrix const *, XRECTF_WH const *, unsigned int, IDCompositionColorPartner *, float, DCompSurface *, CMILMatrix const *, DCompSurface *, CMILMatrix const *, XRECTF_WH const *, unsigned int, unsigned int, unsigned int, unsigned int, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitiveContainer@DCompTreeHost@@QEAAJ_NPEAPEAUIUnknown@@@Z
    long CreatePrimitiveContainer(bool, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitiveGroup@DCompTreeHost@@QEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z
    long CreatePrimitiveGroup(IDCompositionPrimitiveGroupPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@DCompTreeHost@@QEAAJIIIII_N0PEAPEAVDCompSurface@@@Z
    long CreateSurface(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, bool, bool, DCompSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetForHandle@DCompTreeHost@@QEAAJPEAXPEAPEAUIDCompositionTarget@@@Z
    long CreateTargetForHandle(void *, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@DCompTreeHost@@QEAAJPEAPEAUIDCompositionTransform@@I0@Z
    long CreateTransformGroup(IDCompositionTransform * *, unsigned int, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@DCompTreeHost@@QEAAJPEAVHWCompNode@@IPEAPEAUIDCompVisual@DCompHelpers@@@Z
    long CreateVisual(HWCompNode *, unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualEx@DCompTreeHost@@QEAAXPEAVHWCompNode@@PEAUIDCompositionVisual2@@PEAPEAUIDCompVisual@DCompHelpers@@@Z
    void CreateVisualEx(HWCompNode *, IDCompositionVisual2*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectRoot@DCompTreeHost@@QEAAJIAEBUXRECTF_WH@@@Z
    long DisconnectRoot(unsigned int, XRECTF_WH const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDCompDevice@DCompTreeHost@@QEAAJXZ
    long EnsureDCompDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLegacyDeviceSurface@DCompTreeHost@@QEAAJPEAVDCompSurface@@II@Z
    long EnsureLegacyDeviceSurface(DCompSurface *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureResources@DCompTreeHost@@QEAAJXZ
    long EnsureResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRootConnected@DCompTreeHost@@QEAAXXZ
    void EnsureRootConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureXamlIslandTargetRoots@DCompTreeHost@@QEAAJXZ
    long EnsureXamlIslandTargetRoots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeDWMSnapshot@DCompTreeHost@@QEAAJXZ
    long FreezeDWMSnapshot();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainSurfaceFactory@DCompTreeHost@@QEBAPEAUIDCompositionSurfaceFactoryPartner@@XZ
    IDCompositionSurfaceFactoryPartner * GetMainSurfaceFactory() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@DCompTreeHost@@QEBAIXZ
    unsigned int GetMaxTextureSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPathFactory@DCompTreeHost@@QEAAPEAUICompositionPathFactory@Composition@UI@Windows@@XZ
    ::Windows::UI::Composition::ICompositionPathFactory * GetPathFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemBackdropBrush@DCompTreeHost@@QEAAJPEAPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long GetSystemBackdropBrush(::Windows::UI::Composition::ICompositionBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDescendantWithKeepAliveCount@DCompTreeHost@@QEBA_NPEAVCUIElement@@@Z
    bool HasDescendantWithKeepAliveCount(CUIElement *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTransparentForInputTag@DCompTreeHost@@SA_NPEAUIVisual@Composition@UI@Windows@@@Z
    static bool HasTransparentForInputTag(::Windows::UI::Composition::IVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeepVisible@DCompTreeHost@@QEAA_NPEAVCUIElement@@@Z
    bool IsKeepVisible(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTargetWindowCloaked@DCompTreeHost@@QEAA_NXZ
    bool IsTargetWindowCloaked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowLayoutComplete@DCompTreeHost@@QEAAJAEAVCWindowRenderTarget@@@Z
    long NotifyWindowLayoutComplete(CWindowRenderTarget &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@DCompTreeHost@@QEAAJXZ
    long OfferResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSurfaceFactoryCreated@DCompTreeHost@@QEAAJPEAVDCompSurfaceFactory@@@Z
    long OnSurfaceFactoryCreated(DCompSurfaceFactory *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimResources@DCompTreeHost@@QEAAJPEAI@Z
    long ReclaimResources(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseGraphicsResources@DCompTreeHost@@QEAAXXZ
    void ReleaseGraphicsResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@DCompTreeHost@@QEAAJ_N@Z
    long ReleaseResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveElementWithKeepAliveCount@DCompTreeHost@@QEAAXPEAVCUIElement@@@Z
    void RemoveElementWithKeepAliveCount(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveXamlIslandTarget@DCompTreeHost@@QEAAXPEAVCXamlIslandRoot@@@Z
    void RemoveXamlIslandTarget(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestKeepAliveForHiddenEventHandlersInSubtree@DCompTreeHost@@QEAAXPEAVCUIElement@@@Z
    void RequestKeepAliveForHiddenEventHandlersInSubtree(CUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackground@DCompTreeHost@@QEAAJAEBUXRECTF_WH@@I@Z
    long SetBackground(XRECTF_WH const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLegacyFullScreenMedia@DCompTreeHost@@QEAAJPEAXPEAUXRECTF_WH@@@Z
    long SetLegacyFullScreenMedia(void *, XRECTF_WH *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@DCompTreeHost@@QEAAJPEAVHWCompTreeNode@@@Z
    long SetRoot(HWCompTreeNode *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdropBrush@DCompTreeHost@@QEAAJPEAUICompositionBrush@Composition@UI@Windows@@@Z
    long SetSystemBackdropBrush(::Windows::UI::Composition::ICompositionBrush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTag@DCompTreeHost@@SAXPEAUIVisual@Composition@UI@Windows@@PEBGM@Z
    static void SetTag(::Windows::UI::Composition::IVisual *, unsigned short const *, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTracingCookie@DCompTreeHost@@SAIPEAUIInspectable@@W4TracingCookieCategory@1@@Z
    static unsigned int SetTracingCookie(IInspectable *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackEffectiveVisibility@DCompTreeHost@@QEAAXPEAVCUIElement@@_N@Z
    void SetTrackEffectiveVisibility(CUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrackKeepVisible@DCompTreeHost@@QEAAXPEAVCUIElement@@_N@Z
    void SetTrackKeepVisible(CUIElement *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentForInputTag@DCompTreeHost@@SAXPEAUIVisual@Composition@UI@Windows@@_N@Z
    static void SetTransparentForInputTag(::Windows::UI::Composition::IVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepVisible@DCompTreeHost@@QEAA_NPEAVCUIElement@@@Z
    bool ShouldKeepVisible(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldKeepVisible@DCompTreeHost@@QEBA_NPEAVCUIElement@@0@Z
    bool ShouldKeepVisible(CUIElement *, CUIElement *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpriteVisualsEnabled@DCompTreeHost@@SA_NXZ
    static bool SpriteVisualsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronousCompTreeUpdatesEnabled@DCompTreeHost@@SA_NXZ
    static bool SynchronousCompTreeUpdatesEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAtlasHintForRequest@DCompTreeHost@@QEAAJII@Z
    long UpdateAtlasHintForRequest(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDebugSettings@DCompTreeHost@@QEAAJIII@Z
    long UpdateDebugSettings(unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExplicitAtlasHint@DCompTreeHost@@QEAAJXZ
    long UpdateExplicitAtlasHint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateImplicitShowHideAnimations@DCompTreeHost@@QEAAXXZ
    void UpdateImplicitShowHideAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUIThreadCounters@DCompTreeHost@@QEAAJIMI@Z
    long UpdateUIThreadCounters(unsigned int, float, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateXamlIslandTargetSize@DCompTreeHost@@QEAAXPEAVCXamlIslandRoot@@@Z
    void UpdateXamlIslandTargetSize(CXamlIslandRoot *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualDebugTagsEnabled@DCompTreeHost@@SA_NXZ
    static bool VisualDebugTagsEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WUCShapesEnabled@DCompTreeHost@@SA_NXZ
    static bool WUCShapesEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@DCompTreeHost@@QEAAJXZ
    long WaitForCommitCompletion();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAndCachePrimaryMonitorSize@DCompTreeHost@@AEAAXXZ
    void ComputeAndCachePrimaryMonitorSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameRatePrimitive@DCompTreeHost@@AEAAJIMIPEAPEAUIDCompositionPrimitivePartner@@@Z
    long CreateFrameRatePrimitive(unsigned int, float, unsigned int, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualTreeCompositionIslandAdapter@DCompTreeHost@@AEAAXXZ
    void CreateVisualTreeCompositionIslandAdapter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWinRTInteropCompositionDevice@DCompTreeHost@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long CreateWinRTInteropCompositionDevice(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompTreeHost@@AEAA@PEAVWindowsGraphicsDeviceManager@@@Z
    DCompTreeHost(WindowsGraphicsDeviceManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnimationTrackingAppId@DCompTreeHost@@AEAAJXZ
    long EnsureAnimationTrackingAppId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTextFormat@DCompTreeHost@@AEAAJXZ
    long EnsureTextFormat();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioInfo@DCompTreeHost@@AEAAAEAUAnimationScenarioInfo@1@_K@Z
    WindissectOpaque & GetAnimationScenarioInfo(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreServicesNoRef@DCompTreeHost@@AEBAPEAVCCoreServices@@XZ
    CCoreServices * GetCoreServicesNoRef() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveVisibilityTracker@DCompTreeHost@@AEBA?AUEffectiveVisibilityTracker@@PEAVCUIElement@@@Z
    EffectiveVisibilityTracker GetEffectiveVisibilityTracker(CUIElement *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteropVisualAndView@DCompTreeHost@@AEAA?AV?$ComPtr@UICompositionVisual@Private@Foundation@Windows@@@WRL@Microsoft@@PEAUIDCompositionVisual2@@AEBU_GUID@@PEAPEAX@Z
    WindissectOpaque GetInteropVisualAndView(IDCompositionVisual2*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDCompTarget@DCompTreeHost@@AEAA_NXZ
    bool HasDCompTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideUIThreadCounters@DCompTreeHost@@AEAAJXZ
    long HideUIThreadCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateBackgroundVisual@DCompTreeHost@@AEAAJPEAVDCompVisual@@AEBUXRECTF_WH@@I@Z
    long PopulateBackgroundVisual(DCompVisual *, XRECTF_WH const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisualTreeCompositionIslandAdapter@DCompTreeHost@@AEAAXXZ
    void ReleaseVisualTreeCompositionIslandAdapter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootForCorrectContext@DCompTreeHost@@AEAAJPEAUIDCompositionVisual2@@@Z
    long SetRootForCorrectContext(IDCompositionVisual2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetHelper@DCompTreeHost@@AEAAJXZ
    long SetTargetHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowUIThreadCounters@DCompTreeHost@@AEAAJXZ
    long ShowUIThreadCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAtlasHint@DCompTreeHost@@AEAAJXZ
    long UpdateAtlasHint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEffectiveVisibilityTracker@DCompTreeHost@@AEAAXPEAVCUIElement@@@Z
    void UpdateEffectiveVisibilityTracker(CUIElement *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompTreeHost@@EEAA@XZ
    virtual ~DCompTreeHost();
};
