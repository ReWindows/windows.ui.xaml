#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class CDeferredElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Defer@CDeferredElement@@QEAAJXZ
    long Defer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAllowMultipleAssociation@CDeferredElement@@UEBA_NXZ
    virtual bool DoesAllowMultipleAssociation() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeElementInsertion@CDeferredElement@@QEAAJPEAVCDependencyObject@@@Z
    long FinalizeElementInsertion(CDependencyObject *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeclaringOwner@CDeferredElement@@QEAAPEAVCDependencyObject@@XZ
    CDependencyObject * GetDeclaringOwner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CDeferredElement@@UEBAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetParent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplatedParent@CDeferredElement@@UEAAPEAVCDependencyObject@@XZ
    virtual CDependencyObject * GetTemplatedParent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CDeferredElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CDeferredElement@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostAppendInit@CDeferredElement@@QEAAJXZ
    long PostAppendInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Realize@CDeferredElement@@QEAAJPEAPEAVCDependencyObject@@@Z
    long Realize(CDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterProxyName@CDeferredElement@@QEAAJ_N@Z
    long RegisterProxyName(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplatedParentImpl@CDeferredElement@@UEAAXPEAVCDependencyObject@@@Z
    virtual void SetTemplatedParentImpl(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDefer@CDeferredElement@@SAJPEAVCDependencyObject@@@Z
    static long TryDefer(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterProxyName@CDeferredElement@@QEAAJ_N@Z
    long UnregisterProxyName(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeferredElement@@UEAA@XZ
    virtual ~CDeferredElement();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeferredElement@@AEAA@PEAVCCoreServices@@@Z
    CDeferredElement(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanInsertRealizedElement@CDeferredElement@@AEAAJAEA_N@Z
    long CanInsertRealizedElement(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertRealizedElement@CDeferredElement@@AEAAJPEAVCDependencyObject@@@Z
    long InsertRealizedElement(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRealizedElement@CDeferredElement@@AEAAJPEAVCDependencyObject@@@Z
    long RemoveRealizedElement(CDependencyObject *);
};
