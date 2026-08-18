#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class InputValidationContextFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InputValidationContextFactory@DirectUI@@UEAAJPEAUHSTRING__@@EPEAUIInspectable@@PEAPEAU4@PEAPEAUIInputValidationContext@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(HSTRING__*, unsigned char, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::IInputValidationContext * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputValidationContextFactory@DirectUI@@QEAA@XZ
    InputValidationContextFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InputValidationContextFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InputValidationContextFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@InputValidationContextFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InputValidationContextFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
