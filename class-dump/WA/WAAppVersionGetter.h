//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSString;

@interface WAAppVersionGetter : NSObject <NSXMLParserDelegate>
{
    BOOL _foundCFBundleShortVersionStringKey;
    BOOL _isValidString;
    NSString *_path;
    NSString *_foundVersion;
    CDUnknownBlockType _completion;
}

+ (id)versionWithXMLPath:(id)arg1;
+ (id)appVersion;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *foundVersion; // @synthesize foundVersion=_foundVersion;
@property(nonatomic) BOOL isValidString; // @synthesize isValidString=_isValidString;
@property(nonatomic) BOOL foundCFBundleShortVersionStringKey; // @synthesize foundCFBundleShortVersionStringKey=_foundCFBundleShortVersionStringKey;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parse:(CDUnknownBlockType)arg1;
- (id)initWithXMLPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

