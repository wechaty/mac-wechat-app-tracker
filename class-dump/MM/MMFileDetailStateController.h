//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MMFileDetailStateDelegate;

@interface MMFileDetailStateController : NSObject
{
    id <MMFileDetailStateDelegate> _m_fileDetailStateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFileDetailStateDelegate> m_fileDetailStateDelegate; // @synthesize m_fileDetailStateDelegate=_m_fileDetailStateDelegate;
- (void)pauseDownload;
- (void)startDownload;
- (void)stopWait;
- (void)windowDidLoad;
- (id)windowUniqueId;
- (id)fileType;
- (unsigned long long)fileSize;
- (id)fileName;
- (id)title;
- (void)showFileWithoutShowingLoadingWindow;

@end

