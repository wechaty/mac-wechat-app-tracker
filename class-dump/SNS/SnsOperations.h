//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DelayInfo, Preload, QuestionBar, RepeatUrl, SocialInfluenceInfo;

@interface SnsOperations : PBGeneratedMessage
{
    unsigned int hasSnsOperationsFlag:1;
    unsigned int hasSocialInfluenceInfo:1;
    unsigned int hasBar:1;
    unsigned int hasDelayinfo:1;
    unsigned int hasPreload:1;
    unsigned int hasRepeaturl:1;
    unsigned int snsOperationsFlag;
    SocialInfluenceInfo *socialInfluenceInfo;
    QuestionBar *bar;
    DelayInfo *delayinfo;
    Preload *preload;
    RepeatUrl *repeaturl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetRepeaturl:) RepeatUrl *repeaturl; // @synthesize repeaturl;
@property(readonly, nonatomic) BOOL hasRepeaturl; // @synthesize hasRepeaturl;
@property(retain, nonatomic, setter=SetPreload:) Preload *preload; // @synthesize preload;
@property(readonly, nonatomic) BOOL hasPreload; // @synthesize hasPreload;
@property(retain, nonatomic, setter=SetDelayinfo:) DelayInfo *delayinfo; // @synthesize delayinfo;
@property(readonly, nonatomic) BOOL hasDelayinfo; // @synthesize hasDelayinfo;
@property(retain, nonatomic, setter=SetBar:) QuestionBar *bar; // @synthesize bar;
@property(readonly, nonatomic) BOOL hasBar; // @synthesize hasBar;
@property(retain, nonatomic, setter=SetSocialInfluenceInfo:) SocialInfluenceInfo *socialInfluenceInfo; // @synthesize socialInfluenceInfo;
@property(readonly, nonatomic) BOOL hasSocialInfluenceInfo; // @synthesize hasSocialInfluenceInfo;
@property(nonatomic, setter=SetSnsOperationsFlag:) unsigned int snsOperationsFlag; // @synthesize snsOperationsFlag;
@property(readonly, nonatomic) BOOL hasSnsOperationsFlag; // @synthesize hasSnsOperationsFlag;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

