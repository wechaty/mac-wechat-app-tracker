//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, VoipAddr;

@interface GetNICAddrSvrInfo : PBGeneratedMessage
{
    unsigned int hasNicDeviceId:1;
    unsigned int hasPunchSvr:1;
    NSString *nicDeviceId;
    VoipAddr *punchSvr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPunchSvr:) VoipAddr *punchSvr; // @synthesize punchSvr;
@property(readonly, nonatomic) BOOL hasPunchSvr; // @synthesize hasPunchSvr;
@property(retain, nonatomic, setter=SetNicDeviceId:) NSString *nicDeviceId; // @synthesize nicDeviceId;
@property(readonly, nonatomic) BOOL hasNicDeviceId; // @synthesize hasNicDeviceId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

