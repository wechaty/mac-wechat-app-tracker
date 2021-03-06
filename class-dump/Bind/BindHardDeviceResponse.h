//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, HardDevice, HardDeviceAttr;

@interface BindHardDeviceResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasHardDevice:1;
    unsigned int hasHardDeviceAttr:1;
    unsigned int hasFlag:1;
    unsigned int flag;
    BaseResponse *baseResponse;
    HardDevice *hardDevice;
    HardDeviceAttr *hardDeviceAttr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetFlag:) unsigned int flag; // @synthesize flag;
@property(readonly, nonatomic) BOOL hasFlag; // @synthesize hasFlag;
@property(retain, nonatomic, setter=SetHardDeviceAttr:) HardDeviceAttr *hardDeviceAttr; // @synthesize hardDeviceAttr;
@property(readonly, nonatomic) BOOL hasHardDeviceAttr; // @synthesize hasHardDeviceAttr;
@property(retain, nonatomic, setter=SetHardDevice:) HardDevice *hardDevice; // @synthesize hardDevice;
@property(readonly, nonatomic) BOOL hasHardDevice; // @synthesize hasHardDevice;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

