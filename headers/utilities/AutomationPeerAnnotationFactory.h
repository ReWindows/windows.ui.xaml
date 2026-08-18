#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class AutomationPeerAnnotationFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AutomationPeerAnnotationFactory@DirectUI@@UEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAPEAUIAutomationPeerAnnotation@Peers@4567@@Z
    virtual long CreateInstance(int, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithPeerParameter@AutomationPeerAnnotationFactory@DirectUI@@UEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAUIAutomationPeer@Peers@4567@PEAPEAUIAutomationPeerAnnotation@94567@@Z
    virtual long CreateWithPeerParameter(int, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PeerProperty@AutomationPeerAnnotationFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_PeerProperty(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TypeProperty@AutomationPeerAnnotationFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_TypeProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@AutomationPeerAnnotationFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@AutomationPeerAnnotationFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@AutomationPeerAnnotationFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@AutomationPeerAnnotationFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@AutomationPeerAnnotationFactory@DirectUI@@AEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAPEAUIAutomationPeerAnnotation@Peers@4567@@Z
    long CreateInstanceImpl(int, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithPeerParameterImpl@AutomationPeerAnnotationFactory@DirectUI@@AEAAJW4AnnotationType@Automation@Xaml@UI@Windows@@PEAUIAutomationPeer@Peers@4567@PEAPEAUIAutomationPeerAnnotation@94567@@Z
    long CreateWithPeerParameterImpl(int, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeer *, ::Windows::UI::Xaml::Automation::Peers::IAutomationPeerAnnotation * *);
};
} // namespace DirectUI
