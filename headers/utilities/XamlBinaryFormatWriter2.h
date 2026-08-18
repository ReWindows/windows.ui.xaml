#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class XamlBinaryFormatWriter2 {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryFormatWriter2@@QEAA@XZ
    ~XamlBinaryFormatWriter2();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMasterStreamOffset@XamlBinaryFormatWriter2@@AEAAJV?$xref_ptr@UIPALStream@@@@PEAI@Z
    long GetMasterStreamOffset(WindissectOpaque, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToMasterStream@XamlBinaryFormatWriter2@@AEAAJV?$xref_ptr@UIPALStream@@@@0@Z
    long WriteToMasterStream(WindissectOpaque, WindissectOpaque);
};
