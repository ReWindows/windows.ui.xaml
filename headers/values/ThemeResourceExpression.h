#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class ThemeResourceExpression {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ThemeResourceExpression@DirectUI@@SAJPEAVCThemeResource@@PEAPEAV12@@Z
    static long Create(CThemeResource *, ThemeResourceExpression * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanSetValue@ThemeResourceExpression@DirectUI@@UEAAJPEAI@Z
    virtual long GetCanSetValue(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAssociated@ThemeResourceExpression@DirectUI@@UEAAIXZ
    virtual unsigned int GetIsAssociated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeValueFromCore@ThemeResourceExpression@DirectUI@@SAJPEAVCThemeResource@@PEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    static long GetThemeValueFromCore(CThemeResource *, CDependencyProperty const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@ThemeResourceExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(::DirectUI::DependencyObject *, CDependencyProperty const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@ThemeResourceExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@@Z
    virtual long OnAttach(::DirectUI::DependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@ThemeResourceExpression@DirectUI@@UEAAJXZ
    virtual long OnDetach();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ThemeResourceExpression@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ThemeResourceExpression@DirectUI@@MEAA@XZ
    virtual ~ThemeResourceExpression();
};
} // namespace DirectUI
