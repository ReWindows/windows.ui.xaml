#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CSwapChainBackgroundPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSwapChainBackgroundPanel@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSwapChainBackgroundPanel@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSwapChainBackgroundPanel@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRender@CSwapChainBackgroundPanel@@QEAAJXZ
    long PreRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSwapChainBackgroundPanel@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
};
