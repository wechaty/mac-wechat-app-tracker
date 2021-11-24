//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GameStartResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLifeNum:1;
    unsigned int hasCheckLeftTime:1;
    unsigned int hasToken:1;
    unsigned int hasCount:1;
    unsigned int hasGamePropsCount:1;
    unsigned int hasGameCoinCount:1;
    unsigned int lifeNum;
    unsigned int checkLeftTime;
    int count;
    int gamePropsCount;
    unsigned int gameCoinCount;
    BaseResponse *baseResponse;
    NSString *token;
    NSMutableArray *mutableRankListList;
    NSMutableArray *mutableGamePropsListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetGameCoinCount:) unsigned int gameCoinCount; // @synthesize gameCoinCount;
@property(readonly, nonatomic) BOOL hasGameCoinCount; // @synthesize hasGameCoinCount;
@property(retain, nonatomic) NSMutableArray *mutableGamePropsListList; // @synthesize mutableGamePropsListList;
@property(nonatomic, setter=SetGamePropsCount:) int gamePropsCount; // @synthesize gamePropsCount;
@property(readonly, nonatomic) BOOL hasGamePropsCount; // @synthesize hasGamePropsCount;
@property(retain, nonatomic) NSMutableArray *mutableRankListList; // @synthesize mutableRankListList;
@property(nonatomic, setter=SetCount:) int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetToken:) NSString *token; // @synthesize token;
@property(readonly, nonatomic) BOOL hasToken; // @synthesize hasToken;
@property(nonatomic, setter=SetCheckLeftTime:) unsigned int checkLeftTime; // @synthesize checkLeftTime;
@property(readonly, nonatomic) BOOL hasCheckLeftTime; // @synthesize hasCheckLeftTime;
@property(nonatomic, setter=SetLifeNum:) unsigned int lifeNum; // @synthesize lifeNum;
@property(readonly, nonatomic) BOOL hasLifeNum; // @synthesize hasLifeNum;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addGamePropsList:(id)arg1;
- (void)addGamePropsListFromArray:(id)arg1;
- (void)addRankList:(id)arg1;
- (void)addRankListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *gamePropsList; // @dynamic gamePropsList;
- (id)gamePropsListList;
@property(retain, nonatomic) NSMutableArray *rankList; // @dynamic rankList;
- (id)rankListList;
- (id)init;

@end

