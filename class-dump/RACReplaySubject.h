//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSubject.h"

@class NSError, NSMutableArray;

@interface RACReplaySubject : RACSubject
{
    BOOL _hasCompleted;
    BOOL _hasError;
    unsigned long long _capacity;
    NSMutableArray *_valuesReceived;
    NSError *_error;
}

+ (id)replaySubjectWithCapacity:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL hasError; // @synthesize hasError=_hasError;
@property(nonatomic) BOOL hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property(readonly, nonatomic) NSMutableArray *valuesReceived; // @synthesize valuesReceived=_valuesReceived;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)sendError:(id)arg1;
- (void)sendCompleted;
- (void)sendNext:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end

