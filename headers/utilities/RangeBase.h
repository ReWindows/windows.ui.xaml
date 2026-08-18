#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class RangeBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValueChangedImpl@RangeBase@DirectUI@@QEAAJNN@Z
    long OnValueChangedImpl(double, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RangeBase@DirectUI@@QEAA@XZ
    RangeBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LargeChange@RangeBase@DirectUI@@UEAAJN@Z
    virtual long put_LargeChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Maximum@RangeBase@DirectUI@@UEAAJN@Z
    virtual long put_Maximum(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Minimum@RangeBase@DirectUI@@UEAAJN@Z
    virtual long put_Minimum(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SmallChange@RangeBase@DirectUI@@UEAAJN@Z
    virtual long put_SmallChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@RangeBase@DirectUI@@UEAAJN@Z
    virtual long put_Value(double);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue2@RangeBase@DirectUI@@MEAAJPEBVCDependencyProperty@@PEAVCValue@@@Z
    virtual long GetDefaultValue2(CDependencyProperty const *, CValue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RangeBase@DirectUI@@MEAAJPEAPEAUIAutomationPeer@Peers@Automation@Xaml@UI@Windows@@@Z
    virtual long OnCreateAutomationPeer(::Windows::UI::Xaml::Automation::Peers::IAutomationPeer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@RangeBase@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceMaximum@RangeBase@DirectUI@@AEAAJXZ
    long CoerceMaximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceValue@RangeBase@DirectUI@@AEAAJXZ
    long CoerceValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidDoubleValue@RangeBase@DirectUI@@AEAAJN@Z
    long EnsureValidDoubleValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChanged@RangeBase@DirectUI@@AEAAJAEBUPropertyChangedParams@@P8RangeBaseAutomationPeer@2@EAAJAEBVCValue@@1@ZP8RangeBaseGenerated@2@EAAJNN@Z@Z
    long HandlePropertyChanged(PropertyChangedParams const &, long ( ::RangeBaseAutomationPeer::*)(CValue const &, CValue const &), long ( ::RangeBaseGenerated::*)(double, double));
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaximumPropertyChangedBeforeRS4@RangeBase@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnMaximumPropertyChangedBeforeRS4(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinimumPropertyChangedBeforeRS4@RangeBase@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnMinimumPropertyChangedBeforeRS4(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValuePropertyChangedBeforeRS4@RangeBase@DirectUI@@AEAAJAEBUPropertyChangedParams@@@Z
    long OnValuePropertyChangedBeforeRS4(PropertyChangedParams const &);
};
} // namespace DirectUI
