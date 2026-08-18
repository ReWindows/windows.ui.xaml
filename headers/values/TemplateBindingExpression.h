#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class TemplateBindingExpression {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanSetValue@TemplateBindingExpression@DirectUI@@UEAAJPEAI@Z
    virtual long GetCanSetValue(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAssociated@TemplateBindingExpression@DirectUI@@UEAAIXZ
    virtual unsigned int GetIsAssociated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@TemplateBindingExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(::DirectUI::DependencyObject *, CDependencyProperty const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@TemplateBindingExpression@DirectUI@@UEAAJPEAVDependencyObject@2@PEBVCDependencyProperty@@@Z
    virtual long OnAttach(::DirectUI::DependencyObject *, CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@TemplateBindingExpression@DirectUI@@UEAAJXZ
    virtual long OnDetach();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TemplateBindingExpression@DirectUI@@IEAA@XZ
    TemplateBindingExpression();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TemplateBindingExpression@DirectUI@@MEAA@XZ
    virtual ~TemplateBindingExpression();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourcePropertyChanged@TemplateBindingExpression@DirectUI@@AEAAJXZ
    long OnSourcePropertyChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateBinding@TemplateBindingExpression@DirectUI@@CAJPEAVControl@2@PEBVCDependencyProperty@@PEAVDependencyObject@2@1@Z
    static long SetTemplateBinding(::DirectUI::Control *, CDependencyProperty const *, ::DirectUI::DependencyObject *, CDependencyProperty const *);
};
} // namespace DirectUI
