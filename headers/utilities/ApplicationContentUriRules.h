#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class ApplicationContentUriRules {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForCurrentApplication@ApplicationContentUriRules@@QEAAJPEAVIAppxUrlHelper@@@Z
    long InitializeForCurrentApplication(IAppxUrlHelper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromString@ApplicationContentUriRules@@QEAAJPEBGIPEAVIAppxUrlHelper@@@Z
    long InitializeFromString(unsigned short const *, unsigned int, IAppxUrlHelper *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUriAllowedToCommunicateWithApp@ApplicationContentUriRules@@QEAAJPEAUIUri@@PEAH@Z
    long IsUriAllowedToCommunicateWithApp(IUri *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseApplicationContentUriRuleText@ApplicationContentUriRules@@CAJPEBGPEAHPEAW4ApplicationContentUriWinRTAccess@@PEAPEAUIUri@@@Z
    static long ParseApplicationContentUriRuleText(unsigned short const *, int *, int *, IUri * *);
};
