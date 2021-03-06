//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class DirectConnSet, GetNICAddrSvrSet, JbmBitrateRsParam, NSMutableArray, NSString, RelayConnSet, SKBuiltinBuffer_t, VoipAddrSet, VoipRelayData;

@interface VoipMultiRelayData : PBGeneratedMessage
{
    unsigned int hasPeerId:1;
    unsigned int hasCapInfo:1;
    unsigned int hasSendingType:1;
    unsigned int hasVoipSvrAddr:1;
    unsigned int hasPunchSvrAddr:1;
    unsigned int hasVoipNetQuality:1;
    unsigned int hasLinkDisconnectHbInterval:1;
    unsigned int hasLinkDisconnectHbCnt:1;
    unsigned int hasProtocolEncryptLength:1;
    unsigned int hasClientHeadSigns:1;
    unsigned int hasOppositeClientVersion:1;
    unsigned int hasTcpSvrAddr:1;
    unsigned int hasArqstrategy:1;
    unsigned int hasArqcacheLen:1;
    unsigned int hasArqrttThreshold:1;
    unsigned int hasArqusedRateThreshold:1;
    unsigned int hasArqrespRateThreshold:1;
    unsigned int hasEncryptStrategy:1;
    unsigned int hasFecsvrCtr:1;
    unsigned int hasFeckeyPara1:1;
    unsigned int hasFeckeyPara2:1;
    unsigned int hasQosStrategy:1;
    unsigned int hasEncryptKeyBuf:1;
    unsigned int hasOppositeDeviceType:1;
    unsigned int hasRedirectInitThreshold:1;
    unsigned int hasBothSideSwitchFlag:1;
    unsigned int hasJbmBitrateRsConfig:1;
    unsigned int hasGeneralBsintStrategyBuf:1;
    unsigned int hasScoreIntervalDay:1;
    unsigned int hasScoreTitle:1;
    unsigned int hasNatDetectSvrCnt:1;
    unsigned int hasRelayConnSet:1;
    unsigned int hasDirectConnSet:1;
    unsigned int hasGetNicAddrSvrSet:1;
    int sendingType;
    int voipNetQuality;
    int linkDisconnectHbInterval;
    int linkDisconnectHbCnt;
    unsigned int protocolEncryptLength;
    unsigned int oppositeClientVersion;
    int arqstrategy;
    int arqcacheLen;
    int arqrttThreshold;
    int arqusedRateThreshold;
    int arqrespRateThreshold;
    int encryptStrategy;
    int fecsvrCtr;
    int qosStrategy;
    unsigned int oppositeDeviceType;
    unsigned int redirectInitThreshold;
    unsigned int bothSideSwitchFlag;
    unsigned int scoreIntervalDay;
    unsigned int natDetectSvrCnt;
    VoipRelayData *peerId;
    VoipRelayData *capInfo;
    VoipAddrSet *voipSvrAddr;
    VoipAddrSet *punchSvrAddr;
    SKBuiltinBuffer_t *clientHeadSigns;
    VoipAddrSet *tcpSvrAddr;
    SKBuiltinBuffer_t *feckeyPara1;
    SKBuiltinBuffer_t *feckeyPara2;
    SKBuiltinBuffer_t *encryptKeyBuf;
    JbmBitrateRsParam *jbmBitrateRsConfig;
    SKBuiltinBuffer_t *generalBsintStrategyBuf;
    NSString *scoreTitle;
    NSMutableArray *mutableNatDetectSvrList;
    RelayConnSet *relayConnSet;
    DirectConnSet *directConnSet;
    GetNICAddrSvrSet *getNicAddrSvrSet;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetGetNicAddrSvrSet:) GetNICAddrSvrSet *getNicAddrSvrSet; // @synthesize getNicAddrSvrSet;
