//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IJSVGGroup.h"

@class IJSVGStyleSheet, NSMutableArray, NSMutableDictionary, NSXMLDocument;
@protocol IJSVGParserDelegate;

@interface IJSVGParser : IJSVGGroup
{
    struct CGRect viewBox;
    struct CGSize proposedViewSize;
    id <IJSVGParserDelegate> _delegate;
    NSXMLDocument *_document;
    NSMutableArray *_glyphs;
    IJSVGStyleSheet *_styleSheet;
    NSMutableArray *_parsedNodes;
    NSMutableDictionary *_defNodes;
    NSMutableDictionary *_baseDefNodes;
    NSMutableArray *_svgs;
    NSMutableArray *_definedGroups;
    struct {
        unsigned int shouldHandleForeignObject:1;
        unsigned int handleForeignObject:1;
        unsigned int handleSubSVG:1;
    } _respondsTo;
}

+ (BOOL)isDataSVG:(id)arg1;
+ (id)groupForFileURL:(id)arg1 error:(id *)arg2 delegate:(id)arg3;
+ (id)groupForFileURL:(id)arg1 delegate:(id)arg2;
+ (id)groupForFileURL:(id)arg1;
@property(readonly, nonatomic) struct CGSize proposedViewSize; // @synthesize proposedViewSize;
@property(readonly, nonatomic) struct CGRect viewBox; // @synthesize viewBox;
- (void)_parseRect:(id)arg1 intoPath:(id)arg2;
- (void)_parsePoly:(id)arg1 intoPath:(id)arg2 closePath:(BOOL)arg3;
- (void)_parsePolygon:(id)arg1 intoPath:(id)arg2;
- (void)_parsePolyline:(id)arg1 intoPath:(id)arg2;
- (void)_parseEllipse:(id)arg1 intoPath:(id)arg2;
- (void)_parseCircle:(id)arg1 intoPath:(id)arg2;
- (void)_parseLine:(id)arg1 intoPath:(id)arg2;
- (id)_parseCommandString:(id)arg1 previousCommand:(id)arg2 intoPath:(id)arg3;
- (void)_parsePathCommandData:(id)arg1 intoPath:(id)arg2;
- (void)_parseBlock:(id)arg1 intoGroup:(id)arg2 def:(BOOL)arg3;
- (id)mergedElement:(id)arg1 withReferenceElement:(id)arg2;
- (void)_parseBaseBlock:(id)arg1 intoGroup:(id)arg2 def:(BOOL)arg3;
- (void)parseDefsForElement:(id)arg1;
- (void)_setupDefaultsForNode:(id)arg1;
- (void)_parseElementForCommonAttributes:(id)arg1 node:(id)arg2 ignoreAttributes:(id)arg3;
- (void)addGlyph:(id)arg1;
- (id)subSVGs:(BOOL)arg1;
- (void)addSubSVG:(id)arg1;
- (id)glyphs;
- (BOOL)isFont;
- (id)definedObjectForID:(id)arg1;
- (id)definedObjectForID:(id)arg1 xmlElement:(id *)arg2;
- (void)_postParseElementForCommonAttributes:(id)arg1 node:(id)arg2 ignoreAttributes:(id)arg3;
- (void)_parse;
- (struct CGSize)size;
- (BOOL)_validateParse:(id *)arg1;
- (void *)_handleErrorWithCode:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2 delegate:(id)arg3;
- (id)initWithSVGString:(id)arg1 error:(id *)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

