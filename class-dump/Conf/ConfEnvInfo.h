//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString, ProxyInfo;

@interface ConfEnvInfo : PBGeneratedMessage
{
    unsigned int hasAppid:1;
    unsigned int hasSubAppid:1;
    unsigned int hasIlinkAppid:1;
    unsigned int hasAuthKey:1;
    unsigned int hasAuthCode:1;
    unsigned int hasWorkDir:1;
    unsigned int hasDebugSvr:1;
    unsigned int hasSvrLongIp:1;
    unsigned int hasSvrShortIp:1;
    unsigned int hasOutLog:1;
    unsigned int hasLogLevel:1;
    unsigned int hasConfMode:1;
    unsigned int hasAudioFlag:1;
    unsigned int hasVideoRatio:1;
    unsigned int hasDefVideoLength:1;
    unsigned int hasVideoFlag:1;
    unsigned int hasImMode:1;
    unsigned int hasBrokenMode:1;
    unsigned int hasOneUpload:1;
    unsigned int hasCpuCore:1;
    unsigned int hasCpuFreq:1;
    unsigned int hasCpuFlag:1;
    unsigned int hasDeviceManufacturer:1;
    unsigned int hasDeviceModel:1;
    unsigned int hasDeviceRelease:1;
    unsigned int hasDeviceIncremental:1;
    unsigned int hasDeviceDisplay:1;
    unsigned int hasDeviceId:1;
    unsigned int hasOsVersion:1;
    unsigned int hasIspInfo:1;
    unsigned int hasSimType:1;
    unsigned int hasOwnerVersion:1;
    unsigned int hasIdcInfo:1;
    unsigned int hasProxyInfo:1;
    unsigned int hasAppId:1;
    unsigned int hasAppSubid:1;
    unsigned int hasIsImunion:1;
    unsigned int hasVideoWidth:1;
    unsigned int hasVideoHeight:1;
    unsigned int debugSvr;
    unsigned int outLog;
    unsigned int logLevel;
    unsigned int confMode;
    unsigned int audioFlag;
    unsigned int videoRatio;
    unsigned int defVideoLength;
    unsigned int videoFlag;
    unsigned int imMode;
    unsigned int brokenMode;
    unsigned int oneUpload;
    unsigned int cpuCore;
    unsigned int cpuFreq;
    unsigned int cpuFlag;
    unsigned int simType;
    unsigned int isImunion;
    unsigned int videoWidth;
    unsigned int videoHeight;
    NSString *appid;
    NSString *subAppid;
    NSString *ilinkAppid;
    NSString *authKey;
    NSString *authCode;
    NSString *workDir;
    NSString *svrLongIp;
    NSString *svrShortIp;
    NSString *deviceManufacturer;
    NSString *deviceModel;
    NSString *deviceRelease;
    NSString *deviceIncremental;
    NSString *deviceDisplay;
    NSData *deviceId;
    NSString *osVersion;
    NSString *ispInfo;
    NSString *ownerVersion;
    NSString *idcInfo;
    ProxyInfo *proxyInfo;
    NSString *appId;
    NSString *appSubid;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetVideoHeight:) unsigned int videoHeight; // @synthesize videoHeight;
