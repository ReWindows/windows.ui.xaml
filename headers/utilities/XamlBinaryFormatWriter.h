#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
class XamlBinaryFormatWriter {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryFormatWriter@@UEAA@XZ
    virtual ~XamlBinaryFormatWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistAddNamespaceNode@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistAddNamespaceNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistLineInfoIfNeeded@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistLineInfoIfNeeded(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistNode@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistStartMemberNode@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistStartMemberNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistStartObjectNode@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistStartObjectNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistTextValueNode@XamlBinaryFormatWriter@@AEAAJAEBVXamlNode@@@Z
    long PersistTextValueNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveNodeType@XamlBinaryFormatWriter@@AEAAJW4XamlNodeType@@@Z
    long SaveNodeType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveValueNodeType@XamlBinaryFormatWriter@@AEAAJW4PersistedXamlValueNodeType@PersistedXamlValueNode@@@Z
    long SaveValueNodeType(int);
};
