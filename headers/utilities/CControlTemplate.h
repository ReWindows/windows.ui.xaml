#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CControlTemplate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CControlTemplate@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CControlTemplate@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CControlTemplate@@UEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetValue(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadContent@CControlTemplate@@UEAAJPEAPEAVCDependencyObject@@PEAV2@@Z
    virtual long LoadContent(CDependencyObject * *, CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetType@CControlTemplate@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long TargetType(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
};
