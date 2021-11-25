//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IWACgiProtocol-Protocol.h"
#import "MMCGIDelegate-Protocol.h"

@class NSString, TSDictionary;

@interface WACgiProxy : NSObject <MMCGIDelegate, IWACgiProtocol>
{
    TSDictionary *_cgiMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSDictionary *cgiMap; // @synthesize cgiMap=_cgiMap;
- (BOOL)shouldUseIOSClientVersion:(unsigned int)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)requestCgi:(id)arg1 withResponse:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
