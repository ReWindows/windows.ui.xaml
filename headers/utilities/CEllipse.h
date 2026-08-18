#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CEllipse {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEllipse@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEllipse@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizerPath@CEllipse@@UEAAJXZ
    virtual long UpdateRasterizerPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderGeometry@CEllipse@@UEAAJXZ
    virtual long UpdateRenderGeometry();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CEllipse@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanStretchGeometry@CEllipse@@MEBA_NXZ
    virtual bool CanStretchGeometry() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CEllipse@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSmoothJoin@CEllipse@@MEBA_NXZ
    virtual bool NeedsSmoothJoin() const;
};
