#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class SwapChainBackgroundPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCoreIndependentInputSourceImpl@SwapChainBackgroundPanel@DirectUI@@QEAAJW4CoreInputDeviceTypes@Core@UI@Windows@@PEAPEAUICoreInputSourceBase@456@@Z
    long CreateCoreIndependentInputSourceImpl(int, ::Windows::UI::Core::ICoreInputSourceBase * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSwapChainPanel@SwapChainBackgroundPanel@DirectUI@@UEAAPEAVCSwapChainPanel@@XZ
    virtual CSwapChainPanel * GetSwapChainPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTreeParentUpdated@SwapChainBackgroundPanel@DirectUI@@UEAAJPEAVCDependencyObject@@E@Z
    virtual long OnTreeParentUpdated(CDependencyObject *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@SwapChainBackgroundPanel@DirectUI@@UEAAJPEAUIDXGISwapChain@@@Z
    virtual long SetSwapChain(IDXGISwapChain *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwapChainBackgroundPanel@DirectUI@@UEAA@XZ
    virtual ~SwapChainBackgroundPanel();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@SwapChainBackgroundPanel@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@SwapChainBackgroundPanel@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@SwapChainBackgroundPanel@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContextMenuRequested@SwapChainBackgroundPanel@DirectUI@@AEAAJPEAUIInspectable@@PEAUIContextMenuRequestedEventArgs@Core@UI@Windows@@@Z
    long OnContextMenuRequested(IInspectable *, ::Windows::UI::Core::IContextMenuRequestedEventArgs *);
};
} // namespace DirectUI
