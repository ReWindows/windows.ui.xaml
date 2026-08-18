#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 16 member(s).
class CItemsControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreationComplete@CItemsControl@@UEAAJXZ
    virtual long CreationComplete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItems@CItemsControl@@SAJPEAVCDependencyObject@@IPEAVCValue@@PEAUIInspectable@@1@Z
    static long GetItems(CDependencyObject *, unsigned int, CValue *, IInspectable *, CValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CItemsControl@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CItemsControl@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplate@CItemsControl@@MEAAJAEA_N@Z
    virtual long ApplyTemplate(bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CItemsControl@@IEAA@PEAVCCoreServices@@@Z
    CItemsControl(CCoreServices *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupDeviceRelatedResourcesRecursive@CItemsControl@@MEAAX_N@Z
    virtual void CleanupDeviceRelatedResourcesRecursive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CItemsControl@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LeaveImpl@CItemsControl@@MEAAJPEAVCDependencyObject@@ULeaveParams@@@Z
    virtual long LeaveImpl(CDependencyObject *, LeaveParams);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@CItemsControl@@MEAAJUXSIZEF@@AEAU2@@Z
    virtual long MeasureOverride(XSIZEF, XSIZEF &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CItemsControl@@MEAA@XZ
    virtual ~CItemsControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureItemCollection@CItemsControl@@AEAAJPEAVCDependencyObject@@PEAUEnterParams@@@Z
    long EnsureItemCollection(CDependencyObject *, EnterParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateItemsHost@CItemsControl@@AEAAJI@Z
    long InvalidateItemsHost(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItemsHost@CItemsControl@@AEAAJXZ
    long ValidateItemsHost();
};
