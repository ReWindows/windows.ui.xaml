#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 15 member(s).
namespace Diagnostics {
class RuntimeObject {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@RuntimeObject@Diagnostics@@UEAAXXZ
    virtual void Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackingObject@RuntimeObject@Diagnostics@@QEBA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@XZ
    WindissectOpaque GetBackingObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppWindow@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsAppWindow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDependencyObject@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsDependencyObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopWindowXamlSource@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsDesktopWindowXamlSource() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNull@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsNull() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValueType@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsValueType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindow@RuntimeObject@Diagnostics@@QEBA_NXZ
    bool IsWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveValue@RuntimeObject@Diagnostics@@QEAAXAEBVRuntimeProperty@2@@Z
    void RemoveValue(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@RuntimeObject@Diagnostics@@QEBA?AVxstring_ptr@@XZ
    xstring_ptr ToString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryClearValue@RuntimeObject@Diagnostics@@UEAA_NAEBVRuntimeProperty@2@@Z
    virtual bool TryClearValue(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RuntimeObject@Diagnostics@@UEAA@XZ
    virtual ~RuntimeObject();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RuntimeObject@Diagnostics@@IEAA@XZ
    RuntimeObject();
};
} // namespace Diagnostics
