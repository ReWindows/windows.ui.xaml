#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 28 member(s).
class XamlBinaryFormatSubReader2 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCValue@XamlBinaryFormatSubReader2@@QEAA?AVCValue@@XZ
    CValue ReadCValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSharedString@XamlBinaryFormatSubReader2@@QEAA?AVxstring_ptr@@XZ
    xstring_ptr ReadSharedString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadUInt@XamlBinaryFormatSubReader2@@QEAAIXZ
    unsigned int ReadUInt();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLineInfo@XamlBinaryFormatSubReader2@@QEAA?BVXamlLineInfo@@I@Z
    XamlLineInfo ResolveLineInfo(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRead@XamlBinaryFormatSubReader2@@QEAA_NAEAVObjectWriterNode@@@Z
    bool TryRead(ObjectWriterNode &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReadHRESULT@XamlBinaryFormatSubReader2@@QEAAJAEAVObjectWriterNode@@PEA_N@Z
    long TryReadHRESULT(ObjectWriterNode &, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlBinaryFormatSubReader2@@QEAA@XZ
    ~XamlBinaryFormatSubReader2();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLineInfo@XamlBinaryFormatSubReader2@@AEAA?BVXamlLineInfo@@XZ
    XamlLineInfo GetLineInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAddNamespaceNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadAddNamespaceNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAddToDictionaryWithKeyNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadAddToDictionaryWithKeyNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBeginConditionalScopeNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadBeginConditionalScopeNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCreateTypeWithConstantBeginInitNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadCreateTypeWithConstantBeginInitNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCreateTypeWithTypeConvertedConstantBeginInitNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadCreateTypeWithTypeConvertedConstantBeginInitNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadGetResourcePropertyBagNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadGetResourcePropertyBagNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMakeCheckPeerTypeNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadMakeCheckPeerTypeNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPersistedString@XamlBinaryFormatSubReader2@@AEAA?AVxstring_ptr@@XZ
    xstring_ptr ReadPersistedString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPersistedXamlNode@XamlBinaryFormatSubReader2@@AEAA?AUPersistedXamlNode2@@XZ
    PersistedXamlNode2 ReadPersistedXamlNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProvideThemeResourceValueNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadProvideThemeResourceValueNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPushConstantNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadPushConstantNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPushScopeAddNamespaceNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadPushScopeAddNamespaceNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPushScopeCreateTypeWithConstantBeginInitNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadPushScopeCreateTypeWithConstantBeginInitNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadPushScopeCreateTypeWithTypeConvertedConstantBeginInitNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadPushScopeCreateTypeWithTypeConvertedConstantBeginInitNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSetCustomRuntimeDataNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadSetCustomRuntimeDataNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSetDeferredPropertyNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadSetDeferredPropertyNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSetValueTypeConvertedConstantNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadSetValueTypeConvertedConstantNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSetValueTypeConvertedResolvedPropertyNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadSetValueTypeConvertedResolvedPropertyNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSetValueTypeConvertedResolvedTypeNode@XamlBinaryFormatSubReader2@@AEAA?AVObjectWriterNode@@XZ
    ObjectWriterNode ReadSetValueTypeConvertedResolvedTypeNode();
};
