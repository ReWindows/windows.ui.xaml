#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CBrushCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CBrushCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CBrushCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBrushCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CBrushCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CBrushCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CBrushCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBrushCollection@@UEAA@XZ
    virtual ~CBrushCollection();
};
