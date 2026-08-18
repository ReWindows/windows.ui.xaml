#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 4 member(s).
class CDefinitionCollectionBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CDefinitionCollectionBase@@MEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CDefinitionCollectionBase@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CDefinitionCollectionBase@@MEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CDefinitionCollectionBase@@AEAAXXZ
    void OnCollectionChanged();
};
