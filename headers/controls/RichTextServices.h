#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 38 member(s).
class RichTextServices {
public:
    class DirectionalControlRun;
    class EndOfLineRun;
    class EndOfParagraphRun;
    class HiddenRun;
    class Internal;
    class LineBreaking;
    class LineServicesEmbeddedObject;
    class LineServicesEmbeddedObjectContext;
    class LineServicesEmbeddedObjectLineContext;
    class ObjectRun;
    class TextBreak;
    class TextCharactersRun;
    class TextCollapsingCharacters;
    class TextFormatter;
    class TextFormatterCache;
    class TextObject;
    class TextParagraphProperties;
    class TextRunCache;
    class TextRunProperties;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesAssertFailed@RichTextServices@@YAXPEBD0HK@Z
    void LineServicesAssertFailed(char const *, char const *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesCanBreakAfterChar@RichTextServices@@YAJPEAUols@Ptls6@@JPEAW4BRKCOND@3@@Z
    long LineServicesCanBreakAfterChar(WindissectOpaque *, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesCanBreakBeforeChar@RichTextServices@@YAJPEAUols@Ptls6@@JPEAW4BRKCOND@3@@Z
    long LineServicesCanBreakBeforeChar(WindissectOpaque *, long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesDisposePtr@RichTextServices@@YAXPEAUols@Ptls6@@PEAX@Z
    void LineServicesDisposePtr(WindissectOpaque *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesDrawGlyphs@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@HPEAGPEBG3J3PEBJ4PEBUtagLSOFFSET@3@PEBKPEBEJKIPEBUtagLSPOINT@3@PEBUheights@3@JPEBUtagLSRECT@3@@Z
    long LineServicesDrawGlyphs(WindissectOpaque *, WindissectOpaque *, int, unsigned short *, unsigned short const *, unsigned short const *, long, unsigned short const *, long const *, long const *, WindissectOpaque const *, unsigned long const *, unsigned char const *, long, unsigned long, unsigned int, WindissectOpaque const *, WindissectOpaque const *, long, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesDrawStrikethrough@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@IPEBUtagLSPOINT@3@JJKIPEBUtagLSRECT@3@@Z
    long LineServicesDrawStrikethrough(WindissectOpaque *, WindissectOpaque *, unsigned int, WindissectOpaque const *, long, long, unsigned long, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesDrawTextRun@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@HPEBUtagLSPOINT@3@PEBGPEBJJKI2PEBUheights@3@JPEBUtagLSRECT@3@@Z
    long LineServicesDrawTextRun(WindissectOpaque *, WindissectOpaque *, int, WindissectOpaque const *, unsigned short const *, long const *, long, unsigned long, unsigned int, WindissectOpaque const *, WindissectOpaque const *, long, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesDrawUnderline@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@IPEBUtagLSPOINT@3@JJJKIPEBUtagLSRECT@3@@Z
    long LineServicesDrawUnderline(WindissectOpaque *, WindissectOpaque *, unsigned int, WindissectOpaque const *, long, long, long, unsigned long, unsigned int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesFInterruptShaping@RichTextServices@@YAJPEAUols@Ptls6@@KPEAUlsrun@3@1PEAH@Z
    long LineServicesFInterruptShaping(WindissectOpaque *, unsigned long, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesFInterruptStrikethrough@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@1PEAH@Z
    long LineServicesFInterruptStrikethrough(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesFInterruptUnderline@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@1PEAH@Z
    long LineServicesFInterruptUnderline(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesFetchRun@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@Ulsspan_struct@3@JHPEAUlsstyle@3@Ulsfetchposition@3@PEAUlsfetchresult@3@@Z
    long LineServicesFetchRun(WindissectOpaque *, WindissectOpaque *, WindissectOpaque, long, int, WindissectOpaque *, WindissectOpaque, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesFetchTabs@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@PEAUlstabs@3@PEAHPEAJPEAG@Z
    long LineServicesFetchTabs(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, int *, long *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetBreakThroughTab@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@JJPEAJ@Z
    long LineServicesGetBreakThroughTab(WindissectOpaque *, WindissectOpaque *, long, long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetBreakingClasses@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@JGPEAJ2@Z
    long LineServicesGetBreakingClasses(WindissectOpaque *, WindissectOpaque *, long, unsigned short, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetCharAlignmentEndLine@RichTextServices@@YAJPEAUols@Ptls6@@W4_lsdevice@3@KPEAUlsrun@3@GPEAJ@Z
    long LineServicesGetCharAlignmentEndLine(WindissectOpaque *, int, unsigned long, WindissectOpaque *, unsigned short, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetCharAlignmentStartLine@RichTextServices@@YAJPEAUols@Ptls6@@W4_lsdevice@3@KPEAUlsrun@3@GPEAJ@Z
    long LineServicesGetCharAlignmentStartLine(WindissectOpaque *, int, unsigned long, WindissectOpaque *, unsigned short, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetDurMaxExpandRagged@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@KPEAJ@Z
    long LineServicesGetDurMaxExpandRagged(WindissectOpaque *, WindissectOpaque *, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetGlyphAlignmentEndLine@RichTextServices@@YAJPEAUols@Ptls6@@W4_lsdevice@3@KPEAUlsrun@3@GKPEAJ@Z
    long LineServicesGetGlyphAlignmentEndLine(WindissectOpaque *, int, unsigned long, WindissectOpaque *, unsigned short, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetGlyphAlignmentStartLine@RichTextServices@@YAJPEAUols@Ptls6@@W4_lsdevice@3@KPEAUlsrun@3@GKPEAJ@Z
    long LineServicesGetGlyphAlignmentStartLine(WindissectOpaque *, int, unsigned long, WindissectOpaque *, unsigned short, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetGlyphPositions@RichTextServices@@YAJPEAUols@Ptls6@@PEBQEAUlsrun@3@PEBJJW4_lsdevice@3@PEAGPEBG5J5PEBKJKPEAJPEAUtagLSOFFSET@3@@Z
    long LineServicesGetGlyphPositions(WindissectOpaque *, WindissectOpaque * const *, long const *, long, int, unsigned short *, unsigned short const *, unsigned short const *, long, unsigned short const *, unsigned long const *, long, unsigned long, long *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetGlyphs@RichTextServices@@YAJPEAUols@Ptls6@@PEBQEAUlsrun@3@PEBJJPEBGJKPEAG4PEAHPEAPEAGPEAPEAKPEAJ@Z
    long LineServicesGetGlyphs(WindissectOpaque *, WindissectOpaque * const *, long const *, long, unsigned short const *, long, unsigned long, unsigned short *, unsigned short *, int *, unsigned short * *, unsigned long * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetLastLineJustification@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@W4_lskjust@3@HW4_lskalign@3@W4endres@3@PEAHPEAW463@@Z
    long LineServicesGetLastLineJustification(WindissectOpaque *, WindissectOpaque *, int, int, int, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetObjectHandlerInfo@RichTextServices@@YAJPEAUols@Ptls6@@JPEAX@Z
    long LineServicesGetObjectHandlerInfo(WindissectOpaque *, long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetPriorityForGoodTypography@RichTextServices@@YAJPEAUols@Ptls6@@PEAJ@Z
    long LineServicesGetPriorityForGoodTypography(WindissectOpaque *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetReverseObjectInfo@RichTextServices@@YAJPEAUols@Ptls6@@JUlsspan_struct@3@PEAUlsrun@3@PEAH3@Z
    long LineServicesGetReverseObjectInfo(WindissectOpaque *, long, WindissectOpaque, WindissectOpaque *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetRunCharacterWidths@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@W4_lsdevice@3@PEBGJJKPEAJ44@Z
    long LineServicesGetRunCharacterWidths(WindissectOpaque *, WindissectOpaque *, int, unsigned short const *, long, long, unsigned long, long *, long *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetRunStrikethroughInfo@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@PEBUheights@3@KPEAUlsstinfo@3@@Z
    long LineServicesGetRunStrikethroughInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetRunTextMetrics@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@W4_lsdevice@3@KPEAUlstxm@3@@Z
    long LineServicesGetRunTextMetrics(WindissectOpaque *, WindissectOpaque *, int, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesGetRunUnderlineInfo@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@PEBUheights@3@KPEAUlsulinfo@3@@Z
    long LineServicesGetRunUnderlineInfo(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesInlineCreateILSObj@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlscontext@3@PEBUlscbk@3@JPEAPEAVCLsObjectContext@3@@Z
    long LineServicesInlineCreateILSObj(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, long, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesNewPtr@RichTextServices@@YAPEAXPEAUols@Ptls6@@J@Z
    void * LineServicesNewPtr(WindissectOpaque *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesReallocPtr@RichTextServices@@YAPEAXPEAUols@Ptls6@@PEAXJ@Z
    void * LineServicesReallocPtr(WindissectOpaque *, void *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesReleaseGlyphBuffers@RichTextServices@@YAJPEAUols@Ptls6@@PEAGPEAK@Z
    long LineServicesReleaseGlyphBuffers(WindissectOpaque *, unsigned short *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesReleaseRunBuffer@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@PEAUlsrun@3@PEAG@Z
    long LineServicesReleaseRunBuffer(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesReleaseTabsBuffer@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsparaclient@3@PEAULSTBD@3@@Z
    long LineServicesReleaseTabsBuffer(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineServicesReverseEnum@RichTextServices@@YAJPEAUols@Ptls6@@PEAUlsrun@3@PEBUlschp@3@Ulsspan_struct@3@JJKHHPEBUtagLSPOINT@3@4PEBUheights@3@JKPEAVILsSubline@3@@Z
    long LineServicesReverseEnum(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *, WindissectOpaque, long, long, unsigned long, int, int, WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque const *, long, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TxerrFromXResultWorker@RichTextServices@@YA?AW4EnumImpl@Result@1@J@Z
    int TxerrFromXResultWorker(long);
};
