#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace DirectUI {
class ValidationErrorsCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ValidationErrorsCollection@DirectUI@@UEAAJPEAUIInputValidationError@Controls@Xaml@UI@Windows@@@Z
    virtual long Append(::Windows::UI::Xaml::Controls::IInputValidationError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ValidationErrorsCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ValidationErrorsCollection@DirectUI@@UEAAJIPEAUIInputValidationError@Controls@Xaml@UI@Windows@@@Z
    virtual long InsertAt(unsigned int, ::Windows::UI::Xaml::Controls::IInputValidationError *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ValidationErrorsCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@ValidationErrorsCollection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ValidationErrorsCollection@DirectUI@@UEAAJIPEAUIInputValidationError@Controls@Xaml@UI@Windows@@@Z
    virtual long SetAt(unsigned int, ::Windows::UI::Xaml::Controls::IInputValidationError *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseVectorChanged@ValidationErrorsCollection@DirectUI@@AEAAJW4CollectionChange@Collections@Foundation@Windows@@I@Z
    long RaiseVectorChanged(int, unsigned int);
};
} // namespace DirectUI
