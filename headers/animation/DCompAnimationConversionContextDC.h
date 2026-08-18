#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class DCompAnimationConversionContextDC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAnimationsToList@DCompAnimationConversionContextDC@@QEAAXPEAV1@@Z
    void AddAnimationsToList(DCompAnimationConversionContextDC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFreezeSegment@DCompAnimationConversionContextDC@@QEAAXXZ
    void AddFreezeSegment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFreezeSegment@DCompAnimationConversionContextDC@@QEAAXNPEAUIDCompositionAnimation@@@Z
    void AddFreezeSegment(double, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInitialSegmentIfNeeded@DCompAnimationConversionContextDC@@QEAAXNPEAUIDCompositionAnimation@@@Z
    void AddInitialSegmentIfNeeded(double, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLinearSegment@DCompAnimationConversionContextDC@@QEAAXMMNNPEAUIDCompositionAnimation@@@Z
    void AddLinearSegment(float, float, double, double, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeatSegment@DCompAnimationConversionContextDC@@QEAAXAEBVRepeatBehaviorVO@@@Z
    void AddRepeatSegment(RepeatBehaviorVO const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReverseSegment@DCompAnimationConversionContextDC@@QEAAXXZ
    void AddReverseSegment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationInstance@DCompAnimationConversionContextDC@@QEAA?AV?$ComPtr@UIDCompositionAnimationInstancePartner@@@WRL@Microsoft@@PEAUIDCompositionAnimation@@@Z
    WindissectOpaque CreateAnimationInstance(IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDummyTarget@DCompAnimationConversionContextDC@@QEAA?AV?$ComPtr@UIDCompositionTranslateTransform@@@WRL@Microsoft@@PEAUIDCompositionAnimationInstancePartner@@@Z
    WindissectOpaque CreateDummyTarget(IDCompositionAnimationInstancePartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmptyAnimation@DCompAnimationConversionContextDC@@QEAA?AV?$ComPtr@UIDCompositionAnimation@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateEmptyAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearDoubleAnimation@DCompAnimationConversionContextDC@@QEAA?AV?$ComPtr@UIDCompositionAnimation@@@WRL@Microsoft@@MMMN@Z
    WindissectOpaque CreateLinearDoubleAnimation(float, float, float, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompAnimationConversionContextDC@@QEAA@PEAUIDCompositionDesktopDevicePartner3@@@Z
    DCompAnimationConversionContextDC(IDCompositionDesktopDevicePartner3*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DCompAnimationConversionContextDC@@QEAA@PEAV0@@Z
    DCompAnimationConversionContextDC(DCompAnimationConversionContextDC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHandoff@DCompAnimationConversionContextDC@@QEAAXN_NPEAUIDCompositionAnimation@@@Z
    void SetHandoff(double, bool, IDCompositionAnimation *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompAnimationConversionContextDC@@QEAA@XZ
    ~DCompAnimationConversionContextDC();
};
