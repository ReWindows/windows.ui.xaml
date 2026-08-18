#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace Diagnostics {
class ResourceDependency {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDependency@ResourceDependency@Diagnostics@@QEBA?AV?$xref_ptr@VCDependencyObject@@@@XZ
    WindissectOpaque GetDependency() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@ResourceDependency@Diagnostics@@QEAA?AUResolvedResource@Resources@@PEAVCResourceDictionary@@AEBVxstring_ptr@@PEAVCDependencyObject@@@Z
    ::Resources::ResolvedResource Resolve(CResourceDictionary *, xstring_ptr const &, CDependencyObject *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceDependency@Diagnostics@@QEAA@PEAVCDependencyObject@@W4KnownPropertyIndex@@W4ResourceType@@@Z
    ResourceDependency(CDependencyObject *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceDependency@Diagnostics@@QEAA@AEBV01@@Z
    ResourceDependency(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateValue@ResourceDependency@Diagnostics@@QEAAXPEAUIInspectable@@@Z
    void UpdateValue(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceDependency@Diagnostics@@QEAA@XZ
    ~ResourceDependency();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixDependencyAndProperty@ResourceDependency@Diagnostics@@AEAAXXZ
    void FixDependencyAndProperty();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualResourceTypeIndex@ResourceDependency@Diagnostics@@AEBA?AW4KnownTypeIndex@@QEBVCDependencyObject@@@Z
    int GetActualResourceTypeIndex(CDependencyObject const * const) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualTargetProperty@ResourceDependency@Diagnostics@@AEBAPEBVCDependencyProperty@@XZ
    CDependencyProperty const * GetActualTargetProperty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualTargetPropertyType@ResourceDependency@Diagnostics@@AEBAPEBVCClassInfo@@XZ
    CClassInfo const * GetActualTargetPropertyType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInteropOfStateChange@ResourceDependency@Diagnostics@@AEAAXW4VisualElementState@@@Z
    void NotifyInteropOfStateChange(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryConvertValue@ResourceDependency@Diagnostics@@AEBA_NAEAV?$xref_ptr@VCDependencyObject@@@@@Z
    bool TryConvertValue(WindissectOpaque &) const;
};
} // namespace Diagnostics
