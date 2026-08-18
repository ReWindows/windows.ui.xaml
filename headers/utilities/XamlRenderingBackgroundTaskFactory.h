#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class XamlRenderingBackgroundTaskFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@XamlRenderingBackgroundTaskFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUIXamlRenderingBackgroundTask@Imaging@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableStandaloneHosting@XamlRenderingBackgroundTaskFactory@DirectUI@@UEAAJXZ
    virtual long EnableStandaloneHosting();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalePercentage@XamlRenderingBackgroundTaskFactory@DirectUI@@UEAAJI@Z
    virtual long SetScalePercentage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Resources@XamlRenderingBackgroundTaskFactory@DirectUI@@UEAAJPEAPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    virtual long get_Resources(::Windows::UI::Xaml::IResourceDictionary * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActivationAllowed@XamlRenderingBackgroundTaskFactory@DirectUI@@MEAAJXZ
    virtual long CheckActivationAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlRenderingBackgroundTaskFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlRenderingBackgroundTaskFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@XamlRenderingBackgroundTaskFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlRenderingBackgroundTaskFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ResourcesImpl@XamlRenderingBackgroundTaskFactory@DirectUI@@AEAAJPEAPEAUIResourceDictionary@Xaml@UI@Windows@@@Z
    long get_ResourcesImpl(::Windows::UI::Xaml::IResourceDictionary * *);
};
} // namespace DirectUI
