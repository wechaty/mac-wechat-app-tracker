//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureSession;

@interface LVCameraCapture : NSObject
{
    AVCaptureSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
- (id)findAVCaptureDeviceById:(id)arg1;
- (id)createDeviceSession:(id)arg1;
- (void)startLocalVideoPreview:(id)arg1 cameraDevice:(id)arg2;
- (void)startVideo:(id)arg1;
- (void)dealloc;
- (void)stopLocalVideo;
- (void)startLocalVideo:(id)arg1 cameraId:(id)arg2;
- (void)startLocalVideo:(id)arg1;

@end

