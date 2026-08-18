#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 36 member(s).
class CConnectedAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEventListener@CConnectedAnimation@@UEAAJUEventHandle@@PEAVCValue@@H1_N@Z
    virtual long AddEventListener(EventHandle, CValue *, int, CValue *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateCoordinatedEntrance@CConnectedAnimation@@QEAAJPEAVCUIElement@@@Z
    long AnimateCoordinatedEntrance(CUIElement *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectedAnimation@@QEAA@AEAVxstring_ptr@@PEAVCCoreServices@@PEAVCConnectedAnimationService@@@Z
    CConnectedAnimation(xstring_ptr &, CCoreServices *, CConnectedAnimationService *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConnectedAnimation@@QEAA@PEAVCCoreServices@@PEAV0@PEAVCConnectedAnimationService@@@Z
    CConnectedAnimation(CCoreServices *, CConnectedAnimation *, CConnectedAnimationService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CConnectedAnimation@@QEAAJXZ
    long Cancel();
    // Category: Method | Source: PE Export
    // Symbol: ?ControlsManagedPeerLifetime@CConnectedAnimation@@UEAAIXZ
    virtual unsigned int ControlsManagedPeerLifetime();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CConnectedAnimation@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@CConnectedAnimation@@UEBA_NXZ
    virtual bool IsActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleted@CConnectedAnimation@@QEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z
    long OnAnimationCompleted(IInspectable *, ::Windows::UI::Composition::ICompositionBatchCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloadingElement@CConnectedAnimation@@QEAAJPEAVCUIElement@@PEA_N@Z
    long OnUnloadingElement(CUIElement *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare@CConnectedAnimation@@QEAAJPEAVCUIElement@@@Z
    long Prepare(CUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEventListener@CConnectedAnimation@@UEAAJUEventHandle@@PEAVCValue@@@Z
    virtual long RemoveEventListener(EventHandle, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimationComponent@CConnectedAnimation@@QEAAJW4ConnectedAnimationComponent@Animation@Media@Xaml@UI@Windows@@PEAUICompositionAnimationBase@Composition@67@@Z
    long SetAnimationComponent(int, ::Windows::UI::Composition::ICompositionAnimationBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRaiseEvent@CConnectedAnimation@@UEAAIUEventHandle@@IPEAVCEventArgs@@@Z
    virtual unsigned int ShouldRaiseEvent(EventHandle, unsigned int, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeoutIfNecessary@CConnectedAnimation@@QEAAJPEA_K@Z
    long TimeoutIfNecessary(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStart@CConnectedAnimation@@QEAAJPEAVCUIElement@@PEAE@Z
    long TryStart(CUIElement *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreCommit@CConnectedAnimation@@QEAAJPEA_N0@Z
    long UpdatePreCommit(bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePreRenderWalk@CConnectedAnimation@@QEAAJXZ
    long UpdatePreRenderWalk();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConnectedAnimation@@UEAA@XZ
    virtual ~CConnectedAnimation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementInfo@CConnectedAnimation@@AEAAJAEAUConnectedAnimationElementInfo@@@Z
    long ClearElementInfo(ConnectedAnimationElementInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAnimationOffset@CConnectedAnimation@@AEAAXAEAUConnectedAnimationElementInfo@@0AEAUVector3@Numerics@Foundation@Windows@@@Z
    void ComputeAnimationOffset(ConnectedAnimationElementInfo &, ConnectedAnimationElementInfo &, WindissectOpaque&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertSourceBrushToClipped@CConnectedAnimation@@AEAAJXZ
    long ConvertSourceBrushToClipped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSnapshotBrush@CConnectedAnimation@@AEAAJAEAUConnectedAnimationElementInfo@@_N1@Z
    long CreateSnapshotBrush(ConnectedAnimationElementInfo &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletedEvent@CConnectedAnimation@@AEAAXXZ
    void FireCompletedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBaseAnimationSourceInfo@CConnectedAnimation@@AEAAXXZ
    void GetBaseAnimationSourceInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnapshotTransformInfo@CConnectedAnimation@@AEAAJAEAUConnectedAnimationElementInfo@@@Z
    long GetSnapshotTransformInfo(ConnectedAnimationElementInfo &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUnloadingElementAncestor@CConnectedAnimation@@AEAA_NPEAVCUIElement@@AEAUConnectedAnimationElementInfo@@@Z
    bool IsUnloadingElementAncestor(CUIElement *, ConnectedAnimationElementInfo &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CConnectedAnimation@@AEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCustomAnimation@CConnectedAnimation@@AEAAJPEAUICompositionObject@Composition@UI@Windows@@PEBGW4ConnectedAnimationComponent@Animation@Media@Xaml@45@MMUTimeSpan@Foundation@5@PEAUICompositionEasingFunction@345@PEAUICompositor@345@@Z
    long StartCustomAnimation(::Windows::UI::Composition::ICompositionObject *, unsigned short const *, int, float, float, WindissectOpaque, ::Windows::UI::Composition::ICompositionEasingFunction *, ::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartScalarAnimation@CConnectedAnimation@@AEAAJPEAUICompositionObject@Composition@UI@Windows@@PEBGMMUTimeSpan@Foundation@5@PEAUICompositionEasingFunction@345@PEAUICompositor@345@@Z
    long StartScalarAnimation(::Windows::UI::Composition::ICompositionObject *, unsigned short const *, float, float, WindissectOpaque, ::Windows::UI::Composition::ICompositionEasingFunction *, ::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSpriteAnimations@CConnectedAnimation@@AEAAJXZ
    long StartSpriteAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartVector3Animation@CConnectedAnimation@@AEAAJPEAUICompositionObject@Composition@UI@Windows@@PEBGUVector3@Numerics@Foundation@5@2UTimeSpan@85@PEAUICompositionEasingFunction@345@PEAUICompositor@345@@Z
    long StartVector3Animation(::Windows::UI::Composition::ICompositionObject *, unsigned short const *, WindissectOpaque, WindissectOpaque, WindissectOpaque, ::Windows::UI::Composition::ICompositionEasingFunction *, ::Windows::UI::Composition::ICompositor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryToCompleteAnimation@CConnectedAnimation@@AEAAJXZ
    long TryToCompleteAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualRectForClippedBrushes@CConnectedAnimation@@AEAAJXZ
    long UpdateVisualRectForClippedBrushes();
};
