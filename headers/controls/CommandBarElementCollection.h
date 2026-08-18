#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
namespace DirectUI {
class CommandBarElementCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@CommandBarElementCollection@DirectUI@@UEAAJPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    virtual long Append(::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CommandBarElementCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@CommandBarElementCollection@DirectUI@@UEAAJIPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@CommandBarElementCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@CommandBarElementCollection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@CommandBarElementCollection@DirectUI@@UEAAJIPEAUICommandBarElement@Controls@Xaml@UI@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Xaml::Controls::ICommandBarElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CommandBarElementCollection@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long ValidateItem(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@CommandBarElementCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanging@CommandBarElementCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanging(int, unsigned int);
};
} // namespace DirectUI
