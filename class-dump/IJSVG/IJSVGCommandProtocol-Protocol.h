//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IJSVGCommand, IJSVGPath;

@protocol IJSVGCommandProtocol <NSObject>
+ (long long)requiredParameterCount;
+ (void)runWithParams:(double *)arg1 paramCount:(long long)arg2 command:(IJSVGCommand *)arg3 previousCommand:(IJSVGCommand *)arg4 type:(long long)arg5 path:(IJSVGPath *)arg6;
@end
