#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class ScrollViewerAutomationPeerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ScrollViewerAutomationPeerGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJW4ScrollAmount@Automation@Xaml@UI@Windows@@0@Z
    virtual long Scroll(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJNN@Z
    virtual long SetScrollPercent(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercent@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSize@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollable@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_HorizontallyScrollable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercent@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalScrollPercent(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSize@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalViewSize(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollable@ScrollViewerAutomationPeerGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_VerticallyScrollable(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ScrollViewerAutomationPeerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ScrollViewerAutomationPeerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ScrollViewerAutomationPeerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ScrollViewerAutomationPeerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
