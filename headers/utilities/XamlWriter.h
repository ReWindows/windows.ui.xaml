#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class XamlWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@XamlWriter@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteNode@XamlWriter@@QEAAJAEBVXamlNode@@@Z
    long WriteNode(XamlNode const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessError@XamlWriter@@MEAAJXZ
    virtual long ProcessError();
};
