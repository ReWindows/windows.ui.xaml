#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class PropertyPathParser {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@PropertyPathParser@DirectUI@@QEAAJPEBGPEAVXamlServiceProviderContext@@@Z
    long SetSource(unsigned short const *, XamlServiceProviderContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyPathParser@DirectUI@@QEAA@XZ
    ~PropertyPathParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDependencyPropertyPathStepDescriptor@PropertyPathParser@DirectUI@@AEAAJIPEBGPEAVXamlServiceProviderContext@@PEAPEAVPropertyPathStepDescriptor@2@@Z
    long CreateDependencyPropertyPathStepDescriptor(unsigned int, unsigned short const *, XamlServiceProviderContext *, ::DirectUI::PropertyPathStepDescriptor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@PropertyPathParser@DirectUI@@AEAAJPEBGPEAVXamlServiceProviderContext@@@Z
    long Parse(unsigned short const *, XamlServiceProviderContext *);
};
} // namespace DirectUI
