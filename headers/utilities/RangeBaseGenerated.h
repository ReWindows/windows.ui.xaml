#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 25 member(s).
namespace DirectUI {
class RangeBaseGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@RangeBaseGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueChangedEventSourceNoRef@RangeBaseGenerated@DirectUI@@QEAAJPEAPEAV?$CRoutedEventSource@UIRangeBaseValueChangedEventHandler@Primitives@Controls@Xaml@UI@Windows@@UIInspectable@@UIRangeBaseValueChangedEventArgs@23456@@2@@Z
    long GetValueChangedEventSourceNoRef(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumChanged@RangeBaseGenerated@DirectUI@@UEAAJNN@Z
    virtual long OnMaximumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumChangedProtected@RangeBaseGenerated@DirectUI@@QEAAJNN@Z
    long OnMaximumChangedProtected(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumChanged@RangeBaseGenerated@DirectUI@@UEAAJNN@Z
    virtual long OnMinimumChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumChangedProtected@RangeBaseGenerated@DirectUI@@QEAAJNN@Z
    long OnMinimumChangedProtected(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChanged@RangeBaseGenerated@DirectUI@@UEAAJNN@Z
    virtual long OnValueChanged(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChangedProtected@RangeBaseGenerated@DirectUI@@QEAAJNN@Z
    long OnValueChangedProtected(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ValueChanged@RangeBaseGenerated@DirectUI@@UEAAJPEAUIRangeBaseValueChangedEventHandler@Primitives@Controls@Xaml@UI@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ValueChanged(::Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LargeChange@RangeBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_LargeChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Maximum@RangeBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Maximum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Minimum@RangeBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Minimum(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SmallChange@RangeBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_SmallChange(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@RangeBaseGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_Value(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LargeChange@RangeBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_LargeChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Maximum@RangeBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Maximum(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SmallChange@RangeBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_SmallChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@RangeBaseGenerated@DirectUI@@UEAAJN@Z
    virtual long put_Value(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ValueChanged@RangeBaseGenerated@DirectUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ValueChanged(EventRegistrationToken);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@RangeBaseGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventAddHandlerByIndex@RangeBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@E@Z
    virtual long EventAddHandlerByIndex(int, IInspectable *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventRemoveHandlerByIndex@RangeBaseGenerated@DirectUI@@MEAAJW4KnownEventIndex@@PEAUIInspectable@@@Z
    virtual long EventRemoveHandlerByIndex(int, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@RangeBaseGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@RangeBaseGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@RangeBaseGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
