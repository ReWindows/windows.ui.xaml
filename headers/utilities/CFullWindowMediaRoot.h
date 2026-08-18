#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CFullWindowMediaRoot {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFullWindowMediaRoot@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenInRenderOrder@CFullWindowMediaRoot@@UEAAXPEAPEAPEAVCUIElement@@PEAI@Z
    virtual void GetChildrenInRenderOrder(CUIElement * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CFullWindowMediaRoot@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CFullWindowMediaRoot@@UEAAJXZ
    virtual long InitInstance();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@CFullWindowMediaRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long ArrangeOverride(XSIZEF, XSIZEF &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CFullWindowMediaRoot@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFullWindowMediaRoot@@MEAA@XZ
    virtual ~CFullWindowMediaRoot();
};
