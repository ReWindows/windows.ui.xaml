#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class ResourceDictionaryCustomWriter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCustomWriterFinished@ResourceDictionaryCustomWriter@@UEBA_NXZ
    virtual bool IsCustomWriterFinished() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@ResourceDictionaryCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndConditionalScope(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@ResourceDictionaryCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndMember(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@ResourceDictionaryCustomWriter@@UEAAJPEA_N@Z
    virtual long WriteEndObject(bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceDictionaryCustomWriter@@UEAA@XZ
    virtual ~ResourceDictionaryCustomWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ResourceDictionaryCustomWriter@@AEAAJXZ
    long Initialize();
};
