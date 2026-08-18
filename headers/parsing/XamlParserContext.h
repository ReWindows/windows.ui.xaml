#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class XamlParserContext {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIgnoredUri@XamlParserContext@@UEAAXAEBVxstring_ptr@@@Z
    virtual void AddIgnoredUri(xstring_ptr const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNamespaceUriIgnored@XamlParserContext@@UEAA_NAEBVxstring_ptr@@@Z
    virtual bool IsNamespaceUriIgnored(xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushScope@XamlParserContext@@QEAAX_N@Z
    void PushScope(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInCollectionFromMember@XamlParserContext@@QEBAIXZ
    unsigned int get_CurrentInCollectionFromMember() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInImplicitContent@XamlParserContext@@QEBA_NXZ
    bool get_CurrentInImplicitContent() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInItemsProperty@XamlParserContext@@QEBA_NXZ
    bool get_CurrentInItemsProperty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentInPropertyElement@XamlParserContext@@QEBA_NXZ
    bool get_CurrentInPropertyElement() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlParserContext@@UEAA@XZ
    virtual ~XamlParserContext();
};
