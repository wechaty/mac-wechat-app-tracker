//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface GetLoginQRCodeRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int hasOpcode:1;
    unsigned int hasDeviceName:1;
    unsigned int hasUserName:1;
    unsigned int hasExtDevLoginType:1;
    unsigned int hasHardwareExtra:1;
    unsigned int hasSoftType:1;
    unsigned int hasMsgContextPubKey:1;
    unsigned int hasDisableNextAutoLoginInfo:1;
    unsigned int opcode;
    unsigned int extDevLoginType;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *randomEncryKey;
    NSString *deviceName;
    NSString *userName;
    NSString *hardwareExtra;
    NSString *softType;
    SKBuiltinBuffer_t *msgContextPubKey;
    SKBuiltinBuffer_t *disableNextAutoLoginInfo;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetDisableNextAutoLoginInfo:) SKBuiltinBuffer_t *disableNextAutoLoginInfo; // @synthesize disableNextAutoLoginInfo;
@property(readonly, nonatomic) BOOL hasDisableNextAutoLoginInfo; // @synthesize hasDisableNextAutoLoginInfo;
@property(retain, nonatomic, setter=SetMsgContextPubKey:) SKBuiltinBuffer_t *msgContextPubKey; // @synthesize msgContextPubKey;
@property(readonly, nonatomic) BOOL hasMsgContextPubKey; // @synthesize hasMsgContextPubKey;
@property(retain, nonatomic, setter=SetSoftType:) NSString *softType; // @synthesize softType;
@property(readonly, nonatomic) BOOL hasSoftType; // @synthesize hasSoftType;
@property(retain, nonatomic, setter=SetHardwareExtra:) NSString *hardwareExtra; // @synthesize hardwareExtra;
@property(readonly, nonatomic) BOOL hasHardwareExtra; // @synthesize hasHardwareExtra;
@property(nonatomic, setter=SetExtDevLoginType:) unsigned int extDevLoginType; // @synthesize extDevLoginType;
@property(readonly, nonatomic) BOOL hasExtDevLoginType; // @synthesize hasExtDevLoginType;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetDeviceName:) NSString *deviceName; // @synthesize deviceName;
@property(readonly, nonatomic) BOOL hasDeviceName; // @synthesize hasDeviceName;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
