#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
class CContentLinkProviderCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CContentLinkProviderCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CContentLinkProviderCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CContentLinkProviderCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CContentLinkProviderCollection@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CContentLinkProviderCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CContentLinkProviderCollection@@UEAAJIPEAVCDependencyObject@@@Z
    virtual long Insert(unsigned int, CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAssociated@CContentLinkProviderCollection@@UEAA_NXZ
    virtual bool IsAssociated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CContentLinkProviderCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsOwnerInfo@CContentLinkProviderCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CContentLinkProviderCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAssociated@CContentLinkProviderCollection@@UEAAX_NPEAVCDependencyObject@@@Z
    virtual void SetAssociated(bool, CDependencyObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContentLinkProviderCollection@@UEAA@XZ
    virtual ~CContentLinkProviderCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CContentLinkProviderCollection@@AEAAJXZ
    long OnCollectionChanged();
};
