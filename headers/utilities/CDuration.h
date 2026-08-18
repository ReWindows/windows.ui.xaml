#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class CDuration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDuration@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDuration@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueWrapper@CDuration@@QEBA?AV?$xref_ptr@V?$PropertyValueObjectWrapper@VDurationVO@@@Flyweight@@@@XZ
    WindissectOpaque ValueWrapper() const;
};
