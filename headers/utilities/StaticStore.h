#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class StaticStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBoolean@StaticStore@DirectUI@@SAJEPEAPEAUIInspectable@@@Z
    static long GetBoolean(unsigned char, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@StaticStore@DirectUI@@SAJW4KnownTypeIndex@@PEAPEAUIInspectable@@@Z
    static long GetDefaultValue(int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@StaticStore@DirectUI@@SA?AV?$xref_ptr@VStaticStore@DirectUI@@@@XZ
    static WindissectOpaque GetInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStaticsNoRef@StaticStore@DirectUI@@SAPEAUIPropertyValueStatics@Foundation@Windows@@XZ
    static WindissectOpaque * GetPropertyValueStaticsNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnsetValue@StaticStore@DirectUI@@SAJPEAPEAUIInspectable@@@Z
    static long GetUnsetValue(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUriFactoryNoRef@StaticStore@DirectUI@@SAPEAUIUriRuntimeClassFactory@Foundation@Windows@@XZ
    static WindissectOpaque * GetUriFactoryNoRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisibilityValue@StaticStore@DirectUI@@SAJW4Visibility@Xaml@UI@Windows@@PEAPEAUIInspectable@@@Z
    static long GetVisibilityValue(int, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@StaticStore@DirectUI@@QEAAIXZ
    unsigned int Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StaticStore@DirectUI@@QEAA@XZ
    StaticStore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StaticStore@DirectUI@@QEAA@XZ
    ~StaticStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureStaticStore@StaticStore@DirectUI@@CAJXZ
    static long EnsureStaticStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StaticStore@DirectUI@@AEAAJXZ
    long Initialize();
};
} // namespace DirectUI
