//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BusinessCommonItem, BusinessContactItem, BusinessPOIItem, BusinessProductItem, BusinessSnsItem;

@interface BusinessResultItem : PBGeneratedMessage
{
    unsigned int hasType:1;
    unsigned int hasContactItem:1;
    unsigned int hasCommonItem:1;
    unsigned int hasDocId:1;
    unsigned int hasProductItem:1;
    unsigned int hasSnsItem:1;
    unsigned int hasPoiitem:1;
    unsigned int type;
    BusinessContactItem *contactItem;
    BusinessCommonItem *commonItem;
    unsigned long long docId;
    BusinessProductItem *productItem;
    BusinessSnsItem *snsItem;
    BusinessPOIItem *poiitem;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPoiitem:) BusinessPOIItem *poiitem; // @synthesize poiitem;
@property(readonly, nonatomic) BOOL hasPoiitem; // @synthesize hasPoiitem;
@property(retain, nonatomic, setter=SetSnsItem:) BusinessSnsItem *snsItem; // @synthesize snsItem;
@property(readonly, nonatomic) BOOL hasSnsItem; // @synthesize hasSnsItem;
@property(retain, nonatomic, setter=SetProductItem:) BusinessProductItem *productItem; // @synthesize productItem;
@property(readonly, nonatomic) BOOL hasProductItem; // @synthesize hasProductItem;
@property(nonatomic, setter=SetDocId:) unsigned long long docId; // @synthesize docId;
@property(readonly, nonatomic) BOOL hasDocId; // @synthesize hasDocId;
@property(retain, nonatomic, setter=SetCommonItem:) BusinessCommonItem *commonItem; // @synthesize commonItem;
@property(readonly, nonatomic) BOOL hasCommonItem; // @synthesize hasCommonItem;
@property(retain, nonatomic, setter=SetContactItem:) BusinessContactItem *contactItem; // @synthesize contactItem;
@property(readonly, nonatomic) BOOL hasContactItem; // @synthesize hasContactItem;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

