//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface RXObjCRuntime : NSObject
{
    NSMutableSet *_classesThatSupportObservingByForwarding;
    NSMutableDictionary *_forwardedSelectorsByClass;
    NSMutableDictionary *_dynamicSubclassByRealClass;
    NSMutableDictionary *_interceptorIMPbySelectorsByClass;
    struct _opaque_pthread_mutex_t _lock;
}

+ (void)registerOptimizedObserver:(CDUnknownBlockType)arg1 encodedAs:(SEL)arg2;
+ (void)initialize;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *interceptorIMPbySelectorsByClass; // @synthesize interceptorIMPbySelectorsByClass=_interceptorIMPbySelectorsByClass;
@property(retain, nonatomic) NSMutableDictionary *dynamicSubclassByRealClass; // @synthesize dynamicSubclassByRealClass=_dynamicSubclassByRealClass;
@property(retain, nonatomic) NSMutableDictionary *forwardedSelectorsByClass; // @synthesize forwardedSelectorsByClass=_forwardedSelectorsByClass;
@property(retain, nonatomic) NSMutableSet *classesThatSupportObservingByForwarding; // @synthesize classesThatSupportObservingByForwarding=_classesThatSupportObservingByForwarding;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
- (BOOL)ensureSwizzledSelector:(SEL)arg1 ofClass:(Class)arg2 newImplementationGenerator:(CDUnknownBlockType)arg3 replacementImplementationGenerator:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (CDUnknownFunctionPointerType)interceptorImplementationForSelector:(SEL)arg1 forClass:(Class)arg2;
- (void)registerInterceptedSelector:(SEL)arg1 implementation:(CDUnknownFunctionPointerType)arg2 forClass:(Class)arg3;
- (BOOL)ensureForwardingMethodsAreSwizzled:(Class)arg1 error:(id *)arg2;
- (Class)ensureHasDynamicFakeSubclass:(Class)arg1 error:(id *)arg2;
- (BOOL)observeByForwardingMessages:(Class)arg1 selector:(SEL)arg2 target:(id)arg3 error:(id *)arg4;
- (void)registerForwardedSelector:(SEL)arg1 forClass:(Class)arg2;
- (BOOL)forwardingSelector:(SEL)arg1 forClass:(Class)arg2;
- (Class)prepareTargetClassForObserving:(id)arg1 error:(id *)arg2;
- (CDUnknownFunctionPointerType)ensurePrepared:(id)arg1 forObserving:(SEL)arg2 error:(id *)arg3;
- (void)performLocked:(CDUnknownBlockType)arg1;
- (id)init;

@end

