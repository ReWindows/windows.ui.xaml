#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class XamlXmlNamespace {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsXamlXmlNamespace@XamlXmlNamespace@@UEAAPEAV1@XZ
    virtual XamlXmlNamespace * AsXamlXmlNamespace();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsImplicitlyResolved@XamlXmlNamespace@@QEAAJPEAI@Z
    long GetIsImplicitlyResolved(unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlXmlNamespace@@QEAA@XZ
    XamlXmlNamespace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsResolved@XamlXmlNamespace@@UEBA_NXZ
    virtual bool get_IsResolved() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlXmlNamespace@@UEAA@XZ
    virtual ~XamlXmlNamespace();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetNamespaceCore@XamlXmlNamespace@@MEBA?AVxstring_ptr@@XZ
    virtual xstring_ptr get_TargetNamespaceCore() const;
};
