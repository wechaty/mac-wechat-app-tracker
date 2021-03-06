//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface NICInfo : PBGeneratedMessage
{
    unsigned int hasNicDeviceId:1;
    unsigned int hasNicRole:1;
    unsigned int hasNicIspInfo:1;
    unsigned int hasNetType:1;
    unsigned int hasWanIp:1;
    int nicRole;
    int netType;
    NSString *nicDeviceId;
    NSString *nicIspInfo;
    NSString *wanIp;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetWanIp:) NSString *wanIp; // @synthesize wanIp;
@property(readonly, nonatomic) BOOL hasWanIp; // @synthesize hasWanIp;
@property(nonatomic, setter=SetNetType:) int netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
@property(retain, nonatomic, setter=SetNicIspInfo:) NSString *nicIspInfo; // @synthesize nicIspInfo;
@property(readonly, nonatomic) BOOL hasNicIspInfo; // @synthesize hasNicIspInfo;
@property(nonatomic, setter=SetNicRole:) int nicRole; // @synthesize nicRole;
@property(readonly, nonatomic) BOOL hasNicRole; // @synthesize hasNicRole;
@property(retain, nonatomic, setter=SetNicDeviceId:) NSString *nicDeviceId; // @synthesize nicDeviceId;
@property(readonly, nonatomic) BOOL hasNicDeviceId; // @synthesize hasNicDeviceId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

