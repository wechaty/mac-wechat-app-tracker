//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ClientContextInfo, NSData, NSMutableArray;

@interface FinderBaseRequest : PBGeneratedMessage
{
    unsigned int hasUserver:1;
    unsigned int hasScene:1;
    unsigned int hasExtSpamInfo:1;
    unsigned int hasExptFlag:1;
    unsigned int hasCtxInfo:1;
    unsigned int hasRequestId:1;
    unsigned int hasLiveIdentity:1;
    unsigned int userver;
    unsigned int scene;
    unsigned int exptFlag;
    unsigned int liveIdentity;
    NSData *extSpamInfo;
    ClientContextInfo *ctxInfo;
    unsigned long long requestId;
    NSMutableArray *mutableObjectBaseInfosList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableObjectBaseInfosList; // @synthesize mutableObjectBaseInfosList;
@property(nonatomic, setter=SetLiveIdentity:) unsigned int liveIdentity; // @synthesize liveIdentity;
@property(readonly, nonatomic) BOOL hasLiveIdentity; // @synthesize hasLiveIdentity;
@property(nonatomic, setter=SetRequestId:) unsigned long long requestId; // @synthesize requestId;
@property(readonly, nonatomic) BOOL hasRequestId; // @synthesize hasRequestId;
@property(retain, nonatomic, setter=SetCtxInfo:) ClientContextInfo *ctxInfo; // @synthesize ctxInfo;
@property(readonly, nonatomic) BOOL hasCtxInfo; // @synthesize hasCtxInfo;
@property(nonatomic, setter=SetExptFlag:) unsigned int exptFlag; // @synthesize exptFlag;
@property(readonly, nonatomic) BOOL hasExptFlag; // @synthesize hasExptFlag;
@property(retain, nonatomic, setter=SetExtSpamInfo:) NSData *extSpamInfo; // @synthesize extSpamInfo;
@property(readonly, nonatomic) BOOL hasExtSpamInfo; // @synthesize hasExtSpamInfo;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(nonatomic, setter=SetUserver:) unsigned int userver; // @synthesize userver;
@property(readonly, nonatomic) BOOL hasUserver; // @synthesize hasUserver;
- (void)addObjectBaseInfos:(id)arg1;
- (void)addObjectBaseInfosFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *objectBaseInfos; // @dynamic objectBaseInfos;
- (id)objectBaseInfosList;
- (id)init;

@end

