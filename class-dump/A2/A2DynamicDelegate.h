//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class A2DynamicClassDelegate, NSMapTable, NSMutableDictionary, Protocol;

@interface A2DynamicDelegate : NSProxy
{
    Protocol *_protocol;
    NSMutableDictionary *_handlers;
    id _realDelegate;
    A2DynamicClassDelegate *_classProxy;
    NSMapTable *_invocationsBySelectors;
}

+ (id)description;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMapTable *invocationsBySelectors; // @synthesize invocationsBySelectors=_invocationsBySelectors;
@property(retain, nonatomic) A2DynamicClassDelegate *classProxy; // @synthesize classProxy=_classProxy;
@property(nonatomic) __weak id realDelegate; // @synthesize realDelegate=_realDelegate;
@property(readonly, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void)removeBlockImplementationForClassMethod:(SEL)arg1;
- (void)implementClassMethod:(SEL)arg1 withBlock:(id)arg2;
- (id)blockImplementationForClassMethod:(SEL)arg1;
- (void)removeBlockImplementationForMethod:(SEL)arg1;
- (void)implementMethod:(SEL)arg1 withBlock:(id)arg2;
- (id)blockImplementationForMethod:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1;
- (Class)class;
- (BOOL)isClassProxy;

@end
