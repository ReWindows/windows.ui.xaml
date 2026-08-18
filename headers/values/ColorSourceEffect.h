#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 30 member(s).
class ColorSourceEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ColorSourceEffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ColorSourceEffect@@QEAA@XZ
    ColorSourceEffect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@ColorSourceEffect@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ColorSourceEffect@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@ColorSourceEffect@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@Effects@Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@ColorSourceEffect@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@ColorSourceEffect@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ColorSourceEffect@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@ColorSourceEffect@@UEAAJIPEAPEAUIGraphicsEffectSource@Effects@Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@ColorSourceEffect@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ColorSourceEffect@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ColorSourceEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ColorSourceEffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ColorSourceEffect@@UEAA@XZ
    virtual ~ColorSourceEffect();
};
