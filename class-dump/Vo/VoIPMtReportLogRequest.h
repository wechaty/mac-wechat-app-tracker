//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, VoIPMtUserInfo;

@interface VoIPMtReportLogRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasWxGroupid:1;
    unsigned int hasSdkGroupid:1;
    unsigned int hasFromUser:1;
    BaseRequest *baseRequest;
    NSString *wxGroupid;
    NSString *sdkGroupid;
    VoIPMtUserInfo *fromUser;
    NSMutableArray *mutableLogListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutableLogListList; // @synthesize mutableLogListList;
@property(retain, nonatomic, setter=SetFromUser:) VoIPMtUserInfo *fromUser; // @synthesize fromUser;
@property(readonly, nonatomic) BOOL hasFromUser; // @synthesize hasFromUser;
@property(retain, nonatomic, setter=SetSdkGroupid:) NSString *sdkGroupid; // @synthesize sdkGroupid;
@property(readonly, nonatomic) BOOL hasSdkGroupid; // @synthesize hasSdkGroupid;
@property(retain, nonatomic, setter=SetWxGroupid:) NSString *wxGroupid; // @synthesize wxGroupid;
@property(readonly, nonatomic) BOOL hasWxGroupid; // @synthesize hasWxGroupid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addLogList:(id)arg1;
- (void)addLogListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *logList; // @dynamic logList;
- (id)logListList;
- (id)init;

@end
