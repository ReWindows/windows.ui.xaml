#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class InputValidationErrorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@InputValidationErrorFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@PEAPEAU4@PEAPEAUIInputValidationError@Controls@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(HSTRING__*, IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Controls::IInputValidationError * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputValidationErrorFactory@DirectUI@@QEAA@XZ
    InputValidationErrorFactory();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@InputValidationErrorFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@InputValidationErrorFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@InputValidationErrorFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