@property(readonly, nonatomic) BOOL hasVideoHeight; // @synthesize hasVideoHeight;
@property(nonatomic, setter=SetVideoWidth:) unsigned int videoWidth; // @synthesize videoWidth;
@property(readonly, nonatomic) BOOL hasVideoWidth; // @synthesize hasVideoWidth;
@property(nonatomic, setter=SetIsImunion:) unsigned int isImunion; // @synthesize isImunion;
@property(readonly, nonatomic) BOOL hasIsImunion; // @synthesize hasIsImunion;
@property(retain, nonatomic, setter=SetAppSubid:) NSString *appSubid; // @synthesize appSubid;
@property(readonly, nonatomic) BOOL hasAppSubid; // @synthesize hasAppSubid;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetProxyInfo:) ProxyInfo *proxyInfo; // @synthesize proxyInfo;
@property(readonly, nonatomic) BOOL hasProxyInfo; // @synthesize hasProxyInfo;
@property(retain, nonatomic, setter=SetIdcInfo:) NSString *idcInfo; // @synthesize idcInfo;
@property(readonly, nonatomic) BOOL hasIdcInfo; // @synthesize hasIdcInfo;
@property(retain, nonatomic, setter=SetOwnerVersion:) NSString *ownerVersion; // @synthesize ownerVersion;
@property(readonly, nonatomic) BOOL hasOwnerVersion; // @synthesize hasOwnerVersion;
@property(nonatomic, setter=SetSimType:) unsigned int simType; // @synthesize simType;
@property(readonly, nonatomic) BOOL hasSimType; // @synthesize hasSimType;
@property(retain, nonatomic, setter=SetIspInfo:) NSString *ispInfo; // @synthesize ispInfo;
@property(readonly, nonatomic) BOOL hasIspInfo; // @synthesize hasIspInfo;
@property(retain, nonatomic, setter=SetOsVersion:) NSString *osVersion; // @synthesize osVersion;
@property(readonly, nonatomic) BOOL hasOsVersion; // @synthesize hasOsVersion;
@property(retain, nonatomic, setter=SetDeviceId:) NSData *deviceId; // @synthesize deviceId;
@property(readonly, nonatomic) BOOL hasDeviceId; // @synthesize hasDeviceId;
@property(retain, nonatomic, setter=SetDeviceDisplay:) NSString *deviceDisplay; // @synthesize deviceDisplay;
@property(readonly, nonatomic) BOOL hasDeviceDisplay; // @synthesize hasDeviceDisplay;
@property(retain, nonatomic, setter=SetDeviceIncremental:) NSString *deviceIncremental; // @synthesize deviceIncremental;
@property(readonly, nonatomic) BOOL hasDeviceIncremental; // @synthesize hasDeviceIncremental;
@property(retain, nonatomic, setter=SetDeviceRelease:) NSString *deviceRelease; // @synthesize deviceRelease;
@property(readonly, nonatomic) BOOL hasDeviceRelease; // @synthesize hasDeviceRelease;
@property(retain, nonatomic, setter=SetDeviceModel:) NSString *deviceModel; // @synthesize deviceModel;
@property(readonly, nonatomic) BOOL hasDeviceModel; // @synthesize hasDeviceModel;
@property(retain, nonatomic, setter=SetDeviceManufacturer:) NSString *deviceManufacturer; // @synthesize deviceManufacturer;
@property(readonly, nonatomic) BOOL hasDeviceManufacturer; // @synthesize hasDeviceManufacturer;
@property(nonatomic, setter=SetCpuFlag:) unsigned int cpuFlag; // @synthesize cpuFlag;
@property(readonly, nonatomic) BOOL hasCpuFlag; // @synthesize hasCpuFlag;
@property(nonatomic, setter=SetCpuFreq:) unsigned int cpuFreq; // @synthesize cpuFreq;
@property(readonly, nonatomic) BOOL hasCpuFreq; // @synthesize hasCpuFreq;
@property(nonatomic, setter=SetCpuCore:) unsigned int cpuCore; // @synthesize cpuCore;
@property(readonly, nonatomic) BOOL hasCpuCore; // @synthesize hasCpuCore;
@property(nonatomic, setter=SetOneUpload:) unsigned int oneUpload; // @synthesize oneUpload;
@property(readonly, nonatomic) BOOL hasOneUpload; // @synthesize hasOneUpload;
@property(nonatomic, setter=SetBrokenMode:) unsigned int brokenMode; // @synthesize brokenMode;
@property(readonly, nonatomic) BOOL hasBrokenMode; // @synthesize hasBrokenMode;
@property(nonatomic, setter=SetImMode:) unsigned int imMode; // @synthesize imMode;
@property(readonly, nonatomic) BOOL hasImMode; // @synthesize hasImMode;
@property(nonatomic, setter=SetVideoFlag:) unsigned int videoFlag; // @synthesize videoFlag;
@property(readonly, nonatomic) BOOL hasVideoFlag; // @synthesize hasVideoFlag;
@property(nonatomic, setter=SetDefVideoLength:) unsigned int defVideoLength; // @synthesize defVideoLength;
@property(readonly, nonatomic) BOOL hasDefVideoLength; // @synthesize hasDefVideoLength;
@property(nonatomic, setter=SetVideoRatio:) unsigned int videoRatio; // @synthesize videoRatio;
@property(readonly, nonatomic) BOOL hasVideoRatio; // @synthesize hasVideoRatio;
@property(nonatomic, setter=SetAudioFlag:) unsigned int audioFlag; // @synthesize audioFlag;
@property(readonly, nonatomic) BOOL hasAudioFlag; // @synthesize hasAudioFlag;
@property(nonatomic, setter=SetConfMode:) unsigned int confMode; // @synthesize confMode;
@property(readonly, nonatomic) BOOL hasConfMode; // @synthesize hasConfMode;
@property(nonatomic, setter=SetLogLevel:) unsigned int logLevel; // @synthesize logLevel;
@property(readonly, nonatomic) BOOL hasLogLevel; // @synthesize hasLogLevel;
@property(nonatomic, setter=SetOutLog:) unsigned int outLog; // @synthesize outLog;
@property(readonly, nonatomic) BOOL hasOutLog; // @synthesize hasOutLog;
@property(retain, nonatomic, setter=SetSvrShortIp:) NSString *svrShortIp; // @synthesize svrShortIp;
@property(readonly, nonatomic) BOOL hasSvrShortIp; // @synthesize hasSvrShortIp;
@property(retain, nonatomic, setter=SetSvrLongIp:) NSString *svrLongIp; // @synthesize svrLongIp;
@property(readonly, nonatomic) BOOL hasSvrLongIp; // @synthesize hasSvrLongIp;
@property(nonatomic, setter=SetDebugSvr:) unsigned int debugSvr; // @synthesize debugSvr;
@property(readonly, nonatomic) BOOL hasDebugSvr; // @synthesize hasDebugSvr;
@property(retain, nonatomic, setter=SetWorkDir:) NSString *workDir; // @synthesize workDir;
@property(readonly, nonatomic) BOOL hasWorkDir; // @synthesize hasWorkDir;
@property(retain, nonatomic, setter=SetAuthCode:) NSString *authCode; // @synthesize authCode;
@property(readonly, nonatomic) BOOL hasAuthCode; // @synthesize hasAuthCode;
@property(retain, nonatomic, setter=SetAuthKey:) NSString *authKey; // @synthesize authKey;
@property(readonly, nonatomic) BOOL hasAuthKey; // @synthesize hasAuthKey;
@property(retain, nonatomic, setter=SetIlinkAppid:) NSString *ilinkAppid; // @synthesize ilinkAppid;
@property(readonly, nonatomic) BOOL hasIlinkAppid; // @synthesize hasIlinkAppid;
@property(retain, nonatomic, setter=SetSubAppid:) NSString *subAppid; // @synthesize subAppid;
@property(readonly, nonatomic) BOOL hasSubAppid; // @synthesize hasSubAppid;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

