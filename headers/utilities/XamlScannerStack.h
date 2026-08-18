#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class XamlScannerStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@XamlScannerStack@@QEAAJXZ
    long Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentXmlSpacePreserve@XamlScannerStack@@QEBAAEBIXZ
    unsigned int const & get_CurrentXmlSpacePreserve() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_CurrentlyInContent@XamlScannerStack@@QEAAXI@Z
    void set_CurrentlyInContent(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlScannerStack@@QEAA@XZ
    ~XamlScannerStack();
};
