#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class DataTemplateKeyFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataTemplateKeyFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIDataTemplateKey@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IDataTemplateKey * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithType@DataTemplateKeyFactory@DirectUI@@UEAAJPEAUIInspectable@@0PEAPEAU3@PEAPEAUIDataTemplateKey@Xaml@UI@Windows@@@Z
    virtual long CreateInstanceWithType(IInspectable *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IDataTemplateKey * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@DataTemplateKeyFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@DataTemplateKeyFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@DataTemplateKeyFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithTypeImpl@DataTemplateKeyFactory@DirectUI@@AEAAJPEAUIInspectable@@0PEAPEAU3@PEAPEAUIDataTemplateKey@Xaml@UI@Windows@@@Z
    long CreateInstanceWithTypeImpl(IInspectable *, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::IDataTemplateKey * *);
};
} // namespace DirectUI
