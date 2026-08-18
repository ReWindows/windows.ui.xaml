#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CPathIcon {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPathIcon@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPathIcon@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CPathIcon@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CPathIcon@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPathIcon@@EEAA@XZ
    virtual ~CPathIcon();
};
