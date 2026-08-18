#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ComboBoxTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ComboBoxTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropDownClosedHeight@ComboBoxTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_DropDownClosedHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropDownContentMinWidth@ComboBoxTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_DropDownContentMinWidth(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropDownOffset@ComboBoxTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_DropDownOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DropDownOpenedHeight@ComboBoxTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_DropDownOpenedHeight(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedItemDirection@ComboBoxTemplateSettings@DirectUI@@UEAAJPEAW4AnimationDirection@Primitives@Controls@Xaml@UI@Windows@@@Z
    virtual long get_SelectedItemDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DropDownOffset@ComboBoxTemplateSettings@DirectUI@@QEAAJN@Z
    long put_DropDownOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedItemDirection@ComboBoxTemplateSettings@DirectUI@@QEAAJW4AnimationDirection@Primitives@Controls@Xaml@UI@Windows@@@Z
    long put_SelectedItemDirection(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ComboBoxTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ComboBoxTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ComboBoxTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ComboBoxTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
