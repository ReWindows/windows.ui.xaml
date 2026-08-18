#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CIconSourceElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CIconSourceElement@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CIconSourceElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CIconSourceElement@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapIconElements@CIconSourceElement@@QEAAJXZ
    long SwapIconElements();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CIconSourceElement@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconSourceElement@@EEAA@XZ
    virtual ~CIconSourceElement();
};
