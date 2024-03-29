//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class FinderLiveExtInfo, FinderLiveMediaSpec, FinderLivePurchaseInfo, FinderLiveSdkChannelInfo, NSString;

@interface FinderLiveInfo : PBGeneratedMessage
{
    unsigned int hasLiveId:1;
    unsigned int hasOnlineCnt:1;
    unsigned int hasLiveStatus:1;
    unsigned int hasStreamUrl:1;
    unsigned int hasStartTime:1;
    unsigned int hasLikeCnt:1;
    unsigned int hasEndTime:1;
    unsigned int hasLiveExtInfo:1;
    unsigned int hasLiveSpec:1;
    unsigned int hasLiveSdkChannelInfo:1;
    unsigned int hasPurchaseInfo:1;
    unsigned int hasReplayStatus:1;
    unsigned int onlineCnt;
    unsigned int liveStatus;
    unsigned int startTime;
    unsigned int likeCnt;
    unsigned int endTime;
    unsigned int replayStatus;
    unsigned long long liveId;
    NSString *streamUrl;
    FinderLiveExtInfo *liveExtInfo;
    FinderLiveMediaSpec *liveSpec;
    FinderLiveSdkChannelInfo *liveSdkChannelInfo;
    FinderLivePurchaseInfo *purchaseInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetReplayStatus:) unsigned int replayStatus; // @synthesize replayStatus;
@property(readonly, nonatomic) BOOL hasReplayStatus; // @synthesize hasReplayStatus;
@property(retain, nonatomic, setter=SetPurchaseInfo:) FinderLivePurchaseInfo *purchaseInfo; // @synthesize purchaseInfo;
@property(readonly, nonatomic) BOOL hasPurchaseInfo; // @synthesize hasPurchaseInfo;
@property(retain, nonatomic, setter=SetLiveSdkChannelInfo:) FinderLiveSdkChannelInfo *liveSdkChannelInfo; // @synthesize liveSdkChannelInfo;
@property(readonly, nonatomic) BOOL hasLiveSdkChannelInfo; // @synthesize hasLiveSdkChannelInfo;
@property(retain, nonatomic, setter=SetLiveSpec:) FinderLiveMediaSpec *liveSpec; // @synthesize liveSpec;
@property(readonly, nonatomic) BOOL hasLiveSpec; // @synthesize hasLiveSpec;
@property(retain, nonatomic, setter=SetLiveExtInfo:) FinderLiveExtInfo *liveExtInfo; // @synthesize liveExtInfo;
@property(readonly, nonatomic) BOOL hasLiveExtInfo; // @synthesize hasLiveExtInfo;
@property(nonatomic, setter=SetEndTime:) unsigned int endTime; // @synthesize endTime;
@property(readonly, nonatomic) BOOL hasEndTime; // @synthesize hasEndTime;
@property(nonatomic, setter=SetLikeCnt:) unsigned int likeCnt; // @synthesize likeCnt;
@property(readonly, nonatomic) BOOL hasLikeCnt; // @synthesize hasLikeCnt;
@property(nonatomic, setter=SetStartTime:) unsigned int startTime; // @synthesize startTime;
@property(readonly, nonatomic) BOOL hasStartTime; // @synthesize hasStartTime;
@property(retain, nonatomic, setter=SetStreamUrl:) NSString *streamUrl; // @synthesize streamUrl;
@property(readonly, nonatomic) BOOL hasStreamUrl; // @synthesize hasStreamUrl;
@property(nonatomic, setter=SetLiveStatus:) unsigned int liveStatus; // @synthesize liveStatus;
@property(readonly, nonatomic) BOOL hasLiveStatus; // @synthesize hasLiveStatus;
@property(nonatomic, setter=SetOnlineCnt:) unsigned int onlineCnt; // @synthesize onlineCnt;
@property(readonly, nonatomic) BOOL hasOnlineCnt; // @synthesize hasOnlineCnt;
@property(nonatomic, setter=SetLiveId:) unsigned long long liveId; // @synthesize liveId;
@property(readonly, nonatomic) BOOL hasLiveId; // @synthesize hasLiveId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

