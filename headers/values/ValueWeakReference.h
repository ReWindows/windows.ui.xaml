#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class ValueWeakReference {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ValueWeakReference@DirectUI@@SAJPEAUIInspectable@@PEAPEAU3@@Z
    static long Create(IInspectable *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInspectable@ValueWeakReference@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetInspectable(IInspectable * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ValueWeakReference@DirectUI@@AEAA@XZ
    ValueWeakReference();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValueWeakReference@DirectUI@@EEAA@XZ
    virtual ~ValueWeakReference();
};
} // namespace DirectUI
