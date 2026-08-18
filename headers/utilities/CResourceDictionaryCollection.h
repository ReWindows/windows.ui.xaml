#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class CResourceDictionaryCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CResourceDictionaryCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CResourceDictionaryCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CResourceDictionaryCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasImplicitStyle@CResourceDictionaryCollection@@QEAA_NXZ
    bool HasImplicitStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateImplicitStyles@CResourceDictionaryCollection@@QEAAJXZ
    long InvalidateImplicitStyles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CResourceDictionaryCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CResourceDictionaryCollection@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CResourceDictionaryCollection@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResourceOwner@CResourceDictionaryCollection@@QEAAXQEAVCDependencyObject@@@Z
    void SetResourceOwner(CDependencyObject * const);
};
