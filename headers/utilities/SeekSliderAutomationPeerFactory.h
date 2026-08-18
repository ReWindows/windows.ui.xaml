#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 2 member(s).
class SeekSliderAutomationPeerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@SeekSliderAutomationPeerFactory@@UEAAJPEAUISlider@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU7@PEAPEAUISliderAutomationPeer@Peers@Automation@456@@Z
    virtual long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::ISlider *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer * *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@SeekSliderAutomationPeerFactory@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
};
