#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CTargetPropertyPath {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTargetPropertyPath@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromString@CTargetPropertyPath@@QEAAJPEAVCREATEPARAMETERS@@@Z
    long FromString(CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenericResolveTargetProperty@CTargetPropertyPath@@QEAAJPEAPEBVCDependencyProperty@@@Z
    long GenericResolveTargetProperty(CDependencyProperty const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTargetPropertyPath@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Path@CTargetPropertyPath@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Path(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTargetForStyleSetter@CTargetPropertyPath@@QEAAJW4KnownTypeIndex@@PEAW4KnownPropertyIndex@@@Z
    long ResolveTargetForStyleSetter(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTargetForVisualStateSetter@CTargetPropertyPath@@QEAAJPEAVCDependencyObject@@AEAV?$xref_ptr@VCDependencyObject@@@@1PEAPEBVCDependencyProperty@@@Z
    long ResolveTargetForVisualStateSetter(CDependencyObject *, WindissectOpaque &, WindissectOpaque &, CDependencyProperty const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Target@CTargetPropertyPath@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long Target(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTargetPropertyPath@@UEAA@XZ
    virtual ~CTargetPropertyPath();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyPathObject@CTargetPropertyPath@@AEAAJXZ
    long CreatePropertyPathObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedTargetPropertyIndex@CTargetPropertyPath@@AEBAJAEAW4KnownPropertyIndex@@@Z
    long GetCachedTargetPropertyIndex(int &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPathFullyQualifiedPropertyName@CTargetPropertyPath@@AEBA_NAEBVxstring_ptr@@I@Z
    bool IsPathFullyQualifiedPropertyName(xstring_ptr const &, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTargetNull@CTargetPropertyPath@@AEBA_NXZ
    bool IsTargetNull() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveFullyQualifiedPropertyNames@CTargetPropertyPath@@AEAAJAEBVxstring_ptr@@PEAVXamlServiceProviderContext@@@Z
    long ResolveFullyQualifiedPropertyNames(xstring_ptr const &, XamlServiceProviderContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTargetObjectForVisualStateSetter@CTargetPropertyPath@@AEAAJPEAVCDependencyObject@@AEAV?$xref_ptr@VCDependencyObject@@@@@Z
    long ResolveTargetObjectForVisualStateSetter(CDependencyObject *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveTargetPropertyForVisualStateSetter@CTargetPropertyPath@@AEAAJV?$xref_ptr@VCDependencyObject@@@@AEAV2@PEAPEBVCDependencyProperty@@@Z
    long ResolveTargetPropertyForVisualStateSetter(WindissectOpaque, WindissectOpaque &, CDependencyProperty const * *);
};
