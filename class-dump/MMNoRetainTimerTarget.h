//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMNoRetainTimerTarget : NSObject
{
    SEL _targetAction;
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL targetAction; // @synthesize targetAction=_targetAction;
- (void)onNoRetainTimer:(id)arg1;
- (id)initWithTarget:(id)arg1 withAction:(SEL)arg2;

@end

