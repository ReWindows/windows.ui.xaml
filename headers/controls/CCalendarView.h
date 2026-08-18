#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CCalendarView {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushNoRef@CCalendarView@@QEAAJIPEAPEAVCBrush@@@Z
    long GetBrushNoRef(unsigned int, CBrush * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CCalendarView@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CCalendarView@@UEAAJXZ
    virtual long InitInstance();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCalendarView@@IEAA@PEAVCCoreServices@@@Z
    CCalendarView(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCalendarView@@MEAA@XZ
    virtual ~CCalendarView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupThemeResourceBinding@CCalendarView@@AEAAJXZ
    long SetupThemeResourceBinding();
};
