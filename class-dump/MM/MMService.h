//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface MMService : NSObject
{
    BOOL m_isServiceRemoved;
    BOOL m_isServicePersistent;
    BOOL _m_isInitFinished;
    NSRecursiveLock *_m_initLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *m_initLock; // @synthesize m_initLock=_m_initLock;
@property(nonatomic) BOOL m_isInitFinished; // @synthesize m_isInitFinished=_m_isInitFinished;
@property BOOL m_isServicePersistent; // @synthesize m_isServicePersistent;
@property BOOL m_isServiceRemoved; // @synthesize m_isServiceRemoved;
- (void)dealloc;

@end

