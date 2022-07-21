//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSRegularExpression, NSString;

@interface MessageTextFormatter : NSObject <AccountServiceExt>
{
    NSRegularExpression *_emojiScannerRegexp;
    NSRegularExpression *_hyperlinkScannerRegexp;
    NSRegularExpression *_emailScannerRegexp;
    NSMutableDictionary *_emoticonStringCaches;
    NSDictionary *_dynamicEmojiDescDic;
    NSArray *_qqEmojiKeyList;
    NSDictionary *_expressionWrapDic;
    NSDictionary *_emojiDescWrapDic;
    NSString *_emojiConfigDirPath;
    NSString *_emojiPanelConfiDirPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emojiPanelConfiDirPath; // @synthesize emojiPanelConfiDirPath=_emojiPanelConfiDirPath;
@property(retain, nonatomic) NSString *emojiConfigDirPath; // @synthesize emojiConfigDirPath=_emojiConfigDirPath;
@property(retain, nonatomic) NSDictionary *emojiDescWrapDic; // @synthesize emojiDescWrapDic=_emojiDescWrapDic;
@property(retain, nonatomic) NSDictionary *expressionWrapDic; // @synthesize expressionWrapDic=_expressionWrapDic;
@property(retain, nonatomic) NSArray *qqEmojiKeyList; // @synthesize qqEmojiKeyList=_qqEmojiKeyList;
@property(retain, nonatomic) NSDictionary *dynamicEmojiDescDic; // @synthesize dynamicEmojiDescDic=_dynamicEmojiDescDic;
@property(retain, nonatomic) NSMutableDictionary *emoticonStringCaches; // @synthesize emoticonStringCaches=_emoticonStringCaches;
@property(retain, nonatomic) NSRegularExpression *emailScannerRegexp; // @synthesize emailScannerRegexp=_emailScannerRegexp;
@property(retain, nonatomic) NSRegularExpression *hyperlinkScannerRegexp; // @synthesize hyperlinkScannerRegexp=_hyperlinkScannerRegexp;
@property(retain, nonatomic) NSRegularExpression *emojiScannerRegexp; // @synthesize emojiScannerRegexp=_emojiScannerRegexp;
- (id)QQEmoticonImageForRepresentationalString:(id)arg1;
- (unsigned char)isQQEmoticonImageForRepresentationalString:(id)arg1;
- (void)configEmoticonRegexWithNewExpressionRegexString:(id)arg1;
- (id)valueForKey:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (id)emoticonRegexForNewExpressionCongifWithWrapDic:(id)arg1 descToWrapDic:(id)arg2;
- (id)allQQEmoticonWordsForCurrentLocale;
- (id)getQQEmotionDescForCurLanguage:(id)arg1;
- (void)loadExpression;
- (void)loadQQEmojiKeyListConfig;
- (void)loadQQEmojiKeyList;
- (id)allQQEmoticonWordsForLanguage:(id)arg1;
- (void)setupScanner;
- (id)_emoticonAttributeStringWith:(id)arg1 emojiSize:(id)arg2 useCoreText:(BOOL)arg3;
- (id)referDataFromAttributedString:(id)arg1;
- (id)dataArrayFromAttributedString:(id)arg1;
- (id)stringFromAttributedString:(id)arg1 fromRange:(struct _NSRange)arg2;
- (id)stringFromAttributedString:(id)arg1;
- (id)getLinkAttributeArray:(id)arg1;
- (struct _NSRange)filterExsitLinkRang:(struct _NSRange)arg1 inRangeValues:(id)arg2;
- (id)editSharpTagWithAttributedString:(id)arg1 useSelfLink:(BOOL)arg2;
- (id)editHyperlinksWithAttributedString:(id)arg1 linkRanges:(id)arg2 shouldFormatEmail:(BOOL)arg3 useSelfLink:(BOOL)arg4;
- (id)editHyperlinksWithAttributedString:(id)arg1 shouldFormatEmail:(BOOL)arg2 useSelfLink:(BOOL)arg3;
- (id)editFontSizeWithAttributedString:(id)arg1 sizeAdjustments:(unsigned long long)arg2 extraAttrs:(id)arg3;
- (id)editQQEmojiWithAttributedString:(id)arg1 originalText:(id)arg2 specifiedEmojiSize:(id)arg3 useCoreText:(BOOL)arg4;
- (id)attributedStringFromString:(id)arg1 withFormattingOptions:(id)arg2;
- (id)attributedStringFromString:(id)arg1;
- (void)onUserLogout;
- (void)resetEmojiConfigPath;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

