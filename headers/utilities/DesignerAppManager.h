#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 37 member(s).
namespace DirectUI {
class DesignerAppManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesignerAppManager@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DesignerAppManager@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewViewAsync@DesignerAppManager@DirectUI@@UEAAJW4DesignerAppViewState@Hosting@Xaml@UI@Windows@@USize@Foundation@7@PEAPEAU?$IAsyncOperation@PEAVDesignerAppView@Hosting@Xaml@UI@Windows@@@97@@Z
    virtual long CreateNewViewAsync(int, WindissectOpaque, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesignerAppManager@DirectUI@@QEAA@XZ
    DesignerAppManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateHandleIntoApp@DesignerAppManager@DirectUI@@UEAAJPEAXEPEAPEAX@Z
    virtual long DuplicateHandleIntoApp(void *, unsigned char, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesignerAppManager@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesignerAppManager@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesignerAppManager@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessActive@DesignerAppManager@DirectUI@@SAJPEAXPEA_N@Z
    static long IsProcessActive(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadObjectIntoAppAsync@DesignerAppManager@DirectUI@@UEAAJPEAUHSTRING__@@U_GUID@@0PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long LoadObjectIntoAppAsync(HSTRING__*, _GUID, HSTRING__*, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesignerAppManager@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesignerAppManager@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DesignerAppManager@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DesignerAppExited@DesignerAppManager@DirectUI@@UEAAJPEAU?$ITypedEventHandler@PEAVDesignerAppManager@Hosting@Xaml@UI@Windows@@PEAVDesignerAppExitedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DesignerAppExited(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@DesignerAppManager@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DesignerAppExited@DesignerAppManager@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DesignerAppExited(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesignerAppManager@DirectUI@@UEAA@XZ
    virtual ~DesignerAppManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToSurfaceAsyncHelper@DesignerAppManager@DirectUI@@CAJIPEAXPEAUHSTRING__@@U_GUID@@1PEAPEAUIAsyncAction@Foundation@Windows@@@Z
    static long ConnectToSurfaceAsyncHelper(unsigned int, void *, HSTRING__*, _GUID, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireProcessExitedEvent@DesignerAppManager@DirectUI@@AEAAXXZ
    void FireProcessExitedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextOperationId@DesignerAppManager@DirectUI@@AEAAIXZ
    unsigned int GetNextOperationId();
};
} // namespace DirectUI
