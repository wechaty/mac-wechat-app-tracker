//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LifePoiInfo, NSData, NSMutableArray;

@interface UxLifePoiDetailItem : PBGeneratedMessage
{
    unsigned int hasPoi:1;
    unsigned int hasFaved:1;
    unsigned int faved_:1;
    unsigned int hasPoidetaildata:1;
    LifePoiInfo *poi;
    NSMutableArray *mutableCardListList;
    NSData *poidetaildata;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=SetPoidetaildata:) NSData *poidetaildata; // @synthesize poidetaildata;
@property(readonly, nonatomic) BOOL hasPoidetaildata; // @synthesize hasPoidetaildata;
@property(retain, nonatomic) NSMutableArray *mutableCardListList; // @synthesize mutableCardListList;
@property(readonly, nonatomic) BOOL hasFaved; // @synthesize hasFaved;
@property(retain, nonatomic, setter=SetPoi:) LifePoiInfo *poi; // @synthesize poi;
@property(readonly, nonatomic) BOOL hasPoi; // @synthesize hasPoi;
- (void)addCardList:(id)arg1;
- (void)addCardListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
- (id)cardListList;
@property(nonatomic, setter=SetFaved:) BOOL faved; // @synthesize faved=faved_;
- (id)init;

@end

