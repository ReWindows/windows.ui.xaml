#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 51 member(s).
namespace DirectUI {
class DesignerAppView {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesignerAppView@DirectUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowReadyForPresentation@DesignerAppView@DirectUI@@UEAAJXZ
    virtual long AppWindowReadyForPresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateActivationContext@DesignerAppView@DirectUI@@UEAAJI@Z
    virtual long AssociateActivationContext(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@DesignerAppView@DirectUI@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndSendSharedVisual@DesignerAppView@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long CreateAndSendSharedVisual(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@DesignerAppView@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesignerAppView@DirectUI@@QEAA@XZ
    DesignerAppView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationContext@DesignerAppView@DirectUI@@QEAAJPEAI@Z
    long GetActivationContext(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesignerAppView@DirectUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesignerAppView@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesignerAppView@DirectUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisual@DesignerAppView@DirectUI@@UEAAJPEAUIUnknown@@PEAPEAU3@@Z
    virtual long GetVisual(IUnknown *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DesignerAppView@DirectUI@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellExperience@DesignerAppView@DirectUI@@UEAAJPEAH@Z
    virtual long IsShellExperience(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@DesignerAppView@DirectUI@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationEnd@DesignerAppView@DirectUI@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesignerAppView@DirectUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesignerAppView@DirectUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApp@DesignerAppView@DirectUI@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApp(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedAppWindow@DesignerAppView@DirectUI@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedAppWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldActivateWithTimeoutsDisabled@DesignerAppView@DirectUI@@UEAAJPEAH@Z
    virtual long ShouldActivateWithTimeoutsDisabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@DesignerAppView@DirectUI@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@DesignerAppView@DirectUI@@UEAAJXZ
    virtual long TransitionToApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewAsync@DesignerAppView@DirectUI@@UEAAJW4DesignerAppViewState@Hosting@Xaml@UI@Windows@@USize@Foundation@7@PEAPEAUIAsyncAction@97@@Z
    virtual long UpdateViewAsync(int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewSize@DesignerAppView@DirectUI@@QEAAJUSize@Foundation@Windows@@@Z
    long UpdateViewSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewState@DesignerAppView@DirectUI@@QEAAJW4DesignerAppViewState@Hosting@Xaml@UI@Windows@@@Z
    long UpdateViewState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppUserModelId@DesignerAppView@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationViewId@DesignerAppView@DirectUI@@UEAAJPEAH@Z
    virtual long get_ApplicationViewId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewSize@DesignerAppView@DirectUI@@UEAAJPEAUSize@Foundation@Windows@@@Z
    virtual long get_ViewSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewState@DesignerAppView@DirectUI@@UEAAJPEAW4DesignerAppViewState@Hosting@Xaml@UI@Windows@@@Z
    virtual long get_ViewState(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesignerAppView@DirectUI@@UEAA@XZ
    virtual ~DesignerAppView();
};
} // namespace DirectUI
