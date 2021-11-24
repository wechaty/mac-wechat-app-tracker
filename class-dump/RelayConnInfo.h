//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, VoipAddrSet;

@interface RelayConnInfo : PBGeneratedMessage
{
    unsigned int hasConnId:1;
    unsigned int hasLocalNicDeviceId:1;
    unsigned int hasRemoteNicDeviceId:1;
    unsigned int hasLocalNetType:1;
    unsigned int hasRemoteNetType:1;
    unsigned int hasStatInterval:1;
    unsigned int hasRelaySvr:1;
    unsigned int hasRelayTcpSvr:1;
    unsigned int hasLocalNicType:1;
    unsigned int hasRemoteNicType:1;
    int connId;
    int localNetType;
    int remoteNetType;
    int statInterval;
    int localNicType;
    int remoteNicType;
    NSString *localNicDeviceId;
    NSString *remoteNicDeviceId;
    VoipAddrSet *relaySvr;
    VoipAddrSet *relayTcpSvr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetRemoteNicType:) int remoteNicType; // @synthesize remoteNicType;
@property(readonly, nonatomic) BOOL hasRemoteNicType; // @synthesize hasRemoteNicType;
@property(nonatomic, setter=SetLocalNicType:) int localNicType; // @synthesize localNicType;
@property(readonly, nonatomic) BOOL hasLocalNicType; // @synthesize hasLocalNicType;
@property(retain, nonatomic, setter=SetRelayTcpSvr:) VoipAddrSet *relayTcpSvr; // @synthesize relayTcpSvr;
@property(readonly, nonatomic) BOOL hasRelayTcpSvr; // @synthesize hasRelayTcpSvr;
@property(retain, nonatomic, setter=SetRelaySvr:) VoipAddrSet *relaySvr; // @synthesize relaySvr;
@property(readonly, nonatomic) BOOL hasRelaySvr; // @synthesize hasRelaySvr;
@property(nonatomic, setter=SetStatInterval:) int statInterval; // @synthesize statInterval;
@property(readonly, nonatomic) BOOL hasStatInterval; // @synthesize hasStatInterval;
@property(nonatomic, setter=SetRemoteNetType:) int remoteNetType; // @synthesize remoteNetType;
@property(readonly, nonatomic) BOOL hasRemoteNetType; // @synthesize hasRemoteNetType;
@property(nonatomic, setter=SetLocalNetType:) int localNetType; // @synthesize localNetType;
@property(readonly, nonatomic) BOOL hasLocalNetType; // @synthesize hasLocalNetType;
@property(retain, nonatomic, setter=SetRemoteNicDeviceId:) NSString *remoteNicDeviceId; // @synthesize remoteNicDeviceId;
@property(readonly, nonatomic) BOOL hasRemoteNicDeviceId; // @synthesize hasRemoteNicDeviceId;
@property(retain, nonatomic, setter=SetLocalNicDeviceId:) NSString *localNicDeviceId; // @synthesize localNicDeviceId;
@property(readonly, nonatomic) BOOL hasLocalNicDeviceId; // @synthesize hasLocalNicDeviceId;
@property(nonatomic, setter=SetConnId:) int connId; // @synthesize connId;
@property(readonly, nonatomic) BOOL hasConnId; // @synthesize hasConnId;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

