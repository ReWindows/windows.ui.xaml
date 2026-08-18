#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class XamlMobileDataPackageOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@XamlMobileDataPackageOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAW4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetResults(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@XamlMobileDataPackageOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@XamlMobileDataPackageOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@XamlMobileDataPackageOperation@DirectUI@@UEAAJXZ
    virtual long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@XamlMobileDataPackageOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4DataPackageOperation@DataTransfer@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@XamlMobileDataPackageOperation@DirectUI@@MEAAJXZ
    virtual long OnStart();
};
} // namespace DirectUI
