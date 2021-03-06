//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface POIItem : PBGeneratedMessage
{
    unsigned int hasName:1;
    unsigned int hasAddr:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    unsigned int hasTypeId:1;
    unsigned int hasLink:1;
    unsigned int hasNation:1;
    unsigned int hasProvince:1;
    unsigned int hasCity:1;
    unsigned int hasDistrict:1;
    unsigned int hasStreet:1;
    unsigned int hasSubAddr:1;
    NSString *name;
    NSString *addr;
    double longitude;
    double latitude;
    NSString *typeId;
    NSString *link;
    NSString *nation;
    NSString *province;
    NSString *city;
    NSString *district;
    NSString *street;
    NSString *subAddr;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetSubAddr:) NSString *subAddr; // @synthesize subAddr;
@property(readonly, nonatomic) BOOL hasSubAddr; // @synthesize hasSubAddr;
@property(retain, nonatomic, setter=SetStreet:) NSString *street; // @synthesize street;
@property(readonly, nonatomic) BOOL hasStreet; // @synthesize hasStreet;
@property(retain, nonatomic, setter=SetDistrict:) NSString *district; // @synthesize district;
@property(readonly, nonatomic) BOOL hasDistrict; // @synthesize hasDistrict;
@property(retain, nonatomic, setter=SetCity:) NSString *city; // @synthesize city;
@property(readonly, nonatomic) BOOL hasCity; // @synthesize hasCity;
@property(retain, nonatomic, setter=SetProvince:) NSString *province; // @synthesize province;
@property(readonly, nonatomic) BOOL hasProvince; // @synthesize hasProvince;
@property(retain, nonatomic, setter=SetNation:) NSString *nation; // @synthesize nation;
@property(readonly, nonatomic) BOOL hasNation; // @synthesize hasNation;
@property(retain, nonatomic, setter=SetLink:) NSString *link; // @synthesize link;
@property(readonly, nonatomic) BOOL hasLink; // @synthesize hasLink;
@property(retain, nonatomic, setter=SetTypeId:) NSString *typeId; // @synthesize typeId;
@property(readonly, nonatomic) BOOL hasTypeId; // @synthesize hasTypeId;
@property(nonatomic, setter=SetLatitude:) double latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) double longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(retain, nonatomic, setter=SetAddr:) NSString *addr; // @synthesize addr;
@property(readonly, nonatomic) BOOL hasAddr; // @synthesize hasAddr;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

