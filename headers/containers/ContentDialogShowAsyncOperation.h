#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
namespace DirectUI {
class ContentDialogShowAsyncOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContentDialogShowAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ContentDialogShowAsyncOperation@DirectUI@@UEAAJXZ
    virtual long Cancel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAW4ContentDialogResult@Controls@Xaml@UI@Windows@@@Z
    virtual long GetResults(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContentDialogShowAsyncOperation@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContentDialogShowAsyncOperation@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4ContentDialogResult@Controls@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@ContentDialogShowAsyncOperation@DirectUI@@UEAAJPEAU?$IAsyncOperationCompletedHandler@W4ContentDialogResult@Controls@Xaml@UI@Windows@@@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContentDialogShowAsyncOperation@DirectUI@@UEAA@XZ
    virtual ~ContentDialogShowAsyncOperation();
};
} // namespace DirectUI
