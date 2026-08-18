#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 44 member(s).
class CAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTimelinePropertiesPublicWUCAPI@CAnimation@@QEAAXM@Z
    void ApplyTimelinePropertiesPublicWUCAPI(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeIteration@CAnimation@@UEAAJXZ
    virtual long FinalizeIteration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletedEvent@CAnimation@@UEAAJXZ
    virtual long FireCompletedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTargets@CAnimation@@QEAAJPEAV?$weakref_ptr@VCDependencyObject@@@xref@@PEAPEBVCDependencyProperty@@@Z
    long GetAnimationTargets(WindissectOpaque *, CDependencyProperty const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalDuration@CAnimation@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetNaturalDuration(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CAnimation@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CAnimation@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsAnimation@CAnimation@@UEAAIXZ
    virtual unsigned int IsAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompAnimationHelper@CAnimation@@SA?AV?$ComPtr@UIDCompositionAnimation@@@WRL@Microsoft@@PEAVDCompAnimationConversionContextDC@@PEAVCDependencyObject@@NMMM_N2@Z
    static WindissectOpaque MakeDCompAnimationHelper(DCompAnimationConversionContextDC *, CDependencyObject *, double, float, float, float, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDCompKeyFrameAnimationsHelper@CAnimation@@SA?AV?$ComPtr@UIDCompositionAnimation@@@WRL@Microsoft@@PEAVDCompAnimationConversionContextDC@@PEAVCKeyFrameCollection@@M_NH@Z
    static WindissectOpaque MakeDCompKeyFrameAnimationsHelper(DCompAnimationConversionContextDC *, CKeyFrameCollection *, float, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapToDCompAnimationProperty@CAnimation@@SA?AW4KnownPropertyIndex@@W42@@Z
    static int MapToDCompAnimationProperty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyThemeChangedCore@CAnimation@@UEAAJW4Theme@Theming@@_N@Z
    virtual long NotifyThemeChangedCore(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CAnimation@@UEAAJXZ
    virtual long OnBegin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromTimeManager@CAnimation@@UEAAJXZ
    virtual long OnRemoveFromTimeManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBaseValuesFromTargetOrHandoff@CAnimation@@QEAAJPEAV1@AEBV?$weakref_ptr@VCDependencyObject@@@xref@@PEBW4KnownPropertyIndex@@@Z
    long ReadBaseValuesFromTargetOrHandoff(CAnimation *, WindissectOpaque const &, int const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValue@CAnimation@@UEAAXXZ
    virtual void ReadLegacyDCompAnimationValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnimationOnTarget@CAnimation@@QEAAJXZ
    long RegisterAnimationOnTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseControlOfTarget@CAnimation@@QEAAXXZ
    void ReleaseControlOfTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDCompResources@CAnimation@@UEAAXXZ
    virtual void ReleaseDCompResources();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CAnimation@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWUCAutoReverse@CAnimation@@UEAAXXZ
    virtual void SetWUCAutoReverse();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWUCBeginTime@CAnimation@@UEAAXN@Z
    virtual void SetWUCBeginTime(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWUCRepeat@CAnimation@@UEAAXW4AnimationIterationBehavior@Composition@UI@Windows@@M@Z
    virtual void SetWUCRepeat(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDiscardDCompAnimationOnDetach@CAnimation@@UEAA_NXZ
    virtual bool ShouldDiscardDCompAnimationOnDetach();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimation@CAnimation@@UEAAJAEBUComputeStateParams@@AEAU2@NW4DurationType@DirectUI@@MAEBVCOptionalDouble@@PEAI@Z
    virtual long UpdateAnimation(ComputeStateParams const &, ComputeStateParams &, double, int, float, COptionalDouble const &, unsigned int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimation@@IEAA@PEAVCCoreServices@@@Z
    CAnimation(CCoreServices *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDCompAnimationDurationInSeconds@CAnimation@@IEAAMM_N@Z
    float GetDCompAnimationDurationInSeconds(float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasLegacyDCompAnimation@CAnimation@@MEAA_NXZ
    virtual bool HasLegacyDCompAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementInCachedSubtree@CAnimation@@IEBAIPEAVCUIElement@@I@Z
    unsigned int IsElementInCachedSubtree(CUIElement *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelfClippedKeyFrameAnimation@CAnimation@@IEAA_NXZ
    bool IsSelfClippedKeyFrameAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimation@CAnimation@@MEAAXPEAVDCompAnimationConversionContextWUC@@MM@Z
    virtual void MakeWUCAnimation(DCompAnimationConversionContextWUC *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeWUCAnimationShared@CAnimation@@MEAAXPEAVDCompAnimationConversionContextWUC@@_NM@Z
    virtual void MakeWUCAnimationShared(DCompAnimationConversionContextWUC *, bool, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostInterpolateValues@CAnimation@@MEAAXXZ
    virtual void PostInterpolateValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLegacyDCompAnimationValueVirtual@CAnimation@@MEAA_NXZ
    virtual bool ReadLegacyDCompAnimationValueVirtual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLocalTarget@CAnimation@@MEAAJPEAVCCoreServices@@PEAVCTimeline@@@Z
    virtual long ResolveLocalTarget(CCoreServices *, CTimeline *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWUCAnimationTelemetryString@CAnimation@@IEAAXPEAVDCompAnimationConversionContextWUC@@@Z
    void UpdateWUCAnimationTelemetryString(DCompAnimationConversionContextWUC *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimation@@MEAA@XZ
    virtual ~CAnimation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAnimationValueOperation@CAnimation@@AEAAJAEAVCValue@@W4AnimationValueOperation@1@I@Z
    long DoAnimationValueOperation(CValue &, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTickOnUIThread@CAnimation@@AEAAJ_NPEAI1@Z
    long ShouldTickOnUIThread(bool, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceAnimation@CAnimation@@AEAAXAEBW4AnimationValueOperation@1@PEAVCDependencyObject@@_N@Z
    void TraceAnimation(int const &, CDependencyObject *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceTickPausedAnimationHelper@CAnimation@@AEAAXXZ
    void TraceTickPausedAnimationHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnimationUsingKeyFrames@CAnimation@@AEAAJ_N@Z
    long UpdateAnimationUsingKeyFrames(bool);
};
