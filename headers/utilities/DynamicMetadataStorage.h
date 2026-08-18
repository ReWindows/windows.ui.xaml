#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class DynamicMetadataStorage {
public:
    class DPRegistrationInfo;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DynamicMetadataStorage@DirectUI@@QEAA@XZ
    ~DynamicMetadataStorage();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DynamicMetadataStorage@DirectUI@@CAXXZ
    static void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCustomPropertiesAndDPs@DynamicMetadataStorage@DirectUI@@AEAAXXZ
    void DestroyCustomPropertiesAndDPs();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DynamicMetadataStorage@DirectUI@@AEAA@XZ
    DynamicMetadataStorage();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@DynamicMetadataStorage@DirectUI@@CAPEAV12@XZ
    static DynamicMetadataStorage * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInstance@DynamicMetadataStorage@DirectUI@@AEAAXXZ
    void ResetInstance();
};
} // namespace DirectUI
