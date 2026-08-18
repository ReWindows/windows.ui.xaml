#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
class CDependencyObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CDependencyObjectCollection@@UEAAJAEAVCValue@@PEAI@Z
    virtual long Append(CValue &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDependencyObjectCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeDiagnosticsRootCollection@CDependencyObjectCollection@@SA?AV?$xref_ptr@VCDependencyObjectCollection@@@@PEAVCCoreServices@@@Z
    static WindissectOpaque MakeDiagnosticsRootCollection(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInheritanceContextChanged@CDependencyObjectCollection@@UEAAJXZ
    virtual long OnInheritanceContextChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CDependencyObjectCollection@@UEAAJIAEAVCValue@@@Z
    virtual long SetAt(unsigned int, CValue &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDependencyObjectCollection@@UEAA@XZ
    virtual ~CDependencyObjectCollection();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDependencyObjectCollection@@IEAA@PEAVCCoreServices@@_N@Z
    CDependencyObjectCollection(CCoreServices *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildEnter@CDependencyObjectCollection@@MEAAJPEAVCDependencyObject@@0UEnterParams@@I@Z
    virtual long ChildEnter(CDependencyObject *, CDependencyObject *, EnterParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildLeave@CDependencyObjectCollection@@MEAAJPEAVCDependencyObject@@0ULeaveParams@@I@Z
    virtual long ChildLeave(CDependencyObject *, CDependencyObject *, LeaveParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CDependencyObjectCollection@@MEAAJIAEAVCValue@@@Z
    virtual long Insert(unsigned int, CValue &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveInternal@CDependencyObjectCollection@@MEAAJHH@Z
    virtual long MoveInternal(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClear@CDependencyObjectCollection@@MEAAJXZ
    virtual long OnClear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CDependencyObjectCollection@@MEAAPEAXI@Z
    virtual void * RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAssociateChildren@CDependencyObjectCollection@@MEAAIPEAVCDependencyObject@@@Z
    virtual unsigned int ShouldAssociateChildren(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCore@CDependencyObjectCollection@@AEAAJIAEBVCValue@@W4CollectionChangeBehavior@1@@Z
    long InsertCore(unsigned int, CValue const &, int);
};
