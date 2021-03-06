//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface LiveSdkChannelParams : PBGeneratedMessage
{
    unsigned int hasUserDefineRecordId:1;
    unsigned int hasStreamId:1;
    unsigned int hasAudienceMode:1;
    unsigned int hasMicAbility:1;
    unsigned int hasQcAppid:1;
    unsigned int hasQcBizid:1;
    unsigned int audienceMode;
    int micAbility;
    NSString *userDefineRecordId;
    NSString *streamId;
    unsigned long long qcAppid;
    unsigned long long qcBizid;
    NSMutableArray *mutableCdnTransInfoList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableCdnTransInfoList; // @synthesize mutableCdnTransInfoList;
@property(nonatomic, setter=SetQcBizid:) unsigned long long qcBizid; // @synthesize qcBizid;
@property(readonly, nonatomic) BOOL hasQcBizid; // @synthesize hasQcBizid;
@property(nonatomic, setter=SetQcAppid:) unsigned long long qcAppid; // @synthesize qcAppid;
@property(readonly, nonatomic) BOOL hasQcAppid; // @synthesize hasQcAppid;
@property(nonatomic, setter=SetMicAbility:) int micAbility; // @synthesize micAbility;
@property(readonly, nonatomic) BOOL hasMicAbility; // @synthesize hasMicAbility;
@property(nonatomic, setter=SetAudienceMode:) unsigned int audienceMode; // @synthesize audienceMode;
@property(readonly, nonatomic) BOOL hasAudienceMode; // @synthesize hasAudienceMode;
@property(retain, nonatomic, setter=SetStreamId:) NSString *streamId; // @synthesize streamId;
@property(readonly, nonatomic) BOOL hasStreamId; // @synthesize hasStreamId;
@property(retain, nonatomic, setter=SetUserDefineRecordId:) NSString *userDefineRecordId; // @synthesize userDefineRecordId;
@property(readonly, nonatomic) BOOL hasUserDefineRecordId; // @synthesize hasUserDefineRecordId;
- (void)addCdnTransInfo:(id)arg1;
- (void)addCdnTransInfoFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cdnTransInfo; // @dynamic cdnTransInfo;
- (id)cdnTransInfoList;
- (id)init;

@end

