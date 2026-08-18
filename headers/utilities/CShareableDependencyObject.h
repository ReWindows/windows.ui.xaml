#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CShareableDependencyObject {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneElementPropertiesForCachedTemplateExpansion@CShareableDependencyObject@@MEAAXPEAVCDependencyObject@@@Z
    virtual void CloneElementPropertiesForCachedTemplateExpansion(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CShareableDependencyObject@@MEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociated@CShareableDependencyObject@@MEAA_NXZ
    virtual bool IsAssociated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociated@CShareableDependencyObject@@MEAAX_NPEAVCDependencyObject@@@Z
    virtual void SetAssociated(bool, CDependencyObject *);
};
