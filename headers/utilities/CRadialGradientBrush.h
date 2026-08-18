#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CRadialGradientBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CRadialGradientBrush@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRadialGradientBrush@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushSpan@CRadialGradientBrush@@UEAAJPEBVCMILMatrix@@PEBUXRECTF_WH@@PEAPEAUIBrushSpan@@@Z
    virtual long CreateBrushSpan(CMILMatrix const *, XRECTF_WH const *, IBrushSpan * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?D2DEnsureDeviceIndependentResources@CRadialGradientBrush@@UEAAJAEBUD2DPrecomputeParams@@PEBVCMILMatrix@@PEBUXRECTF_RB@@PEAUAcceleratedBrushParams@@@Z
    virtual long D2DEnsureDeviceIndependentResources(D2DPrecomputeParams const &, CMILMatrix const *, XRECTF_RB const *, AcceleratedBrushParams *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrintBrush@CRadialGradientBrush@@UEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    virtual long GetPrintBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRadialGradientBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcceleratedBrush@CRadialGradientBrush@@UEAAJAEBUD2DRenderParams@@@Z
    virtual long UpdateAcceleratedBrush(D2DRenderParams const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRadialGradientBrush@@IEAA@AEBV0@AEAJ@Z
    CRadialGradientBrush(CRadialGradientBrush const &, long &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcceleratedBrush@CRadialGradientBrush@@AEAAJAEBUD2DRenderParams@@PEAPEAUIPALAcceleratedBrush@@@Z
    long CreateAcceleratedBrush(D2DRenderParams const &, IPALAcceleratedBrush * *);
};
