//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Audio3aStrategyManager : NSObject
{
    struct mutex _mutex;
    BOOL _isSync3aAbilityEnabled;
    unsigned int _isAI3aAbilityEnabled;
    struct Audio3aStrategyInterface *_strategy;
    struct Audio3aProcessingFactory _strategy_factory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct Audio3aStrategyInterface *strategy; // @synthesize strategy=_strategy;
@property(nonatomic) struct Audio3aProcessingFactory strategy_factory; // @synthesize strategy_factory=_strategy_factory;
@property(nonatomic) unsigned int isAI3aAbilityEnabled; // @synthesize isAI3aAbilityEnabled=_isAI3aAbilityEnabled;
@property(nonatomic) BOOL isSync3aAbilityEnabled; // @synthesize isSync3aAbilityEnabled=_isSync3aAbilityEnabled;
- (void)reset;
- (void)enableAgc:(BOOL)arg1;
- (void)enableAns:(BOOL)arg1;
- (void)enableAec:(BOOL)arg1;
- (struct Audio3aStrategyResult)getResult:(const struct Audio3aStrategyFactors *)arg1;
- (void)setIsAI3aAbilityEnabledInternal:(unsigned int)arg1;
- (void)setIsSync3aAbilityEnabledInternal:(BOOL)arg1;
- (void)shutdown;
- (void)setup;
- (id)init;

@end
