//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class MMSnsFinderShareAttachInfo, NSArray, NSString;

@interface MMSnsMegaVideoShareItem : NSObject <PBCoding>
{
    NSString *objectId;
    NSString *objectNonceId;
    NSString *nickname;
    NSString *avatar;
    NSString *desc;
    NSString *mediaCount;
    NSArray *mediaList;
    NSString *username;
    MMSnsFinderShareAttachInfo *finderInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)nodeName;
+ (void)initialize;
+ (void)PBArrayAdd_finderInfo;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_mediaCount;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_objectId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMSnsFinderShareAttachInfo *finderInfo; // @synthesize finderInfo;
@property(copy, nonatomic) NSString *username; // @synthesize username;
@property(retain, nonatomic) NSArray *mediaList; // @synthesize mediaList;
@property(copy, nonatomic) NSString *mediaCount; // @synthesize mediaCount;
@property(copy, nonatomic) NSString *desc; // @synthesize desc;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId;
- (BOOL)isEqual:(id)arg1;
- (id)converToShareFeedItem;
- (id)getGallaryDesc;
- (id)getTimelineDesc;
- (id)toXMLV2;
- (id)toXML;
- (void)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

