#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class CTextHighlighterCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextHighlighterCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextHighlighterCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CTextHighlighterCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CTextHighlighterCollection@@QEAAXXZ
    void OnCollectionChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CTextHighlighterCollection@@MEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CTextHighlighterCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CTextHighlighterCollection@@MEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
};
