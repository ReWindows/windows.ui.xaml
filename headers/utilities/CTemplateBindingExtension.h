#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CTemplateBindingExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTemplateBindingExtension@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTemplateBindingExtension@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CTemplateBindingExtension@@UEAAXXZ
    virtual void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateBinding@CTemplateBindingExtension@@QEAAJPEAVCDependencyObject@@UXamlPropertyToken@@@Z
    long SetTemplateBinding(CDependencyObject *, XamlPropertyToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTemplateBindingExtension@@UEAA@XZ
    virtual ~CTemplateBindingExtension();
};
