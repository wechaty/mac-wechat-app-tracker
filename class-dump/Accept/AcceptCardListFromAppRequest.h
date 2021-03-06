//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface AcceptCardListFromAppRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFromScene:1;
    unsigned int fromScene;
    BaseRequest *baseRequest;
    NSMutableArray *mutableCardListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetFromScene:) unsigned int fromScene; // @synthesize fromScene;
@property(readonly, nonatomic) BOOL hasFromScene; // @synthesize hasFromScene;
@property(retain, nonatomic) NSMutableArray *mutableCardListList; // @synthesize mutableCardListList;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addCardList:(id)arg1;
- (void)addCardListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cardList; // @dynamic cardList;
- (id)cardListList;
- (id)init;

@end

