//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t, SnsAdExpInfo;

@interface SnsTimeLineRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFirstPageMd5:1;
    unsigned int hasMaxId:1;
    unsigned int hasMinFilterId:1;
    unsigned int hasLastRequestTime:1;
    unsigned int hasClientLatestId:1;
    unsigned int hasSession:1;
    unsigned int hasNetworkType:1;
    unsigned int hasAdexpinfo:1;
    unsigned int hasRealFeedExposureIdsCount:1;
    int realFeedExposureIdsMemoizedSerializedSize;
    unsigned int hasUpdateTimelineScene:1;
    unsigned int hasPullType:1;
    unsigned int hasMinIdForGetPrePage:1;
    unsigned int hasMinIdForCheckUnread:1;
    unsigned int hasNearbyFoldId:1;
    unsigned int hasFoldSectionSize:1;
    unsigned int hasGetTimeLineIdxMinId:1;
    unsigned int lastRequestTime;
    unsigned int networkType;
    unsigned int realFeedExposureIdsCount;
    unsigned int updateTimelineScene;
    unsigned int pullType;
    unsigned int foldSectionSize;
    BaseRequest *baseRequest;
    NSString *firstPageMd5;
    unsigned long long maxId;
    unsigned long long minFilterId;
    unsigned long long clientLatestId;
    SKBuiltinBuffer_t *session;
    SnsAdExpInfo *adexpinfo;
    NSMutableArray *mutableRealFeedExposureIdsList;
    unsigned long long minIdForGetPrePage;
    unsigned long long minIdForCheckUnread;
    unsigned long long nearbyFoldId;
    unsigned long long getTimeLineIdxMinId;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetGetTimeLineIdxMinId:) unsigned long long getTimeLineIdxMinId; // @synthesize getTimeLineIdxMinId;
@property(readonly, nonatomic) BOOL hasGetTimeLineIdxMinId; // @synthesize hasGetTimeLineIdxMinId;
@property(nonatomic, setter=SetFoldSectionSize:) unsigned int foldSectionSize; // @synthesize foldSectionSize;
@property(readonly, nonatomic) BOOL hasFoldSectionSize; // @synthesize hasFoldSectionSize;
@property(nonatomic, setter=SetNearbyFoldId:) unsigned long long nearbyFoldId; // @synthesize nearbyFoldId;
@property(readonly, nonatomic) BOOL hasNearbyFoldId; // @synthesize hasNearbyFoldId;
@property(nonatomic, setter=SetMinIdForCheckUnread:) unsigned long long minIdForCheckUnread; // @synthesize minIdForCheckUnread;
@property(readonly, nonatomic) BOOL hasMinIdForCheckUnread; // @synthesize hasMinIdForCheckUnread;
@property(nonatomic, setter=SetMinIdForGetPrePage:) unsigned long long minIdForGetPrePage; // @synthesize minIdForGetPrePage;
@property(readonly, nonatomic) BOOL hasMinIdForGetPrePage; // @synthesize hasMinIdForGetPrePage;
@property(nonatomic, setter=SetPullType:) unsigned int pullType; // @synthesize pullType;
@property(readonly, nonatomic) BOOL hasPullType; // @synthesize hasPullType;
@property(nonatomic, setter=SetUpdateTimelineScene:) unsigned int updateTimelineScene; // @synthesize updateTimelineScene;
@property(readonly, nonatomic) BOOL hasUpdateTimelineScene; // @synthesize hasUpdateTimelineScene;
@property(retain, nonatomic) NSMutableArray *mutableRealFeedExposureIdsList; // @synthesize mutableRealFeedExposureIdsList;
@property(nonatomic, setter=SetRealFeedExposureIdsCount:) unsigned int realFeedExposureIdsCount; // @synthesize realFeedExposureIdsCount;
@property(readonly, nonatomic) BOOL hasRealFeedExposureIdsCount; // @synthesize hasRealFeedExposureIdsCount;
@property(retain, nonatomic, setter=SetAdexpinfo:) SnsAdExpInfo *adexpinfo; // @synthesize adexpinfo;
@property(readonly, nonatomic) BOOL hasAdexpinfo; // @synthesize hasAdexpinfo;
@property(nonatomic, setter=SetNetworkType:) unsigned int networkType; // @synthesize networkType;
@property(readonly, nonatomic) BOOL hasNetworkType; // @synthesize hasNetworkType;
@property(retain, nonatomic, setter=SetSession:) SKBuiltinBuffer_t *session; // @synthesize session;
@property(readonly, nonatomic) BOOL hasSession; // @synthesize hasSession;
@property(nonatomic, setter=SetClientLatestId:) unsigned long long clientLatestId; // @synthesize clientLatestId;
@property(readonly, nonatomic) BOOL hasClientLatestId; // @synthesize hasClientLatestId;
@property(nonatomic, setter=SetLastRequestTime:) unsigned int lastRequestTime; // @synthesize lastRequestTime;
@property(readonly, nonatomic) BOOL hasLastRequestTime; // @synthesize hasLastRequestTime;
@property(nonatomic, setter=SetMinFilterId:) unsigned long long minFilterId; // @synthesize minFilterId;
@property(readonly, nonatomic) BOOL hasMinFilterId; // @synthesize hasMinFilterId;
@property(nonatomic, setter=SetMaxId:) unsigned long long maxId; // @synthesize maxId;
@property(readonly, nonatomic) BOOL hasMaxId; // @synthesize hasMaxId;
@property(retain, nonatomic, setter=SetFirstPageMd5:) NSString *firstPageMd5; // @synthesize firstPageMd5;
@property(readonly, nonatomic) BOOL hasFirstPageMd5; // @synthesize hasFirstPageMd5;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addRealFeedExposureIdsFromArray:(id)arg1;
- (void)addRealFeedExposureIds:(unsigned long long)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *realFeedExposureIds; // @dynamic realFeedExposureIds;
- (id)realFeedExposureIdsList;
- (id)init;

@end

