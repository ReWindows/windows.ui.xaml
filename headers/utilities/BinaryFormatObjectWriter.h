#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class BinaryFormatObjectWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideStaticResourceReference@BinaryFormatObjectWriter@@QEAAJAEBVObjectWriterNode@@PEAVCStyle@@W4KnownPropertyIndex@@@Z
    long ProvideStaticResourceReference(ObjectWriterNode const &, CStyle *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideThemeResourceValue@BinaryFormatObjectWriter@@QEAAJAEBVObjectWriterNode@@PEAVCStyle@@W4KnownPropertyIndex@@@Z
    long ProvideThemeResourceValue(ObjectWriterNode const &, CStyle *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProvideValueForMarkupExtension@BinaryFormatObjectWriter@@QEAAJAEBVObjectWriterNode@@@Z
    long ProvideValueForMarkupExtension(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteNode@BinaryFormatObjectWriter@@QEAAJAEBVObjectWriterNode@@@Z
    long WriteNode(ObjectWriterNode const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BinaryFormatObjectWriter@@QEAA@XZ
    ~BinaryFormatObjectWriter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToDictionaryOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long AddToDictionaryOnCurrentInstance(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginConditionalScope@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long BeginConditionalScope(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInitOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long BeginInitOnCurrentInstance(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceFromType@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long CreateInstanceFromType(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConditionalScope@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long EndConditionalScope(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndInitOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long EndInitOnCurrentInstance(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourcePropertyBagForCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long GetResourcePropertyBagForCurrentInstance(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueFromMemberOnParentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long GetValueFromMemberOnParentInstance(ObjectWriterNode const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushConstant@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long PushConstant(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConnectionIdOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long SetConnectionIdOnCurrentInstance(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeferredPropertyOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long SetDeferredPropertyOnCurrentInstance(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long SetNameOnCurrentInstance(ObjectWriterNode const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTemplateBindingOnCurrentInstance@BinaryFormatObjectWriter@@AEAAJAEBVObjectWriterNode@@@Z
    long SetTemplateBindingOnCurrentInstance(ObjectWriterNode const &);
};
