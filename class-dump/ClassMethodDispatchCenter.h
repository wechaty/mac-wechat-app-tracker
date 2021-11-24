//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSDictionary, NSString;

@interface ClassMethodDispatchCenter : MMService <MMService>
{
    NSDictionary *m_dictClsMethodObservers;
    NSDictionary *m_dictClsMethodKeyObservers;
}

- (void).cxx_destruct;
- (id)getClsMethodKeyObserver:(id)arg1 withKey:(id)arg2;
- (id)getClsMethodObservers:(id)arg1 selector:(SEL)arg2;
- (void)unregisterClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (void)unregisterClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)registerClsMethodKeyObserver:(Class)arg1 onProtocol:(id)arg2 withKey:(id)arg3;
- (void)registerClsMethodObserver:(Class)arg1 onProtocol:(id)arg2;
- (void)addObserver:(Class)arg1 toDict:(id)arg2 methods:(struct objc_method_description *)arg3 methodCnt:(unsigned int)arg4;
- (void)initRegister;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

