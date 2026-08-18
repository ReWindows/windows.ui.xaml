#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace Diagnostics {
class RuntimeElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@RuntimeElement@Diagnostics@@UEAAXXZ
    virtual void Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackingElement@RuntimeElement@Diagnostics@@QEBA?AV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@WRL@Microsoft@@XZ
    WindissectOpaque GetBackingElement() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeElement@Diagnostics@@UEAA@XZ
    virtual ~RuntimeElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChildren@RuntimeElement@Diagnostics@@AEAAXXZ
    void EnsureChildren();
};
} // namespace Diagnostics
