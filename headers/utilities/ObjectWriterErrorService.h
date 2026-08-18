#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 9 member(s).
class ObjectWriterErrorService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportBadObjectWriterState@ObjectWriterErrorService@@QEAAJAEBVXamlLineInfo@@@Z
    long ReportBadObjectWriterState(XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@ObjectWriterErrorService@@QEAAJJAEBVXamlLineInfo@@AEBVxstring_ptr@@1@Z
    long ReportError(long, XamlLineInfo const &, xstring_ptr const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@ObjectWriterErrorService@@QEAAJJAEBVXamlLineInfo@@AEBVxstring_ptr@@@Z
    long ReportError(long, XamlLineInfo const &, xstring_ptr const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@ObjectWriterErrorService@@QEAAJJAEBVXamlLineInfo@@@Z
    long ReportError(long, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFrameForCollectionAdd@ObjectWriterErrorService@@QEAAJAEBVObjectWriterFrame@@AEBVXamlLineInfo@@@Z
    long ValidateFrameForCollectionAdd(ObjectWriterFrame const &, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFrameForConstructType@ObjectWriterErrorService@@QEAAJAEBVObjectWriterFrame@@AEBVXamlLineInfo@@@Z
    long ValidateFrameForConstructType(ObjectWriterFrame const &, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFrameForWriteValue@ObjectWriterErrorService@@QEAAJAEBVObjectWriterFrame@@AEBVXamlLineInfo@@@Z
    long ValidateFrameForWriteValue(ObjectWriterFrame const &, XamlLineInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WrapErrorWithParserErrorAndRethrow@ObjectWriterErrorService@@QEAAJJAEBVXamlLineInfo@@@Z
    long WrapErrorWithParserErrorAndRethrow(long, XamlLineInfo const &);
};
