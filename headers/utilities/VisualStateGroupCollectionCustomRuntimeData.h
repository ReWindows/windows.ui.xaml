#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class VisualStateGroupCollectionCustomRuntimeData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupVisualStateIndex@VisualStateGroupCollectionCustomRuntimeData@@QEBAII@Z
    unsigned int GetGroupVisualStateIndex(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShare@VisualStateGroupCollectionCustomRuntimeData@@UEBA_NXZ
    virtual bool ShouldShare() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@VisualStateGroupCollectionCustomRuntimeData@@UEBAJ_NAEAVxstring_ptr@@@Z
    virtual long ToString(bool, xstring_ptr &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVisualStateIndex@VisualStateGroupCollectionCustomRuntimeData@@QEBA_NPEBGPEAI@Z
    bool TryGetVisualStateIndex(unsigned short const *, unsigned int *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualStateGroupCollectionCustomRuntimeData@@QEAA@XZ
    VisualStateGroupCollectionCustomRuntimeData();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualStateGroupCollectionCustomRuntimeData@@UEAA@XZ
    virtual ~VisualStateGroupCollectionCustomRuntimeData();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndexForSerialization@VisualStateGroupCollectionCustomRuntimeData@@MEBA?AW4CustomWriterRuntimeDataTypeIndex@@AEBUTargetOSVersion@@@Z
    virtual int GetTypeIndexForSerialization(TargetOSVersion const &) const;
};
