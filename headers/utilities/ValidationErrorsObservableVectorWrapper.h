#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class ValidationErrorsObservableVectorWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ValidationErrorsObservableVectorWrapper@DirectUI@@SA?AV?$ComPtr@U?$IIterable@PEAUIInspectable@@@Collections@Foundation@Windows@@@ctl@@PEAVValidationErrorsCollection@2@@Z
    static WindissectOpaque CreateInstance(::DirectUI::ValidationErrorsCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceAsVector@ValidationErrorsObservableVectorWrapper@DirectUI@@SA?AV?$ComPtr@U?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@@ctl@@PEAVValidationErrorsCollection@2@@Z
    static WindissectOpaque CreateInstanceAsVector(::DirectUI::ValidationErrorsCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_VectorChanged@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAU?$VectorChangedEventHandler@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_VectorChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_VectorChanged@ValidationErrorsObservableVectorWrapper@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_VectorChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ValidationErrorsObservableVectorWrapper@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ValidationErrorsObservableVectorWrapper@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ValidationErrorsObservableVectorWrapper@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ValidationErrorsObservableVectorWrapper@DirectUI@@IEAA@XZ
    ValidationErrorsObservableVectorWrapper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ValidationErrorsObservableVectorWrapper@DirectUI@@MEAA@XZ
    virtual ~ValidationErrorsObservableVectorWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReferenceTrackerWalk@ValidationErrorsObservableVectorWrapper@DirectUI@@EEAAXH@Z
    virtual void OnReferenceTrackerWalk(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessVectorChange@ValidationErrorsObservableVectorWrapper@DirectUI@@AEAAJPEAUIInspectable@@@Z
    long ProcessVectorChange(IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVector@ValidationErrorsObservableVectorWrapper@DirectUI@@AEAAXPEAVValidationErrorsCollection@2@@Z
    void SetVector(::DirectUI::ValidationErrorsCollection *);
};
} // namespace DirectUI
