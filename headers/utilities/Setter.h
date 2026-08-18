#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class Setter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@Setter@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Property@Setter@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_Property(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Target@Setter@DirectUI@@UEAAJPEAPEAUITargetPropertyPath@Xaml@UI@Windows@@@Z
    virtual long get_Target(::Windows::UI::Xaml::ITargetPropertyPath * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@Setter@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Value(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Property@Setter@DirectUI@@UEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long put_Property(::Windows::UI::Xaml::IDependencyProperty *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Target@Setter@DirectUI@@UEAAJPEAUITargetPropertyPath@Xaml@UI@Windows@@@Z
    virtual long put_Target(::Windows::UI::Xaml::ITargetPropertyPath *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@Setter@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Value(IInspectable *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@Setter@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@Setter@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@Setter@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@Setter@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PropertyImpl@Setter@DirectUI@@AEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    long get_PropertyImpl(::Windows::UI::Xaml::IDependencyProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PropertyImpl@Setter@DirectUI@@AEAAJPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    long put_PropertyImpl(::Windows::UI::Xaml::IDependencyProperty *);
};
} // namespace DirectUI
