#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CEventTrigger {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CEventTrigger@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEventTrigger@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CEventTrigger@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CEventTrigger@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEventTrigger@@EEAA@XZ
    virtual ~CEventTrigger();
};
