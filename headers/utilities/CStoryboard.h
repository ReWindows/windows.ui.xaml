#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
class CStoryboard {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationTrackingBeginScenario@CStoryboard@@QEAAXPEAVCTransition@@PEAVCDependencyObject@@@Z
    void AnimationTrackingBeginScenario(CTransition *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CStoryboard@@QEAAJXZ
    long Begin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPrivate@CStoryboard@@QEAAJI@Z
    long BeginPrivate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CStoryboard@@QEAAJXZ
    long Complete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeStateImpl@CStoryboard@@UEAAJAEBUComputeStateParams@@AEAU2@PEAI_N2@Z
    virtual long ComputeStateImpl(ComputeStateParams const &, ComputeStateParams &, unsigned int *, bool, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CStoryboard@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureIndependentStartDelta@CStoryboard@@UEAAXN@Z
    virtual void EnsureIndependentStartDelta(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@CStoryboard@@QEAAJPEAW4DurationType@DirectUI@@PEAM@Z
    long GetDuration(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStandardNameScopeParent@CStoryboard@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetStandardNameScopeParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CStoryboard@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInActiveState@CStoryboard@@UEBAIXZ
    virtual unsigned int IsInActiveState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInStoppedState@CStoryboard@@UEAAIXZ
    virtual unsigned int IsInStoppedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CStoryboard@@UEAAJXZ
    virtual long OnBegin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@CStoryboard@@QEAAJXZ
    long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PausePrivate@CStoryboard@@QEAAJXZ
    long PausePrivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CStoryboard@@QEAAJXZ
    long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumePrivate@CStoryboard@@QEAAJXZ
    long ResumePrivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CStoryboard@@QEAAJAEBVCValue@@@Z
    long Seek(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekAlignedToLastTick@CStoryboard@@QEAAJPEAVCTimeSpan@@I@Z
    long SeekAlignedToLastTick(CTimeSpan *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekAlignedToLastTickPublic@CStoryboard@@QEAAJAEBVCValue@@@Z
    long SeekAlignedToLastTickPublic(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekPrivate@CStoryboard@@QEAAJPEAVCTimeSpan@@@Z
    long SeekPrivate(CTimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SkipToFill@CStoryboard@@QEAAJXZ
    long SkipToFill();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CStoryboard@@QEAAJXZ
    long Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopPrivate@CStoryboard@@QEAAJXZ
    long StopPrivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizeDCompAnimationAfterResume@CStoryboard@@UEAAXN@Z
    virtual void SynchronizeDCompAnimationAfterResume(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimation@CStoryboard@@UEAAJAEBUComputeStateParams@@AEAU2@NW4DurationType@DirectUI@@MAEBVCOptionalDouble@@PEAI@Z
    virtual long UpdateAnimation(ComputeStateParams const &, ComputeStateParams &, double, int, float, COptionalDouble const &, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStoryboard@@UEAA@XZ
    virtual ~CStoryboard();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimationShared@CStoryboard@@MEAAXPEAVDCompAnimationConversionContextWUC@@_NM@Z
    virtual void MakeWUCAnimationShared(DCompAnimationConversionContextWUC *, bool, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStartTracking@CStoryboard@@AEAAXXZ
    void AnimationStartTracking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationStopTracking@CStoryboard@@AEAAXXZ
    void AnimationStopTracking();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInternal@CStoryboard@@AEAAJII@Z
    long CompleteInternal(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTelemetryName@CStoryboard@@AEAAXXZ
    void EnsureTelemetryName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyForTracking@CStoryboard@@AEAA_KXZ
    uint64_t GetKeyForTracking();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameForTracking@CStoryboard@@AEAA?AVxstring_ptr@@PEAVCTransition@@PEAVCUIElement@@PEAVCDependencyObject@@PEAG@Z
    xstring_ptr GetNameForTracking(CTransition *, CUIElement *, CDependencyObject *, unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationTrackingAllowed@CStoryboard@@AEAAIXZ
    unsigned int IsAnimationTrackingAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SeekInternal@CStoryboard@@AEAAJPEAVCTimeSpan@@I@Z
    long SeekInternal(CTimeSpan *, unsigned int);
};
