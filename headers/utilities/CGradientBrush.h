#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CGradientBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CGradientBrush@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOpaque@CGradientBrush@@QEBAIXZ
    unsigned int IsOpaque() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGradientBrush@@IEAA@PEAVCCoreServices@@@Z
    CGradientBrush(CCoreServices *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGradientBrush@@IEAA@AEBV0@AEAJ@Z
    CGradientBrush(CGradientBrush const &, long &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAcceleratedGradientStops@CGradientBrush@@IEAAJPEAPEAUXcpGradientStop@@PEAIPEAW4Value@InterpolationMode@@PEAW43GradientWrapMode@@@Z
    long GetAcceleratedGradientStops(XcpGradientStop * *, unsigned int *, int *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGradientBrush@@MEAA@XZ
    virtual ~CGradientBrush();
};
