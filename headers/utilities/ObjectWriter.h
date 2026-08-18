#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class ObjectWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableResourceDictionaryDefer@ObjectWriter@@QEAAXXZ
    void DisableResourceDictionaryDefer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndConditionalScope@ObjectWriter@@UEAAJXZ
    virtual long WriteEndConditionalScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMember@ObjectWriter@@UEAAJXZ
    virtual long WriteEndMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObject@ObjectWriter@@UEAAJXZ
    virtual long WriteEndObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectWriter@@UEAA@XZ
    virtual ~ObjectWriter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessError@ObjectWriter@@MEAAJXZ
    virtual long ProcessError();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRemainingResourceProperties@ObjectWriter@@AEAAJXZ
    long ApplyRemainingResourceProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourcePropertyBag@ObjectWriter@@AEAAJXZ
    long GetResourcePropertyBag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSkippingForConditionalScope@ObjectWriter@@AEBA_NXZ
    bool IsSkippingForConditionalScope() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_ApplyCurrentSavedDirectives@ObjectWriter@@AEAAJXZ
    long Logic_ApplyCurrentSavedDirectives();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_AssignProvidedValue@ObjectWriter@@AEAAJXZ
    long Logic_AssignProvidedValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_CheckAndSetCustomRuntimeData@ObjectWriter@@AEAAJXZ
    long Logic_CheckAndSetCustomRuntimeData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_CreateFromInitializationValue@ObjectWriter@@AEAAJXZ
    long Logic_CreateFromInitializationValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_CreatePropertyValueFromText@ObjectWriter@@AEAAJXZ
    long Logic_CreatePropertyValueFromText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_CreateWithCtor@ObjectWriter@@AEAAJXZ
    long Logic_CreateWithCtor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_DoAssignmentToParentCollection@ObjectWriter@@AEAAJXZ
    long Logic_DoAssignmentToParentCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_DoAssignmentToParentProperty@ObjectWriter@@AEAAJXZ
    long Logic_DoAssignmentToParentProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_ProvideValue@ObjectWriter@@AEAAJXZ
    long Logic_ProvideValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_ShouldWriteMemberCreateWithCtor@ObjectWriter@@AEAAJAEA_N@Z
    long Logic_ShouldWriteMemberCreateWithCtor(bool &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndMemberCore@ObjectWriter@@AEAAJXZ
    long WriteEndMemberCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteEndObjectCore@ObjectWriter@@AEAAJXZ
    long WriteEndObjectCore();
};
