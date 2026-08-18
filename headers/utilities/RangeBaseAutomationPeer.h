#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class RangeBaseAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRaiseValuePropertyChangedEvent@RangeBaseAutomationPeer@DirectUI@@QEAAJXZ
    long ForceRaiseValuePropertyChangedEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@RangeBaseAutomationPeer@DirectUI@@UEAAJW4PatternInterface@Peers@Automation@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetPatternCore(int, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseMaximumPropertyChangedEvent@RangeBaseAutomationPeer@DirectUI@@QEAAJAEBVCValue@@0@Z
    long RaiseMaximumPropertyChangedEvent(CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseMinimumPropertyChangedEvent@RangeBaseAutomationPeer@DirectUI@@QEAAJAEBVCValue@@0@Z
    long RaiseMinimumPropertyChangedEvent(CValue const &, CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseValuePropertyChangedEvent@RangeBaseAutomationPeer@DirectUI@@QEAAJAEBVCValue@@0@Z
    long RaiseValuePropertyChangedEvent(CValue const &, CValue const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RangeBaseAutomationPeer@DirectUI@@QEAA@XZ
    RangeBaseAutomationPeer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJN@Z
    long SetValueImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsReadOnlyImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAE@Z
    long get_IsReadOnlyImpl(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChangeImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_LargeChangeImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaximumImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_MaximumImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinimumImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_MinimumImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChangeImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_SmallChangeImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ValueImpl@RangeBaseAutomationPeer@DirectUI@@QEAAJPEAN@Z
    long get_ValueImpl(double *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportValuePropertyChangedEvent@RangeBaseAutomationPeer@DirectUI@@AEAAJAEBVCValue@@0@Z
    long ReportValuePropertyChangedEvent(CValue const &, CValue const &);
};
} // namespace DirectUI
