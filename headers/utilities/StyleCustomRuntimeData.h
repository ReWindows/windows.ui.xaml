#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
class StyleCustomRuntimeData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@StyleCustomRuntimeData@@UEBAJ_NAEAVxstring_ptr@@@Z
    virtual long ToString(bool, xstring_ptr &) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StyleCustomRuntimeData@@UEAA@XZ
    virtual ~StyleCustomRuntimeData();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndexForSerialization@StyleCustomRuntimeData@@MEBA?AW4CustomWriterRuntimeDataTypeIndex@@AEBUTargetOSVersion@@@Z
    virtual int GetTypeIndexForSerialization(TargetOSVersion const &) const;
};
