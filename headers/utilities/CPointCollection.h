#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 19 member(s).
class CPointCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CPointCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPointCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CPointCollection@@UEBAIXZ
    virtual unsigned int GetCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemWithAddRef@CPointCollection@@UEAAPEAXI@Z
    virtual void * GetItemWithAddRef(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CPointCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@CPointCollection@@UEAAJAEAVCValue@@PEAH@Z
    virtual long IndexOf(CValue &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromArray@CPointCollection@@QEAAJIPEAUXPOINTF@@@Z
    long InitFromArray(unsigned int, XPOINTF *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CPointCollection@@UEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CPointCollection@@UEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CPointCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CPointCollection@@UEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPointCollection@@UEAA@XZ
    virtual ~CPointCollection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CPointCollection@@MEAAJAEBVCValue@@@Z
    virtual long OnAddToCollection(CValue const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CPointCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CPointCollection@@MEAAJAEBVCValue@@H@Z
    virtual long OnRemoveFromCollection(CValue const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValue@CPointCollection@@CAJAEBVCValue@@AEAV2@@Z
    static long EnsureValue(CValue const &, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointsChanged@CPointCollection@@AEAAXXZ
    void OnPointsChanged();
};
