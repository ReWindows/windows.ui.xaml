#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CPolyline {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolyline@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPolyline@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizerPath@CPolyline@@UEAAJXZ
    virtual long UpdateRasterizerPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderGeometry@CPolyline@@UEAAJXZ
    virtual long UpdateRenderGeometry();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolyline@@MEAA@XZ
    virtual ~CPolyline();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGeometry@CPolyline@@AEAAJXZ
    long EnsureGeometry();
};
