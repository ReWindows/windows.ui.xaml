#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CTransformCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTransformCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CycleCheck@CTransformCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long CycleCheck(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTransformCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CTransformCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CTransformCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CTransformCollection@@UEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CTransformCollection@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CTransformCollection@@AEAAXXZ
    void OnCollectionChanged();
};
