//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class HardDevice, HardDeviceAttr;

@interface ModHardDevice : PBGeneratedMessage
{
    unsigned int hasHardDevice:1;
    unsigned int hasHardDeviceAttr:1;
    unsigned int hasBindFlag:1;
    unsigned int bindFlag;
    HardDevice *hardDevice;
    HardDeviceAttr *hardDeviceAttr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetBindFlag:) unsigned int bindFlag; // @synthesize bindFlag;
@property(readonly, nonatomic) BOOL hasBindFlag; // @synthesize hasBindFlag;
@property(retain, nonatomic, setter=SetHardDeviceAttr:) HardDeviceAttr *hardDeviceAttr; // @synthesize hardDeviceAttr;
@property(readonly, nonatomic) BOOL hasHardDeviceAttr; // @synthesize hasHardDeviceAttr;
@property(retain, nonatomic, setter=SetHardDevice:) HardDevice *hardDevice; // @synthesize hardDevice;
@property(readonly, nonatomic) BOOL hasHardDevice; // @synthesize hasHardDevice;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

