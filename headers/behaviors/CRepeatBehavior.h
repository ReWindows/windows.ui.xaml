#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CRepeatBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRepeatBehavior@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CRepeatBehavior@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueWrapper@CRepeatBehavior@@QEBA?AV?$xref_ptr@V?$PropertyValueObjectWrapper@VRepeatBehaviorVO@@@Flyweight@@@@XZ
    WindissectOpaque ValueWrapper() const;
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRepeatBehavior@@AEAA@PEAVCCoreServices@@@Z
    CRepeatBehavior(CCoreServices *);
};
