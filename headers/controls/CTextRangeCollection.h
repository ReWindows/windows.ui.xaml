#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CTextRangeCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CTextRangeCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextRangeCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CTextRangeCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CTextRangeCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextRangeCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CTextRangeCollection@@UEAAJAEAVCValue@@PEAH@Z
    virtual long IndexOf(CValue &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CTextRangeCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CTextRangeCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CTextRangeCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PE Export
    // Symbol: ?NeedsOwnerInfo@CTextRangeCollection@@UEAAIXZ
    virtual unsigned int NeedsOwnerInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CTextRangeCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextRangeCollection@@UEAA@XZ
    virtual ~CTextRangeCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CTextRangeCollection@@MEAAJAEBVCValue@@@Z
    virtual long OnAddToCollection(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CTextRangeCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CTextRangeCollection@@MEAAJAEBVCValue@@H@Z
    virtual long OnRemoveFromCollection(CValue const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValue@CTextRangeCollection@@CAJAEBVCValue@@AEAV2@@Z
    static long EnsureValue(CValue const &, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CTextRangeCollection@@AEAAXXZ
    void OnCollectionChanged();
};
