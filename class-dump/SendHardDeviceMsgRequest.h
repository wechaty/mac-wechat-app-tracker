//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, HardDevice, HardDeviceMsg, SKBuiltinBuffer_t;

@interface SendHardDeviceMsgRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasHardDevice:1;
    unsigned int hasHardDeviceMsg:1;
    unsigned int hasSessionBuffer:1;
    BaseRequest *baseRequest;
    HardDevice *hardDevice;
    HardDeviceMsg *hardDeviceMsg;
    SKBuiltinBuffer_t *sessionBuffer;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSessionBuffer:) SKBuiltinBuffer_t *sessionBuffer; // @synthesize sessionBuffer;
@property(readonly, nonatomic) BOOL hasSessionBuffer; // @synthesize hasSessionBuffer;
@property(retain, nonatomic, setter=SetHardDeviceMsg:) HardDeviceMsg *hardDeviceMsg; // @synthesize hardDeviceMsg;
@property(readonly, nonatomic) BOOL hasHardDeviceMsg; // @synthesize hasHardDeviceMsg;
@property(retain, nonatomic, setter=SetHardDevice:) HardDevice *hardDevice; // @synthesize hardDevice;
@property(readonly, nonatomic) BOOL hasHardDevice; // @synthesize hasHardDevice;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

