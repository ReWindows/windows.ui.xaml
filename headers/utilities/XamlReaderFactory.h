#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class XamlReaderFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@XamlReaderFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Load(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithInitialTemplateValidation@XamlReaderFactory@DirectUI@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long LoadWithInitialTemplateValidation(HSTRING__*, IInspectable * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlReaderFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlReaderFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlReaderFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImpl@XamlReaderFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long LoadImpl(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadWithInitialTemplateValidationImpl@XamlReaderFactory@DirectUI@@AEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long LoadWithInitialTemplateValidationImpl(HSTRING__*, IInspectable * *);
};
} // namespace DirectUI
