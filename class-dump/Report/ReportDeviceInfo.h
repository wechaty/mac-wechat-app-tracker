//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ReportDeviceInfo : PBGeneratedMessage
{
    unsigned int hasManufacturer:1;
    unsigned int hasDevice:1;
    unsigned int hasDeviceModel:1;
    unsigned int hasDeviceBrand:1;
    unsigned int hasScreenWidth:1;
    unsigned int hasScreenHeight:1;
    unsigned int hasOsName:1;
    unsigned int hasOsVersion:1;
    unsigned int hasLanguageVersion:1;
    unsigned int device;
    unsigned int screenWidth;
    unsigned int screenHeight;
    NSString *manufacturer;
    NSString *deviceModel;
    NSString *deviceBrand;
    NSString *osName;
    NSString *osVersion;
    NSString *languageVersion;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetLanguageVersion:) NSString *languageVersion; // @synthesize languageVersion;
@property(readonly, nonatomic) BOOL hasLanguageVersion; // @synthesize hasLanguageVersion;
@property(retain, nonatomic, setter=SetOsVersion:) NSString *osVersion; // @synthesize osVersion;
@property(readonly, nonatomic) BOOL hasOsVersion; // @synthesize hasOsVersion;
@property(retain, nonatomic, setter=SetOsName:) NSString *osName; // @synthesize osName;
@property(readonly, nonatomic) BOOL hasOsName; // @synthesize hasOsName;
@property(nonatomic, setter=SetScreenHeight:) unsigned int screenHeight; // @synthesize screenHeight;
@property(readonly, nonatomic) BOOL hasScreenHeight; // @synthesize hasScreenHeight;
@property(nonatomic, setter=SetScreenWidth:) unsigned int screenWidth; // @synthesize screenWidth;
@property(readonly, nonatomic) BOOL hasScreenWidth; // @synthesize hasScreenWidth;
@property(retain, nonatomic, setter=SetDeviceBrand:) NSString *deviceBrand; // @synthesize deviceBrand;
@property(readonly, nonatomic) BOOL hasDeviceBrand; // @synthesize hasDeviceBrand;
@property(retain, nonatomic, setter=SetDeviceModel:) NSString *deviceModel; // @synthesize deviceModel;
@property(readonly, nonatomic) BOOL hasDeviceModel; // @synthesize hasDeviceModel;
@property(nonatomic, setter=SetDevice:) unsigned int device; // @synthesize device;
@property(readonly, nonatomic) BOOL hasDevice; // @synthesize hasDevice;
@property(retain, nonatomic, setter=SetManufacturer:) NSString *manufacturer; // @synthesize manufacturer;
@property(readonly, nonatomic) BOOL hasManufacturer; // @synthesize hasManufacturer;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

