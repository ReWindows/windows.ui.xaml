#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class ResourceDictionaryGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@ResourceDictionaryGenerated@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MergedDictionaries@ResourceDictionaryGenerated@DirectUI@@UEAAJPEAPEAU?$IVector@PEAVResourceDictionary@Xaml@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_MergedDictionaries(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Source@ResourceDictionaryGenerated@DirectUI@@UEAAJPEAPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long get_Source(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ThemeDictionaries@ResourceDictionaryGenerated@DirectUI@@UEAAJPEAPEAU?$IMap@PEAUIInspectable@@PEAU1@@Collections@Foundation@Windows@@@Z
    virtual long get_ThemeDictionaries(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Source@ResourceDictionaryGenerated@DirectUI@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z
    virtual long put_Source(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@ResourceDictionaryGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@ResourceDictionaryGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@ResourceDictionaryGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
