#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CRectangle {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CRectangle@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRectangle@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualHeight@CRectangle@@UEAAMXZ
    virtual float GetActualHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWidth@CRectangle@@UEAAMXZ
    virtual float GetActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRectangle@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRasterizerPath@CRectangle@@UEAAJXZ
    virtual long UpdateRasterizerPath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRenderGeometry@CRectangle@@UEAAJXZ
    virtual long UpdateRenderGeometry();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CRectangle@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanStretchGeometry@CRectangle@@MEBA_NXZ
    virtual bool CanStretchGeometry() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CRectangle@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
};
