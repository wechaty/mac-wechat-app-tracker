//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData, NSEvent, WCContactData;

@protocol MMComposeInputViewDelegate <NSObject>
- (void)completeSendEmotion;
- (void)pasteQuotedMessageToInputView:(MessageData *)arg1;
- (void)insertMentionContactToInputView:(WCContactData *)arg1;
- (void)performStartVoipVideoChat;
- (void)performStartVoipVoiceChat;
- (void)performMultiSelection:(BOOL)arg1;
- (void)performKeyDown:(NSEvent *)arg1;
- (BOOL)shouldMakeFirstResponder;
@end
