#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
class CValidationErrorsCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CValidationErrorsCollection@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Neat@CValidationErrorsCollection@@UEAAJH@Z
    virtual long Neat(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToCollection@CValidationErrorsCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long OnAddToCollection(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveFromCollection@CValidationErrorsCollection@@UEAAJPEAVCDependencyObject@@H@Z
    virtual long OnRemoveFromCollection(CDependencyObject *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@CValidationErrorsCollection@@UEAAJPEAVCDependencyObject@@@Z
    virtual long ValidateItem(CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValidationError@CValidationErrorsCollection@@AEBA_NPEAVCDependencyObject@@PEAPEAUIInputValidationError@Controls@Xaml@UI@Windows@@@Z
    bool TryGetValidationError(CDependencyObject *, ::Windows::UI::Xaml::Controls::IInputValidationError * *) const;
};
