#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CPolygon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPolygon@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPolygon@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizerPath@CPolygon@@UEAAJXZ
    virtual long UpdateRasterizerPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderGeometry@CPolygon@@UEAAJXZ
    virtual long UpdateRenderGeometry();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPolygon@@MEAA@XZ
    virtual ~CPolygon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGeometry@CPolygon@@AEAAJXZ
    long EnsureGeometry();
};
