#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
class CBeginStoryboard {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CBeginStoryboard@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CBeginStoryboard@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeImpl@CBeginStoryboard@@MEAAJPEBVCDependencyProperty@@PEAVCDependencyObject@@@Z
    virtual long InvokeImpl(CDependencyProperty const *, CDependencyObject *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBeginStoryboard@@EEAA@XZ
    virtual ~CBeginStoryboard();
};
