#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class AutomationPeerAnnotation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutomationPeerAnnotation@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Peer@AutomationPeerAnnotation@DirectUI@@UEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long get_Peer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@AutomationPeerAnnotation@DirectUI@@UEAAJPEAW4AnnotationType@Automation@Xaml@UI@Windows@@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Peer@AutomationPeerAnnotation@DirectUI@@UEAAJPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long put_Peer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Type@AutomationPeerAnnotation@DirectUI@@UEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@@Z
    virtual long put_Type(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutomationPeerAnnotation@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutomationPeerAnnotation@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@AutomationPeerAnnotation@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutomationPeerAnnotation@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
