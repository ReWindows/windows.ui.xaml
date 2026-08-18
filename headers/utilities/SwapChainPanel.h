#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class SwapChainPanel {
public:
    class CustomRendererData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreIndependentInputSourceImpl@SwapChainPanel@DirectUI@@QEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@PEAPEAUICoreInputSourceBase@456@@Z
    long CreateCoreIndependentInputSourceImpl(int, ::Windows::UI::Core::ICoreInputSourceBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainPanel@SwapChainPanel@DirectUI@@UEAAPEAVCSwapChainPanel@@XZ
    virtual CSwapChainPanel * GetSwapChainPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockBitmap@SwapChainPanel@DirectUI@@SAJPEAVCSwapChainPanel@@PEAI11PEAPEAX@Z
    static long LockBitmap(CSwapChainPanel *, unsigned int *, unsigned int *, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@SwapChainPanel@DirectUI@@QEAAJPEAUIInspectable@@PEAUISizeChangedEventArgs@Xaml@UI@Windows@@@Z
    long OnSizeChanged(IInspectable *, ::Windows::UI::Xaml::ISizeChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCustomRenderer@SwapChainPanel@DirectUI@@UEAAJPEAUIRenderTargetBitmapCustomRendererNative@@@Z
    virtual long RegisterCustomRenderer(IRenderTargetBitmapCustomRendererNative *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSizeChangedEventHandler@SwapChainPanel@DirectUI@@QEAAJXZ
    long RemoveSizeChangedEventHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizeChangedEventHandler@SwapChainPanel@DirectUI@@QEAAJXZ
    long SetSizeChangedEventHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@SwapChainPanel@DirectUI@@UEAAJPEAUIDXGISwapChain@@@Z
    virtual long SetSwapChain(IDXGISwapChain *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChainHandle@SwapChainPanel@DirectUI@@UEAAJPEAX@Z
    virtual long SetSwapChainHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockBitmap@SwapChainPanel@DirectUI@@SAJPEAVCSwapChainPanel@@@Z
    static long UnlockBitmap(CSwapChainPanel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmap@SwapChainPanel@DirectUI@@SAJPEAVCSwapChainPanel@@@Z
    static long UpdateBitmap(CSwapChainPanel *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwapChainPanel@DirectUI@@UEAA@XZ
    virtual ~SwapChainPanel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SwapChainPanel@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SwapChainPanel@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SwapChainPanel@DirectUI@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SwapChainPanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCustomRendererData@SwapChainPanel@DirectUI@@AEAAJXZ
    long EnsureCustomRendererData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuRequested@SwapChainPanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIContextMenuRequestedEventArgs@Core@UI@Windows@@@Z
    long OnContextMenuRequested(IInspectable *, ::Windows::UI::Core::IContextMenuRequestedEventArgs *);
};
} // namespace DirectUI
