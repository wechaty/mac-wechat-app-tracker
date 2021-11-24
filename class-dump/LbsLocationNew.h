//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface LbsLocationNew : PBGeneratedMessage
{
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int hasPrecision:1;
    unsigned int hasMacAddr:1;
    unsigned int hasCellId:1;
    unsigned int hasGpssource:1;
    unsigned int hasAddress:1;
    float longitude;
    float latitude;
    int precision;
    int gpssource;
    NSString *macAddr;
    NSString *cellId;
    NSString *address;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetAddress:) NSString *address; // @synthesize address;
@property(readonly, nonatomic) BOOL hasAddress; // @synthesize hasAddress;
@property(nonatomic, setter=SetGpssource:) int gpssource; // @synthesize gpssource;
@property(readonly, nonatomic) BOOL hasGpssource; // @synthesize hasGpssource;
@property(retain, nonatomic, setter=SetCellId:) NSString *cellId; // @synthesize cellId;
@property(readonly, nonatomic) BOOL hasCellId; // @synthesize hasCellId;
@property(retain, nonatomic, setter=SetMacAddr:) NSString *macAddr; // @synthesize macAddr;
@property(readonly, nonatomic) BOOL hasMacAddr; // @synthesize hasMacAddr;
@property(nonatomic, setter=SetPrecision:) int precision; // @synthesize precision;
@property(readonly, nonatomic) BOOL hasPrecision; // @synthesize hasPrecision;
@property(nonatomic, setter=SetLatitude:) float latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) float longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

