#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CInternalTransform {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CInternalTransform@@UEAAJPEAPEAVCNoParentShareableDependencyObject@@@Z
    virtual long Clone(CNoParentShareableDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CInternalTransform@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CInternalTransform@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Inverse@CInternalTransform@@QEAAJPEAPEAVCGeneralTransform@@@Z
    long Inverse(CGeneralTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformPoints@CInternalTransform@@UEAAJPEAUXPOINTF@@0I@Z
    virtual long TransformPoints(XPOINTF *, XPOINTF *, unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInternalTransform@@MEAA@XZ
    virtual ~CInternalTransform();
};
