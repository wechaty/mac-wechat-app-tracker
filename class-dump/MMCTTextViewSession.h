//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMCTTextViewSession : NSObject
{
    BOOL _activated;
    NSArray *_lines;
    NSArray *_lineOrigins;
    struct CGPoint _startPosition;
    struct CGPoint _endPosition;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint endPosition; // @synthesize endPosition=_endPosition;
@property(nonatomic) struct CGPoint startPosition; // @synthesize startPosition=_startPosition;
@property(retain, nonatomic) NSArray *lineOrigins; // @synthesize lineOrigins=_lineOrigins;
@property(retain, nonatomic) NSArray *lines; // @synthesize lines=_lines;
@property(nonatomic) BOOL activated; // @synthesize activated=_activated;
- (struct _NSRange)selectedRange;
- (long long)stringIndexForPosition:(struct CGPoint)arg1;
- (void)endSession;
- (void)beginSession;

@end

