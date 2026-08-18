#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsAutomationPeerEventArgs@CEventArgs@@UEAAPEAVCAutomationPeerEventArgs@@XZ
    virtual CAutomationPeerEventArgs * AsAutomationPeerEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsRoutedEventArgs@CEventArgs@@UEAAPEAVCRoutedEventArgs@@XZ
    virtual CRoutedEventArgs * AsRoutedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrameworkPeer@CEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameworkPeer@CEventArgs@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetFrameworkPeer(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CEventArgs@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsErrorEventArgs@CEventArgs@@UEBAIXZ
    virtual unsigned int IsErrorEventArgs() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEventArgs@@UEAAKXZ
    virtual unsigned long Release();
};
