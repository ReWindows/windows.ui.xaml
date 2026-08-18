#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace Ptls6 {
class CLsDnodeContent {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPositionLim@CLsDnodeContent@Ptls6@@QEBA?AVLSCONTPOSINT@2@XZ
    WindissectOpaque GetContentPositionLim() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrdinalMaxAttached@CLsDnodeContent@Ptls6@@QEBA?AVLSORDINALINT@2@XZ
    WindissectOpaque GetOrdinalMaxAttached() const;
private:
    // Category: Method | Source: PE Export
    // Symbol: ?FIsContentDnodeCore@CLsDnodeContent@Ptls6@@EEBAHXZ
    virtual int FIsContentDnodeCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsEllipsisCore@CLsDnodeContent@Ptls6@@EEBAHXZ
    virtual int FIsEllipsisCore() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FIsNotInContentCore@CLsDnodeContent@Ptls6@@EEBAHXZ
    virtual int FIsNotInContentCore() const;
};
} // namespace Ptls6
