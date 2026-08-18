#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CKeyTime {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CKeyTime@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CKeyTime@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueWrapper@CKeyTime@@QEBA?AV?$xref_ptr@V?$PropertyValueObjectWrapper@VKeyTimeVO@@@Flyweight@@@@XZ
    WindissectOpaque ValueWrapper() const;
};
