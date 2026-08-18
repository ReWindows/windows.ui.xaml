#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
class CDefinitionBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActualSize@CDefinitionBase@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long ActualSize(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CDefinitionBase@@UEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredSize@CDefinitionBase@@QEBAMXZ
    float GetPreferredSize() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDefinitionBase@@IEAA@PEAVCCoreServices@@@Z
    CDefinitionBase(CCoreServices *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualSize@CDefinitionBase@@AEBAMXZ
    float GetActualSize() const;
};
