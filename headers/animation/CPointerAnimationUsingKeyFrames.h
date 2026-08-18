#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CPointerAnimationUsingKeyFrames {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPointerAnimationUsingKeyFrames@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDurationForProgress@CPointerAnimationUsingKeyFrames@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetDurationForProgress(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNaturalDuration@CPointerAnimationUsingKeyFrames@@UEAAXPEAW4DurationType@DirectUI@@PEAM@Z
    virtual void GetNaturalDuration(int *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPointerAnimationUsingKeyFrames@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDurationForProgressDifferent@CPointerAnimationUsingKeyFrames@@UEBAIXZ
    virtual unsigned int IsDurationForProgressDifferent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFinite@CPointerAnimationUsingKeyFrames@@UEAAIXZ
    virtual unsigned int IsFinite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBegin@CPointerAnimationUsingKeyFrames@@UEAAJXZ
    virtual long OnBegin();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRequestTicksWhileActive@CPointerAnimationUsingKeyFrames@@MEAA_NXZ
    virtual bool CanRequestTicksWhileActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLocalTarget@CPointerAnimationUsingKeyFrames@@MEAAJPEAVCCoreServices@@PEAVCTimeline@@@Z
    virtual long ResolveLocalTarget(CCoreServices *, CTimeline *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPointerAnimationUsingKeyFrames@@AEAA@PEAVCCoreServices@@@Z
    CPointerAnimationUsingKeyFrames(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLocalProgressAndTime@CPointerAnimationUsingKeyFrames@@EEAAXNNW4DurationType@DirectUI@@MPEAVCOptionalDouble@@_NPEAI@Z
    virtual void ComputeLocalProgressAndTime(double, double, int, float, COptionalDouble *, bool, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPointerAnimationUsingKeyFrames@@EEAA@XZ
    virtual ~CPointerAnimationUsingKeyFrames();
};
