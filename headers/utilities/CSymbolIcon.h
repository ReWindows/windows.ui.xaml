#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CSymbolIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSymbolIcon@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSymbolIcon@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CSymbolIcon@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CSymbolIcon@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitInstance@CSymbolIcon@@MEAAJXZ
    virtual long InitInstance();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChildTextBlockText@CSymbolIcon@@AEAAJXZ
    long UpdateChildTextBlockText();
};
