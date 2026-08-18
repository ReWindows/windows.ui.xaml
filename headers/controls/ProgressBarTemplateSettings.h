#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class ProgressBarTemplateSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ProgressBarTemplateSettings@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerAnimationEndPosition@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_ContainerAnimationEndPosition(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerAnimationStartPosition@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_ContainerAnimationStartPosition(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EllipseAnimationEndPosition@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_EllipseAnimationEndPosition(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EllipseAnimationWellPosition@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_EllipseAnimationWellPosition(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EllipseDiameter@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_EllipseDiameter(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EllipseOffset@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_EllipseOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IndicatorLengthDelta@ProgressBarTemplateSettings@DirectUI@@UEAAJPEAN@Z
    virtual long get_IndicatorLengthDelta(double *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ProgressBarTemplateSettings@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ProgressBarTemplateSettings@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ProgressBarTemplateSettings@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@ProgressBarTemplateSettings@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
