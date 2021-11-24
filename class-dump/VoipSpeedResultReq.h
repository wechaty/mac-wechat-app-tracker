//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface VoipSpeedResultReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasTestId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasNetType:1;
    unsigned int hasNetName:1;
    unsigned int hasWifiName:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int hasRoomId:1;
    unsigned int hasResultCnt:1;
    unsigned int netType;
    unsigned int roomId;
    unsigned int resultCnt;
    BaseRequest *baseRequest;
    unsigned long long testId;
    unsigned long long roomKey;
    SKBuiltinString_t *netName;
    SKBuiltinString_t *wifiName;
    double longitude;
    double latitude;
    NSMutableArray *mutableResultList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableResultList; // @synthesize mutableResultList;
@property(nonatomic, setter=SetResultCnt:) unsigned int resultCnt; // @synthesize resultCnt;
@property(readonly, nonatomic) BOOL hasResultCnt; // @synthesize hasResultCnt;
@property(nonatomic, setter=SetRoomId:) unsigned int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(nonatomic, setter=SetLatitude:) double latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) double longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(retain, nonatomic, setter=SetWifiName:) SKBuiltinString_t *wifiName; // @synthesize wifiName;
@property(readonly, nonatomic) BOOL hasWifiName; // @synthesize hasWifiName;
@property(retain, nonatomic, setter=SetNetName:) SKBuiltinString_t *netName; // @synthesize netName;
@property(readonly, nonatomic) BOOL hasNetName; // @synthesize hasNetName;
@property(nonatomic, setter=SetNetType:) unsigned int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(nonatomic, setter=SetRoomKey:) unsigned long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetTestId:) unsigned long long testId; // @synthesize testId;
@property(readonly, nonatomic) BOOL hasTestId; // @synthesize hasTestId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addResult:(id)arg1;
- (void)addResultFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *result; // @dynamic result;
- (id)resultList;
- (id)init;

@end

