#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DataTemplateKeyGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataType@DataTemplateKeyGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_DataType(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DataType@DataTemplateKeyGenerated@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_DataType(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataTemplateKeyGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataTemplateKeyGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@DataTemplateKeyGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataTemplateKeyGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
