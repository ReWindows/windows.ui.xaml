#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class ListViewBaseAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ListViewBaseAutomationPeer@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long GetChildrenCore(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ListViewBaseAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOffscreenCore@ListViewBaseAutomationPeer@DirectUI@@UEAAJPEAE@Z
    virtual long IsOffscreenCore(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffectImpl@ListViewBaseAutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_DropEffectImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropEffectsImpl@ListViewBaseAutomationPeer@DirectUI@@QEAAJPEAIPEAPEAPEAUHSTRING__@@@Z
    long get_DropEffectsImpl(unsigned int *, HSTRING__* * *);
};
} // namespace DirectUI
