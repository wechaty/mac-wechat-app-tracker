//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TRTCEncodeTypeDecision : NSObject
{
    BOOL _isReceivedEnterRoomQosConfig;
    BOOL _qosEnableEncH265;
    BOOL _enableEncH265ByPrivateAPI;
    BOOL _enableH265ByNoDecodeFailed;
    unsigned long long _latestEncodeType;
    long long _scene;
}

@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) BOOL enableH265ByNoDecodeFailed; // @synthesize enableH265ByNoDecodeFailed=_enableH265ByNoDecodeFailed;
@property(nonatomic) BOOL enableEncH265ByPrivateAPI; // @synthesize enableEncH265ByPrivateAPI=_enableEncH265ByPrivateAPI;
@property(nonatomic) BOOL qosEnableEncH265; // @synthesize qosEnableEncH265=_qosEnableEncH265;
@property(nonatomic) unsigned long long latestEncodeType; // @synthesize latestEncodeType=_latestEncodeType;
@property(readonly, nonatomic) BOOL isReceivedEnterRoomQosConfig; // @synthesize isReceivedEnterRoomQosConfig=_isReceivedEnterRoomQosConfig;
- (BOOL)isSupportDecodeH265;
- (BOOL)isSupportEncodeH265;
- (void)saveLatestEnterRoomEncodeType:(unsigned long long)arg1;
- (unsigned long long)getLastEnterRoomEncodeType;
- (unsigned long long)getExpectVideoCodecType;
- (unsigned int)getExpectVideoCodecTypeValue;
- (BOOL)enterRoomEnableH265Encode;
- (unsigned long long)supportVideoCodecOption;
- (void)setEnableH265Encode:(BOOL)arg1 enableSource:(unsigned long long)arg2;
- (void)setEnableH265EncodeByH265DecodeFail:(BOOL)arg1;
- (void)setEnableH265EncodeByServer:(BOOL)arg1;
- (void)setEnableH265EncodeByPrivateAPI:(BOOL)arg1;
@property(readonly, nonatomic) BOOL enableH265Encode;
- (void)setAppScene:(long long)arg1;
- (id)init;

@end

