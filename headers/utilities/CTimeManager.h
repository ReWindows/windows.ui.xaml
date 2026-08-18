#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class CTimeManager {
public:
    class TimelineListNode;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddActiveWUCAnimation@CTimeManager@@QEAA_NPEAVCDependencyObject@@W4KnownPropertyIndex@@PEAUICompositionScopedBatch@Composition@UI@Windows@@PEAUICompositionAnimatorPartner@567@@Z
    bool AddActiveWUCAnimation(CDependencyObject *, int, ::Windows::UI::Composition::ICompositionScopedBatch *, ::Windows::UI::Composition::ICompositionAnimatorPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetDO@CTimeManager@@QEAAXPEAVCDependencyObject@@@Z
    void AddTargetDO(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimeline@CTimeManager@@QEAAJPEAVCTimeline@@@Z
    long AddTimeline(CTimeline *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CTimeManager@@UEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnimationOnProperty@CTimeManager@@QEAAXAEBV?$weakref_ptr@VCDependencyObject@@@xref@@W4KnownPropertyIndex@@@Z
    void ClearAnimationOnProperty(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachWUCCompletedHandler@CTimeManager@@QEAAXPEAUICompositionScopedBatch@Composition@UI@Windows@@@Z
    void DetachWUCCompletedHandler(::Windows::UI::Composition::ICompositionScopedBatch *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationOnProperty@CTimeManager@@QEAA?AV?$xref_ptr@VCAnimation@@@@AEBV?$weakref_ptr@VCDependencyObject@@@xref@@W4KnownPropertyIndex@@@Z
    WindissectOpaque GetAnimationOnProperty(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstimatedNextTickTime@CTimeManager@@QEBANXZ
    double GetEstimatedNextTickTime() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIThreadFrameDelta@CTimeManager@@QEBANXZ
    double GetUIThreadFrameDelta() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasActiveAnimations@CTimeManager@@QEAAIXZ
    unsigned int HasActiveAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkWUCAnimationCompleted@CTimeManager@@QEAAXPEAVCDependencyObject@@W4KnownPropertyIndex@@@Z
    void MarkWUCAnimationCompleted(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWUCAnimationCompleted@CTimeManager@@QEAAJPEAUIInspectable@@PEAUICompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Z
    long OnWUCAnimationCompleted(IInspectable *, ::Windows::UI::Composition::ICompositionBatchCompletedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTimeManager@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIndependentStartTimes@CTimeManager@@QEAAXN@Z
    void SetIndependentStartTimes(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldFailFast@CTimeManager@@SA_NXZ
    static bool ShouldFailFast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWUCAnimation@CTimeManager@@SAXPEAUICompositor@Composition@UI@Windows@@PEAUICompositionObjectPartner@345@PEBGPEAUICompositionAnimation@345@PEAVCDependencyObject@@W4KnownPropertyIndex@@PEAV1@@Z
    static void StartWUCAnimation(::Windows::UI::Composition::ICompositor *, ::Windows::UI::Composition::ICompositionObjectPartner *, unsigned short const *, ::Windows::UI::Composition::ICompositionAnimation *, CDependencyObject *, int, CTimeManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllTimelinesAfterTest@CTimeManager@@QEAAXXZ
    void StopAllTimelinesAfterTest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tick@CTimeManager@@QEAAJ_NIIPEAUIDCompositionDesktopDevicePartner3@@PEAUICompositor@Composition@UI@Windows@@PEAUIFrameScheduler@@0PEA_N4@Z
    long Tick(bool, unsigned int, unsigned int, IDCompositionDesktopDevicePartner3*, ::Windows::UI::Composition::ICompositor *, IFrameScheduler *, bool, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIATargets@CTimeManager@@QEAAJXZ
    long UpdateIATargets();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetDOs@CTimeManager@@QEAAXPEAUICompositor@Composition@UI@Windows@@@Z
    void UpdateTargetDOs(::Windows::UI::Composition::ICompositor *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimeManager@@AEAA@PEAVCCoreServices@@PEAUIPALTickableClock@@@Z
    CTimeManager(CCoreServices *, IPALTickableClock *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTimelineList@CTimeManager@@AEAAXPEAUTimelineListNode@1@@Z
    void DeleteTimelineList(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTimeStarted@CTimeManager@@AEAAXXZ
    void EnsureTimeStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTimeline@CTimeManager@@AEAAJPEAVCTimeline@@PEAUTimelineListNode@1@@Z
    long RemoveTimeline(CTimeline *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetWUCCompletedEvents@CTimeManager@@AEAAXXZ
    void ResetWUCCompletedEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAllIATargets@CTimeManager@@CAJAEBUIACounters@@0PEAVCDependencyObject@@@Z
    static long UpdateAllIATargets(IACounters const &, IACounters const &, CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimeManager@@EEAA@XZ
    virtual ~CTimeManager();
};
