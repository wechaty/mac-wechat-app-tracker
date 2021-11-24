//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSColor, NSDate, NSMutableArray, NSString, ReaderTopNewWrap, TemplateWeappOPWrap;

@interface ReaderWrap : NSObject
{
    NSString *m_nsTitle;
    NSString *m_nsUrl;
    NSString *m_nsShortUrl;
    NSString *m_nsTid;
    NSString *m_nsSource;
    NSString *m_nsSourceIcon;
    NSDate *m_pubTime;
    unsigned int m_uiType;
    BOOL m_bHasVedio;
    NSString *m_nsCategory;
    NSString *m_nsUserName;
    NSString *m_nsNickName;
    ReaderTopNewWrap *m_TopNewWrap;
    unsigned int m_uiItemShowType;
    NSColor *m_topColor;
    NSMutableArray *m_arrStyles;
    NSMutableArray *m_arrLines;
    unsigned int _templateOpType;
    unsigned long long _m_index;
    NSAttributedString *_topNewsDescriptionAttributedString;
    TemplateWeappOPWrap *_weappOpWrap;
}

+ (id)getArrReaderWaps:(id)arg1;
+ (id)getFirstReaderTitle:(id)arg1;
+ (struct XmlReaderNode_t *)getReaderNode:(struct XmlReaderNode_t *)arg1;
+ (BOOL)isReaderMsgJumpToWeapp:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TemplateWeappOPWrap *weappOpWrap; // @synthesize weappOpWrap=_weappOpWrap;
@property(nonatomic) unsigned int templateOpType; // @synthesize templateOpType=_templateOpType;
@property(retain, nonatomic) NSAttributedString *topNewsDescriptionAttributedString; // @synthesize topNewsDescriptionAttributedString=_topNewsDescriptionAttributedString;
@property(nonatomic) unsigned long long m_index; // @synthesize m_index=_m_index;
@property(retain, nonatomic) NSMutableArray *m_arrLines; // @synthesize m_arrLines;
@property(retain, nonatomic) NSMutableArray *m_arrStyles; // @synthesize m_arrStyles;
@property(nonatomic) unsigned int m_uiItemShowType; // @synthesize m_uiItemShowType;
@property(retain, nonatomic) NSColor *m_topColor; // @synthesize m_topColor;
@property(retain, nonatomic) ReaderTopNewWrap *m_TopNewWrap; // @synthesize m_TopNewWrap;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSString *m_nsCategory; // @synthesize m_nsCategory;
@property(nonatomic) BOOL m_bHasVedio; // @synthesize m_bHasVedio;
@property(nonatomic) unsigned int m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSDate *m_pubTime; // @synthesize m_pubTime;
@property(retain, nonatomic) NSString *m_nsSourceIcon; // @synthesize m_nsSourceIcon;
@property(retain, nonatomic) NSString *m_nsSource; // @synthesize m_nsSource;
@property(retain, nonatomic) NSString *m_nsTid; // @synthesize m_nsTid;
@property(retain, nonatomic) NSString *m_nsShortUrl; // @synthesize m_nsShortUrl;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
- (id)getTitleWithoutLink;
- (void)dealloc;
- (id)description;

@end

