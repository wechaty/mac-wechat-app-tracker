//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, TKEvent, TKState, TKStateMachine;

@interface TKTransition : NSObject
{
    TKEvent *_event;
    TKState *_sourceState;
    TKStateMachine *_stateMachine;
    NSDictionary *_userInfo;
}

+ (id)transitionForEvent:(id)arg1 fromState:(id)arg2 inStateMachine:(id)arg3 userInfo:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) TKState *sourceState; // @synthesize sourceState=_sourceState;
@property(retain, nonatomic) TKEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) TKState *destinationState;

@end
