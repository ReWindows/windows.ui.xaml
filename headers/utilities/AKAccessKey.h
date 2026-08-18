#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace AccessKeys {
class AKAccessKey {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPartialMatch@AKAccessKey@AccessKeys@@QEBA_NAEBV12@@Z
    bool IsPartialMatch(WindissectOpaque const &) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAccessKeyUppercase@AKAccessKey@AccessKeys@@AEAAXXZ
    void MakeAccessKeyUppercase();
};
} // namespace AccessKeys
