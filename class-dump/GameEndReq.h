//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface GameEndReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppId:1;
    unsigned int hasCount:1;
    unsigned int hasLocalScore:1;
    unsigned int hasConsumeTime:1;
    unsigned int hasToken:1;
    unsigned int hasDeadCount:1;
    unsigned int hasGameConsumePropsCount:1;
    unsigned int hasGameStartTime:1;
    unsigned int hasGameEndTime:1;
    unsigned int hasShieldNum:1;
    unsigned int hasTotalShots:1;
    unsigned int hasGameCoinCount:1;
    unsigned int hasClientUseReviveNum:1;
    int count;
    unsigned int localScore;
    unsigned int consumeTime;
    unsigned int deadCount;
    int gameConsumePropsCount;
    unsigned int gameStartTime;
    unsigned int gameEndTime;
    unsigned int shieldNum;
    unsigned int totalShots;
    unsigned int gameCoinCount;
    unsigned int clientUseReviveNum;
    BaseRequest *baseRequest;
    NSString *appId;
    NSMutableArray *mutableEnemyKilledList;
    NSString *token;
    NSMutableArray *mutableGameConsumePropsListList;
}

+ (id)parseFromData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, setter=SetClientUseReviveNum:) unsigned int clientUseReviveNum; // @synthesize clientUseReviveNum;
@property(readonly, nonatomic) BOOL hasClientUseReviveNum; // @synthesize hasClientUseReviveNum;
@property(nonatomic, setter=SetGameCoinCount:) unsigned int gameCoinCount; // @synthesize gameCoinCount;
@property(readonly, nonatomic) BOOL hasGameCoinCount; // @synthesize hasGameCoinCount;
@property(nonatomic, setter=SetTotalShots:) unsigned int totalShots; // @synthesize totalShots;
@property(readonly, nonatomic) BOOL hasTotalShots; // @synthesize hasTotalShots;
@property(nonatomic, setter=SetShieldNum:) unsigned int shieldNum; // @synthesize shieldNum;
@property(readonly, nonatomic) BOOL hasShieldNum; // @synthesize hasShieldNum;
@property(nonatomic, setter=SetGameEndTime:) unsigned int gameEndTime; // @synthesize gameEndTime;
@property(readonly, nonatomic) BOOL hasGameEndTime; // @synthesize hasGameEndTime;
@property(nonatomic, setter=SetGameStartTime:) unsigned int gameStartTime; // @synthesize gameStartTime;
@property(readonly, nonatomic) BOOL hasGameStartTime; // @synthesize hasGameStartTime;
@property(retain, nonatomic) NSMutableArray *mutableGameConsumePropsListList; // @synthesize mutableGameConsumePropsListList;
@property(nonatomic, setter=SetGameConsumePropsCount:) int gameConsumePropsCount; // @synthesize gameConsumePropsCount;
@property(readonly, nonatomic) BOOL hasGameConsumePropsCount; // @synthesize hasGameConsumePropsCount;
@property(nonatomic, setter=SetDeadCount:) unsigned int deadCount; // @synthesize deadCount;
@property(readonly, nonatomic) BOOL hasDeadCount; // @synthesize hasDeadCount;
@property(retain, nonatomic, setter=SetToken:) NSString *token; // @synthesize token;
@property(readonly, nonatomic) BOOL hasToken; // @synthesize hasToken;
@property(nonatomic, setter=SetConsumeTime:) unsigned int consumeTime; // @synthesize consumeTime;
@property(readonly, nonatomic) BOOL hasConsumeTime; // @synthesize hasConsumeTime;
@property(nonatomic, setter=SetLocalScore:) unsigned int localScore; // @synthesize localScore;
@property(readonly, nonatomic) BOOL hasLocalScore; // @synthesize hasLocalScore;
@property(retain, nonatomic) NSMutableArray *mutableEnemyKilledList; // @synthesize mutableEnemyKilledList;
@property(nonatomic, setter=SetCount:) int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void)addGameConsumePropsList:(id)arg1;
- (void)addGameConsumePropsListFromArray:(id)arg1;
- (void)addEnemyKilled:(id)arg1;
- (void)addEnemyKilledFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *gameConsumePropsList; // @dynamic gameConsumePropsList;
- (id)gameConsumePropsListList;
@property(retain, nonatomic) NSMutableArray *enemyKilled; // @dynamic enemyKilled;
- (id)enemyKilledList;
- (id)init;

@end

