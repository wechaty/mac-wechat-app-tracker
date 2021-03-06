//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, LbsLocation, NSMutableArray, NSString;

@interface CreatePoiRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasName:1;
    unsigned int hasDistrict:1;
    unsigned int hasStreet:1;
    unsigned int hasLoc:1;
    unsigned int hasCount:1;
    unsigned int hasTelephone:1;
    unsigned int hasPhotoUrl:1;
    unsigned int count;
    BaseRequest *baseRequest;
    NSString *name;
    NSString *district;
    NSString *street;
    LbsLocation *loc;
    NSMutableArray *mutableCategoriesList;
    NSString *telephone;
    NSString *photoUrl;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPhotoUrl:) NSString *photoUrl; // @synthesize photoUrl;
@property(readonly, nonatomic) BOOL hasPhotoUrl; // @synthesize hasPhotoUrl;
@property(retain, nonatomic, setter=SetTelephone:) NSString *telephone; // @synthesize telephone;
@property(readonly, nonatomic) BOOL hasTelephone; // @synthesize hasTelephone;
@property(retain, nonatomic) NSMutableArray *mutableCategoriesList; // @synthesize mutableCategoriesList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetLoc:) LbsLocation *loc; // @synthesize loc;
@property(readonly, nonatomic) BOOL hasLoc; // @synthesize hasLoc;
@property(retain, nonatomic, setter=SetStreet:) NSString *street; // @synthesize street;
@property(readonly, nonatomic) BOOL hasStreet; // @synthesize hasStreet;
@property(retain, nonatomic, setter=SetDistrict:) NSString *district; // @synthesize district;
@property(readonly, nonatomic) BOOL hasDistrict; // @synthesize hasDistrict;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addCategories:(id)arg1;
- (void)addCategoriesFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *categories; // @dynamic categories;
- (id)categoriesList;
- (id)init;

@end

