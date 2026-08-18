#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class StandardUICommandFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StandardUICommandFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIStandardUICommand@Input@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Input::IStandardUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithKind@StandardUICommandFactory@DirectUI@@UEAAJW4StandardUICommandKind@Input@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIStandardUICommand@4567@@Z
    virtual long CreateInstanceWithKind(int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Input::IStandardUICommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KindProperty@StandardUICommandFactory@DirectUI@@UEAAJPEAPEAUIDependencyProperty@Xaml@UI@Windows@@@Z
    virtual long get_KindProperty(::Windows::UI::Xaml::IDependencyProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@StandardUICommandFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@StandardUICommandFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@StandardUICommandFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@StandardUICommandFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithKindImpl@StandardUICommandFactory@DirectUI@@AEAAJW4StandardUICommandKind@Input@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAU8@PEAPEAUIStandardUICommand@4567@@Z
    long CreateInstanceWithKindImpl(int, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Input::IStandardUICommand * *);
};
} // namespace DirectUI
