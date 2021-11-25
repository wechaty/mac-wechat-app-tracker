//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSData, NSString;
@protocol MultiTalkCgiDelegate;

@interface MultiTalkCgi : NSObject <MMCGIDelegate>
{
    unsigned int m_funcid;
    unsigned int m_seq;
    id <MultiTalkCgiDelegate> m_delegate;
    NSData *m_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_seq; // @synthesize m_seq;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(nonatomic) unsigned int m_funcid; // @synthesize m_funcid;
@property(nonatomic) __weak id <MultiTalkCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)internalRequest;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 FunctionId:(unsigned int)arg2 buffer:(id)arg3 seq:(unsigned int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