@property(readonly, nonatomic) BOOL hasGetNicAddrSvrSet; // @synthesize hasGetNicAddrSvrSet;
@property(retain, nonatomic, setter=SetDirectConnSet:) DirectConnSet *directConnSet; // @synthesize directConnSet;
@property(readonly, nonatomic) BOOL hasDirectConnSet; // @synthesize hasDirectConnSet;
@property(retain, nonatomic, setter=SetRelayConnSet:) RelayConnSet *relayConnSet; // @synthesize relayConnSet;
@property(readonly, nonatomic) BOOL hasRelayConnSet; // @synthesize hasRelayConnSet;
@property(retain, nonatomic) NSMutableArray *mutableNatDetectSvrList; // @synthesize mutableNatDetectSvrList;
@property(nonatomic, setter=SetNatDetectSvrCnt:) unsigned int natDetectSvrCnt; // @synthesize natDetectSvrCnt;
@property(readonly, nonatomic) BOOL hasNatDetectSvrCnt; // @synthesize hasNatDetectSvrCnt;
@property(retain, nonatomic, setter=SetScoreTitle:) NSString *scoreTitle; // @synthesize scoreTitle;
@property(readonly, nonatomic) BOOL hasScoreTitle; // @synthesize hasScoreTitle;
@property(nonatomic, setter=SetScoreIntervalDay:) unsigned int scoreIntervalDay; // @synthesize scoreIntervalDay;
@property(readonly, nonatomic) BOOL hasScoreIntervalDay; // @synthesize hasScoreIntervalDay;
@property(retain, nonatomic, setter=SetGeneralBsintStrategyBuf:) SKBuiltinBuffer_t *generalBsintStrategyBuf; // @synthesize generalBsintStrategyBuf;
@property(readonly, nonatomic) BOOL hasGeneralBsintStrategyBuf; // @synthesize hasGeneralBsintStrategyBuf;
@property(retain, nonatomic, setter=SetJbmBitrateRsConfig:) JbmBitrateRsParam *jbmBitrateRsConfig; // @synthesize jbmBitrateRsConfig;
@property(readonly, nonatomic) BOOL hasJbmBitrateRsConfig; // @synthesize hasJbmBitrateRsConfig;
@property(nonatomic, setter=SetBothSideSwitchFlag:) unsigned int bothSideSwitchFlag; // @synthesize bothSideSwitchFlag;
@property(readonly, nonatomic) BOOL hasBothSideSwitchFlag; // @synthesize hasBothSideSwitchFlag;
@property(nonatomic, setter=SetRedirectInitThreshold:) unsigned int redirectInitThreshold; // @synthesize redirectInitThreshold;
@property(readonly, nonatomic) BOOL hasRedirectInitThreshold; // @synthesize hasRedirectInitThreshold;
@property(nonatomic, setter=SetOppositeDeviceType:) unsigned int oppositeDeviceType; // @synthesize oppositeDeviceType;
@property(readonly, nonatomic) BOOL hasOppositeDeviceType; // @synthesize hasOppositeDeviceType;
@property(retain, nonatomic, setter=SetEncryptKeyBuf:) SKBuiltinBuffer_t *encryptKeyBuf; // @synthesize encryptKeyBuf;
@property(readonly, nonatomic) BOOL hasEncryptKeyBuf; // @synthesize hasEncryptKeyBuf;
@property(nonatomic, setter=SetQosStrategy:) int qosStrategy; // @synthesize qosStrategy;
@property(readonly, nonatomic) BOOL hasQosStrategy; // @synthesize hasQosStrategy;
@property(retain, nonatomic, setter=SetFeckeyPara2:) SKBuiltinBuffer_t *feckeyPara2; // @synthesize feckeyPara2;
@property(readonly, nonatomic) BOOL hasFeckeyPara2; // @synthesize hasFeckeyPara2;
@property(retain, nonatomic, setter=SetFeckeyPara1:) SKBuiltinBuffer_t *feckeyPara1; // @synthesize feckeyPara1;
@property(readonly, nonatomic) BOOL hasFeckeyPara1; // @synthesize hasFeckeyPara1;
@property(nonatomic, setter=SetFecsvrCtr:) int fecsvrCtr; // @synthesize fecsvrCtr;
@property(readonly, nonatomic) BOOL hasFecsvrCtr; // @synthesize hasFecsvrCtr;
@property(nonatomic, setter=SetEncryptStrategy:) int encryptStrategy; // @synthesize encryptStrategy;
@property(readonly, nonatomic) BOOL hasEncryptStrategy; // @synthesize hasEncryptStrategy;
@property(nonatomic, setter=SetArqrespRateThreshold:) int arqrespRateThreshold; // @synthesize arqrespRateThreshold;
@property(readonly, nonatomic) BOOL hasArqrespRateThreshold; // @synthesize hasArqrespRateThreshold;
@property(nonatomic, setter=SetArqusedRateThreshold:) int arqusedRateThreshold; // @synthesize arqusedRateThreshold;
@property(readonly, nonatomic) BOOL hasArqusedRateThreshold; // @synthesize hasArqusedRateThreshold;
@property(nonatomic, setter=SetArqrttThreshold:) int arqrttThreshold; // @synthesize arqrttThreshold;
@property(readonly, nonatomic) BOOL hasArqrttThreshold; // @synthesize hasArqrttThreshold;
@property(nonatomic, setter=SetArqcacheLen:) int arqcacheLen; // @synthesize arqcacheLen;
@property(readonly, nonatomic) BOOL hasArqcacheLen; // @synthesize hasArqcacheLen;
@property(nonatomic, setter=SetArqstrategy:) int arqstrategy; // @synthesize arqstrategy;
@property(readonly, nonatomic) BOOL hasArqstrategy; // @synthesize hasArqstrategy;
@property(retain, nonatomic, setter=SetTcpSvrAddr:) VoipAddrSet *tcpSvrAddr; // @synthesize tcpSvrAddr;
@property(readonly, nonatomic) BOOL hasTcpSvrAddr; // @synthesize hasTcpSvrAddr;
@property(nonatomic, setter=SetOppositeClientVersion:) unsigned int oppositeClientVersion; // @synthesize oppositeClientVersion;
@property(readonly, nonatomic) BOOL hasOppositeClientVersion; // @synthesize hasOppositeClientVersion;
@property(retain, nonatomic, setter=SetClientHeadSigns:) SKBuiltinBuffer_t *clientHeadSigns; // @synthesize clientHeadSigns;
@property(readonly, nonatomic) BOOL hasClientHeadSigns; // @synthesize hasClientHeadSigns;
@property(nonatomic, setter=SetProtocolEncryptLength:) unsigned int protocolEncryptLength; // @synthesize protocolEncryptLength;
@property(readonly, nonatomic) BOOL hasProtocolEncryptLength; // @synthesize hasProtocolEncryptLength;
@property(nonatomic, setter=SetLinkDisconnectHbCnt:) int linkDisconnectHbCnt; // @synthesize linkDisconnectHbCnt;
@property(readonly, nonatomic) BOOL hasLinkDisconnectHbCnt; // @synthesize hasLinkDisconnectHbCnt;
@property(nonatomic, setter=SetLinkDisconnectHbInterval:) int linkDisconnectHbInterval; // @synthesize linkDisconnectHbInterval;
@property(readonly, nonatomic) BOOL hasLinkDisconnectHbInterval; // @synthesize hasLinkDisconnectHbInterval;
@property(nonatomic, setter=SetVoipNetQuality:) int voipNetQuality; // @synthesize voipNetQuality;
@property(readonly, nonatomic) BOOL hasVoipNetQuality; // @synthesize hasVoipNetQuality;
@property(retain, nonatomic, setter=SetPunchSvrAddr:) VoipAddrSet *punchSvrAddr; // @synthesize punchSvrAddr;
@property(readonly, nonatomic) BOOL hasPunchSvrAddr; // @synthesize hasPunchSvrAddr;
@property(retain, nonatomic, setter=SetVoipSvrAddr:) VoipAddrSet *voipSvrAddr; // @synthesize voipSvrAddr;
@property(readonly, nonatomic) BOOL hasVoipSvrAddr; // @synthesize hasVoipSvrAddr;
@property(nonatomic, setter=SetSendingType:) int sendingType; // @synthesize sendingType;
@property(readonly, nonatomic) BOOL hasSendingType; // @synthesize hasSendingType;
@property(retain, nonatomic, setter=SetCapInfo:) VoipRelayData *capInfo; // @synthesize capInfo;
@property(readonly, nonatomic) BOOL hasCapInfo; // @synthesize hasCapInfo;
@property(retain, nonatomic, setter=SetPeerId:) VoipRelayData *peerId; // @synthesize peerId;
@property(readonly, nonatomic) BOOL hasPeerId; // @synthesize hasPeerId;
- (void)addNatDetectSvr:(id)arg1;
- (void)addNatDetectSvrFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *natDetectSvr; // @dynamic natDetectSvr;
- (id)natDetectSvrList;
- (id)init;

@end

