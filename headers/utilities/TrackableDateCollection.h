#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace DirectUI {
class TrackableDateCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@TrackableDateCollection@DirectUI@@UEAAJUDateTime@Foundation@Windows@@@Z
    virtual long Append(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TrackableDateCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountOf@TrackableDateCollection@DirectUI@@QEAAJUDateTime@Foundation@Windows@@PEAI@Z
    long CountOf(WindissectOpaque, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@TrackableDateCollection@DirectUI@@UEAAJUDateTime@Foundation@Windows@@PEAIPEAE@Z
    virtual long IndexOf(WindissectOpaque, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@TrackableDateCollection@DirectUI@@UEAAJIUDateTime@Foundation@Windows@@@Z
    virtual long InsertAt(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@TrackableDateCollection@DirectUI@@QEAAJUDateTime@Foundation@Windows@@PEAI@Z
    long RemoveAll(WindissectOpaque, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@TrackableDateCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@TrackableDateCollection@DirectUI@@UEAAJIUDateTime@Foundation@Windows@@@Z
    virtual long SetAt(unsigned int, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TrackableDateCollection@DirectUI@@QEAA@XZ
    TrackableDateCollection();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TrackableDateCollection@DirectUI@@UEAA@XZ
    virtual ~TrackableDateCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCollectionChanging@TrackableDateCollection@DirectUI@@AEAAJW4TrackableDateCollection_CollectionChanging@2@UDateTime@Foundation@Windows@@@Z
    long RaiseCollectionChanging(int, WindissectOpaque);
};
} // namespace DirectUI
