//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSInvocation;

@interface BKInvocationGrabber : NSProxy
{
    id _target;
    NSInvocation *_invocation;
}

+ (id)grabberWithTarget:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

