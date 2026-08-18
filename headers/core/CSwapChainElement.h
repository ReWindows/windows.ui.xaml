#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CSwapChainElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSwapChainElement@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreIndependentInputSource@CSwapChainElement@@QEBAPEAUIUnknown@@XZ
    IUnknown * GetCoreIndependentInputSource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRescaleSwapChain@CSwapChainElement@@QEBAIXZ
    unsigned int GetRescaleSwapChain() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSwapChainElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChain@CSwapChainElement@@QEAAJPEAUIUnknown@@@Z
    long SetSwapChain(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapChainHandle@CSwapChainElement@@QEAAJPEAX@Z
    long SetSwapChainHandle(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSwapChainElement@@IEAA@PEAVCCoreServices@@@Z
    CSwapChainElement(CCoreServices *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSwapChainElement@@MEAA@XZ
    virtual ~CSwapChainElement();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequiresComposition@CSwapChainElement@@AEAAJHAEAH@Z
    long UpdateRequiresComposition(int, int &);
};
