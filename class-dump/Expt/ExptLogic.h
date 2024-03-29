//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSString;

@interface ExptLogic : NSObject <MMCGIDelegate>
{
    unsigned int _lastUpdateTime;
    unsigned int _interval;
}

@property(nonatomic) unsigned int interval; // @synthesize interval=_interval;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (BOOL)saveTimeToFile:(unsigned int)arg1 fileName:(id)arg2;
- (unsigned int)getTimeFromFile:(id)arg1;
- (unsigned int)getExptInterval;
- (void)noteGetExptIntervalSec:(unsigned int)arg1;
- (unsigned int)getLastGetExptTime;
- (void)noteGetExptTime:(unsigned int)arg1;
- (BOOL)handleNewXmlContent:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)checkToGetSvrExpt:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

