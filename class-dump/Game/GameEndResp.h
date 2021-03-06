//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface GameEndResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasScore:1;
    unsigned int hasAchievement:1;
    unsigned int hasRank:1;
    unsigned int hasLifeNum:1;
    unsigned int hasCheckLeftTime:1;
    unsigned int hasCount:1;
    unsigned int hasPropsViewTip:1;
    unsigned int hasRankViewTip:1;
    unsigned int hasGameCoinCount:1;
    unsigned int score;
    unsigned int rank;
    unsigned int lifeNum;
    unsigned int checkLeftTime;
    int count;
    unsigned int gameCoinCount;
    BaseResponse *baseResponse;
    NSString *achievement;
    NSMutableArray *mutableRankListList;
    NSString *propsViewTip;
    NSString *rankViewTip;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetGameCoinCount:) unsigned int gameCoinCount; // @synthesize gameCoinCount;
@property(readonly, nonatomic) BOOL hasGameCoinCount; // @synthesize hasGameCoinCount;
@property(retain, nonatomic, setter=SetRankViewTip:) NSString *rankViewTip; // @synthesize rankViewTip;
@property(readonly, nonatomic) BOOL hasRankViewTip; // @synthesize hasRankViewTip;
@property(retain, nonatomic, setter=SetPropsViewTip:) NSString *propsViewTip; // @synthesize propsViewTip;
@property(readonly, nonatomic) BOOL hasPropsViewTip; // @synthesize hasPropsViewTip;
@property(retain, nonatomic) NSMutableArray *mutableRankListList; // @synthesize mutableRankListList;
@property(nonatomic, setter=SetCount:) int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetCheckLeftTime:) unsigned int checkLeftTime; // @synthesize checkLeftTime;
@property(readonly, nonatomic) BOOL hasCheckLeftTime; // @synthesize hasCheckLeftTime;
@property(nonatomic, setter=SetLifeNum:) unsigned int lifeNum; // @synthesize lifeNum;
@property(readonly, nonatomic) BOOL hasLifeNum; // @synthesize hasLifeNum;
@property(nonatomic, setter=SetRank:) unsigned int rank; // @synthesize rank;
@property(readonly, nonatomic) BOOL hasRank; // @synthesize hasRank;
@property(retain, nonatomic, setter=SetAchievement:) NSString *achievement; // @synthesize achievement;
@property(readonly, nonatomic) BOOL hasAchievement; // @synthesize hasAchievement;
@property(nonatomic, setter=SetScore:) unsigned int score; // @synthesize score;
@property(readonly, nonatomic) BOOL hasScore; // @synthesize hasScore;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void)addRankList:(id)arg1;
- (void)addRankListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *rankList; // @dynamic rankList;
- (id)rankListList;
- (id)init;

@end

