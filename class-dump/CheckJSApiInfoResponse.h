//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, CheckJSApiInfoResponse_FromAppIdInfoResp, CheckJSApiInfoResponse_PluginHostInfoResp, JSAPIBaseResponse, NSMutableArray;

@interface CheckJSApiInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasJsapiBaseresponse:1;
    unsigned int hasHostInfoResp:1;
    unsigned int hasFromInfoResp:1;
    BaseResponse *baseResponse;
    JSAPIBaseResponse *jsapiBaseresponse;
    NSMutableArray *mutableAppControlInfoList;
    NSMutableArray *mutablePluginInfoList;
    CheckJSApiInfoResponse_PluginHostInfoResp *hostInfoResp;
    NSMutableArray *mutableJumpToInfoList;
    CheckJSApiInfoResponse_FromAppIdInfoResp *fromInfoResp;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetFromInfoResp:) CheckJSApiInfoResponse_FromAppIdInfoResp *fromInfoResp; // @synthesize fromInfoResp;
@property(readonly, nonatomic) BOOL hasFromInfoResp; // @synthesize hasFromInfoResp;
@property(retain, nonatomic) NSMutableArray *mutableJumpToInfoList; // @synthesize mutableJumpToInfoList;
@property(retain, nonatomic, setter=SetHostInfoResp:) CheckJSApiInfoResponse_PluginHostInfoResp *hostInfoResp; // @synthesize hostInfoResp;
@property(readonly, nonatomic) BOOL hasHostInfoResp; // @synthesize hasHostInfoResp;
@property(retain, nonatomic) NSMutableArray *mutablePluginInfoList; // @synthesize mutablePluginInfoList;
@property(retain, nonatomic) NSMutableArray *mutableAppControlInfoList; // @synthesize mutableAppControlInfoList;
@property(retain, nonatomic, setter=SetJsapiBaseresponse:) JSAPIBaseResponse *jsapiBaseresponse; // @synthesize jsapiBaseresponse;
@property(readonly, nonatomic) BOOL hasJsapiBaseresponse; // @synthesize hasJsapiBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addJumpToInfo:(id)arg1;
- (void)addJumpToInfoFromArray:(id)arg1;
- (void)addPluginInfo:(id)arg1;
- (void)addPluginInfoFromArray:(id)arg1;
- (void)addAppControlInfo:(id)arg1;
- (void)addAppControlInfoFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *jumpToInfo; // @dynamic jumpToInfo;
- (id)jumpToInfoList;
@property(retain, nonatomic) NSMutableArray *pluginInfo; // @dynamic pluginInfo;
- (id)pluginInfoList;
@property(retain, nonatomic) NSMutableArray *appControlInfo; // @dynamic appControlInfo;
- (id)appControlInfoList;
- (id)init;

@end

