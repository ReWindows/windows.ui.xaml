#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CDoubleCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CDoubleCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDoubleCollection@@QEAA@PEAVCCoreServices@@@Z
    CDoubleCollection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDoubleCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CDoubleCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CDoubleCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDoubleCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CDoubleCollection@@UEAAJAEAVCValue@@PEAH@Z
    virtual long IndexOf(CValue &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDoubleCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CDoubleCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CDoubleCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CDoubleCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDoubleCollection@@UEAA@XZ
    virtual ~CDoubleCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromString@CDoubleCollection@@IEAAJIPEBG@Z
    long InitFromString(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CDoubleCollection@@MEAAJAEBVCValue@@@Z
    virtual long OnAddToCollection(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CDoubleCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CDoubleCollection@@MEAAJAEBVCValue@@H@Z
    virtual long OnRemoveFromCollection(CValue const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValue@CDoubleCollection@@CAJAEBVCValue@@AEAV2@@Z
    static long EnsureValue(CValue const &, CValue &);
};
