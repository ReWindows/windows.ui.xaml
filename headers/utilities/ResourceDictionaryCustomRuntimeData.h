#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class ResourceDictionaryCustomRuntimeData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddResourceOffset@ResourceDictionaryCustomRuntimeData@@QEAAJAEBVxstring_ptr@@AEBVStreamOffsetToken@@_N2@Z
    long AddResourceOffset(xstring_ptr const &, StreamOffsetToken const &, bool, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceDictionaryCustomRuntimeData@@QEAA@XZ
    ResourceDictionaryCustomRuntimeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@ResourceDictionaryCustomRuntimeData@@UEBAJ_NAEAVxstring_ptr@@@Z
    virtual long ToString(bool, xstring_ptr &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetResourceOffset@ResourceDictionaryCustomRuntimeData@@QEAA_NAEBVxstring_ptr@@_NAEAVStreamOffsetToken@@@Z
    bool TryGetResourceOffset(xstring_ptr const &, bool, StreamOffsetToken &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceDictionaryCustomRuntimeData@@UEAA@XZ
    virtual ~ResourceDictionaryCustomRuntimeData();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndexForSerialization@ResourceDictionaryCustomRuntimeData@@MEBA?AW4CustomWriterRuntimeDataTypeIndex@@AEBUTargetOSVersion@@@Z
    virtual int GetTypeIndexForSerialization(TargetOSVersion const &) const;
};
