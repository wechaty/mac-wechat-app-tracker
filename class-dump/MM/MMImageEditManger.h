//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class MMImageEditWindowController, NSString;

@interface MMImageEditManger : MMService <MMService>
{
    unsigned long long _completeType;
    unsigned long long _imageIdentifier;
    NSString *_fromChatName;
    NSString *_imageMessageUniqueID;
    MMImageEditWindowController *_imageEditWindowController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMImageEditWindowController *imageEditWindowController; // @synthesize imageEditWindowController=_imageEditWindowController;
@property(retain, nonatomic) NSString *imageMessageUniqueID; // @synthesize imageMessageUniqueID=_imageMessageUniqueID;
@property(retain, nonatomic) NSString *fromChatName; // @synthesize fromChatName=_fromChatName;
@property(nonatomic) unsigned long long imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(nonatomic) unsigned long long completeType; // @synthesize completeType=_completeType;
- (void)showToast:(id)arg1;
- (void)stopEdit;
- (void)startEdit;
- (BOOL)startImageEditWith:(id)arg1 startInfo:(id)arg2 completeType:(unsigned long long)arg3;
- (void)prepareForEdit:(id)arg1 savePath:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

