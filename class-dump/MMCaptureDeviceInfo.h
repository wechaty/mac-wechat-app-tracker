//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCaptureDeviceInfo : NSObject
{
    int _type;
    unsigned int _deviceID;
    NSString *_deviceName;
    NSString *_manufactureName;
    NSString *_uniqueID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) unsigned int deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *manufactureName; // @synthesize manufactureName=_manufactureName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)description;

@end

