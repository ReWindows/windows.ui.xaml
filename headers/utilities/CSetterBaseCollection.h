#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
class CSetterBaseCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CSetterBaseCollection@@UEAAJPEAVCDependencyObject@@PEAI@Z
    virtual long Append(CDependencyObject *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildEnter@CSetterBaseCollection@@UEAAJPEAVCDependencyObject@@0UEnterParams@@I@Z
    virtual long ChildEnter(CDependencyObject *, CDependencyObject *, EnterParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildLeave@CSetterBaseCollection@@UEAAJPEAVCDependencyObject@@0ULeaveParams@@I@Z
    virtual long ChildLeave(CDependencyObject *, CDependencyObject *, LeaveParams, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSetterBaseCollection@@SAJPEAPEAVCDependencyObject@@PEAVCREATEPARAMETERS@@@Z
    static long Create(CDependencyObject * *, CREATEPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetterIndexByPropertyId@CSetterBaseCollection@@QEAAJW4KnownPropertyIndex@@W4KnownTypeIndex@@AEAI2@Z
    long GetSetterIndexByPropertyId(int, int, unsigned int &, unsigned int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CSetterBaseCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParticipatesInManagedTreeInternal@CSetterBaseCollection@@UEAAIXZ
    virtual unsigned int ParticipatesInManagedTreeInternal();
    // Category: Method | Source: PE Export
    // Symbol: ?ShouldEnsureNameResolution@CSetterBaseCollection@@UEAAIXZ
    virtual unsigned int ShouldEnsureNameResolution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CSetterBaseCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSetterBaseCollection@@MEAA@XZ
    virtual ~CSetterBaseCollection();
};
