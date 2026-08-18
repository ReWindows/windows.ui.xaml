#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 29 member(s).
class CompositeEffect {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositeEffect@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@CompositeEffect@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositeEffect@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@CompositeEffect@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@Effects@Graphics@Windows@@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CompositeEffect@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z
    virtual long GetProperty(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@CompositeEffect@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositeEffect@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CompositeEffect@@UEAAJIPEAPEAUIGraphicsEffectSource@Effects@Graphics@Windows@@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@CompositeEffect@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositeEffect@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositeEffect@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositeEffect@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositeEffect@@UEAA@XZ
    virtual ~CompositeEffect();
};
