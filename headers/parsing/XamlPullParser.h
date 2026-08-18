#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
class XamlPullParser {
public:
    class PrefixNamespacePair;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_Attribute@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_Attribute(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_Directive@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_Directive(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_EndElement@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_EndElement(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_EndOfAttributes@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_EndOfAttributes(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_PrefixDefinition@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_PrefixDefinition(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_StartElement@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_StartElement(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_StartEmptyElement@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_StartEmptyElement(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_StartPropertyElement@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_StartPropertyElement(XamlPullParser *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Static_Logic_TextContent@XamlPullParser@@SAJPEAV1@@Z
    static long Static_Logic_TextContent(XamlPullParser *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlPullParser@@QEAA@XZ
    ~XamlPullParser();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcceptNode@XamlPullParser@@EEAAJAEBVXamlNode@@@Z
    virtual long AcceptNode(XamlNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitPendingNamespaceNodes@XamlPullParser@@AEAAJXZ
    long EmitPendingNamespaceNodes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueWorkingNode@XamlPullParser@@AEAAJXZ
    long EnqueueWorkingNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_AttributeOrDirective@XamlPullParser@@AEAAJI@Z
    long Logic_AttributeOrDirective(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_CheckForStartGetCollectionFromMember@XamlPullParser@@AEAAJXZ
    long Logic_CheckForStartGetCollectionFromMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_EndMember@XamlPullParser@@AEAAJXZ
    long Logic_EndMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_EndObject@XamlPullParser@@AEAAJXZ
    long Logic_EndObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_PrefixDefinition@XamlPullParser@@AEAAJXZ
    long Logic_PrefixDefinition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_StartPropertyElement@XamlPullParser@@AEAAJXZ
    long Logic_StartPropertyElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Logic_TextContent@XamlPullParser@@AEAAJXZ
    long Logic_TextContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopImplicitNodesIfRequired@XamlPullParser@@AEAAJXZ
    long PopImplicitNodesIfRequired();
};
