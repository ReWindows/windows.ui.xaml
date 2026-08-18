#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace Diagnostics {
class RuntimeDictionary {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackingDictionary@RuntimeDictionary@Diagnostics@@QEBA?AV?$ComPtr@UIResourceDictionary@Xaml@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetBackingDictionary() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClear@RuntimeDictionary@Diagnostics@@QEAA_NXZ
    bool TryClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClearValue@RuntimeDictionary@Diagnostics@@UEAA_NAEBVRuntimeProperty@2@@Z
    virtual bool TryClearValue(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeDictionary@Diagnostics@@UEAA@XZ
    virtual ~RuntimeDictionary();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeDictionary@Diagnostics@@AEAA@XZ
    RuntimeDictionary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateAllDependentItems@RuntimeDictionary@Diagnostics@@AEBAXXZ
    void TryUpdateAllDependentItems() const;
};
} // namespace Diagnostics
