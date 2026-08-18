#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class TargetPropertyPath {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TargetPropertyPath@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Path@TargetPropertyPath@DirectUI@@UEAAJPEAPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    virtual long get_Path(::Windows::UI::Xaml::IPropertyPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@TargetPropertyPath@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Target(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Path@TargetPropertyPath@DirectUI@@UEAAJPEAUIPropertyPath@Xaml@UI@Windows@@@Z
    virtual long put_Path(::Windows::UI::Xaml::IPropertyPath *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Target@TargetPropertyPath@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Target(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TargetPropertyPath@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TargetPropertyPath@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TargetPropertyPath@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TargetPropertyPath@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
