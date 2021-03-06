//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LifeCommentInfo, LifePoiInfo;

@interface LifeCommentPoiData : PBGeneratedMessage
{
    unsigned int hasCommentinfo:1;
    unsigned int hasPoi:1;
    unsigned int hasPoibitset:1;
    unsigned int poibitset;
    LifeCommentInfo *commentinfo;
    LifePoiInfo *poi;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetPoibitset:) unsigned int poibitset; // @synthesize poibitset;
@property(readonly, nonatomic) BOOL hasPoibitset; // @synthesize hasPoibitset;
@property(retain, nonatomic, setter=SetPoi:) LifePoiInfo *poi; // @synthesize poi;
@property(readonly, nonatomic) BOOL hasPoi; // @synthesize hasPoi;
@property(retain, nonatomic, setter=SetCommentinfo:) LifeCommentInfo *commentinfo; // @synthesize commentinfo;
@property(readonly, nonatomic) BOOL hasCommentinfo; // @synthesize hasCommentinfo;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

