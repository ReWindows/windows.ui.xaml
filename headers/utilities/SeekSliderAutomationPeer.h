#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class SeekSliderAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithOwner@SeekSliderAutomationPeer@DirectUI@@SAJPEAUISlider@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUISliderAutomationPeer@Peers@Automation@567@@Z
    static long CreateInstanceWithOwner(::Windows::UI::Xaml::Controls::ISlider *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Automation::Peers::ISliderAutomationPeer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassNameCore@SeekSliderAutomationPeer@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetClassNameCore(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@SeekSliderAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueImpl@SeekSliderAutomationPeer@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long get_ValueImpl(HSTRING__* *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTimeSpanToHString@SeekSliderAutomationPeer@DirectUI@@AEAAJUTimeSpan@Foundation@Windows@@PEAPEAUHSTRING__@@@Z
    long ConvertTimeSpanToHString(WindissectOpaque, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePositionTimeComponent@SeekSliderAutomationPeer@DirectUI@@AEAAJIHAEAVString@Internal@Windows@@@Z
    long CreatePositionTimeComponent(unsigned int, int, ::Windows::Internal::String &);
};
} // namespace DirectUI
