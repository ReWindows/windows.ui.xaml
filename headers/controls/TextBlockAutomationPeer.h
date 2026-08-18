#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class TextBlockAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSpeechStateImpl@TextBlockAutomationPeer@DirectUI@@QEAAJXZ
    long ClearSpeechStateImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutomationControlTypeCore@TextBlockAutomationPeer@DirectUI@@UEAAJPEAW4AutomationControlType@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long GetAutomationControlTypeCore(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@TextBlockAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@TextBlockAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@TextBlockAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsControlElementCore@TextBlockAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsControlElementCore(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveListeningStateImpl@TextBlockAutomationPeer@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetActiveListeningStateImpl(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisambiguationStateImpl@TextBlockAutomationPeer@DirectUI@@QEAAJPEAUHSTRING__@@@Z
    long SetDisambiguationStateImpl(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TextBlockAutomationPeer@DirectUI@@QEAA@XZ
    TextBlockAutomationPeer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBlockAutomationPeer@DirectUI@@UEAA@XZ
    virtual ~TextBlockAutomationPeer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheCurrentProperties@TextBlockAutomationPeer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long CacheCurrentProperties(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestorePropertyValuesFromCache@TextBlockAutomationPeer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    long RestorePropertyValuesFromCache(::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpeechProperties@TextBlockAutomationPeer@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@PEAUHSTRING__@@I@Z
    long SetSpeechProperties(::Windows::UI::Xaml::IUIElement *, HSTRING__*, unsigned int);
};
} // namespace DirectUI
