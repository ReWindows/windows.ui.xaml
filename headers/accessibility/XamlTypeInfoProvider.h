#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace Private {
class XamlTypeInfoProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@XamlTypeInfoProvider@Private@@QEBAJGPEAPEAUIInspectable@@@Z
    long ActivateInstance(unsigned short, IInspectable * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxEnum@XamlTypeInfoProvider@Private@@QEBAJGIPEAPEAUIInspectable@@@Z
    long BoxEnum(unsigned short, unsigned int, IInspectable * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDependencyProperties@XamlTypeInfoProvider@Private@@QEBAJG@Z
    long EnsureDependencyProperties(unsigned short) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindXamlMember_FromInt32@XamlTypeInfoProvider@Private@@QEAAJHPEAV?$ComPtr@UIXamlMember@Markup@Xaml@UI@Windows@@@WRL@Microsoft@@@Z
    long FindXamlMember_FromInt32(int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindXamlType_FromInt32@XamlTypeInfoProvider@Private@@QEAAJHPEAV?$ComPtr@UIXamlType@Markup@Xaml@UI@Windows@@@WRL@Microsoft@@@Z
    long FindXamlType_FromInt32(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHString@XamlTypeInfoProvider@Private@@QEBAJGPEAPEAUHSTRING__@@@Z
    long GetHString(unsigned short, HSTRING__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@XamlTypeInfoProvider@Private@@QEAAJP6AXQEAUHINSTANCE__@@PEBG@Z@Z
    long Initialize(void ( *)(HINSTANCE__* const, unsigned short const *));
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDependencyProperties@XamlTypeInfoProvider@Private@@QEBAXXZ
    void ResetDependencyProperties() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlTypeInfoProvider@Private@@QEAA@$$QEBV01@@Z
    XamlTypeInfoProvider(::Private::XamlTypeInfoProvider const &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlTypeInfoProvider@Private@@QEAA@XZ
    ~XamlTypeInfoProvider();
};
} // namespace Private
