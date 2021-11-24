//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QRCodeLoginCGI;

@interface QRCodeLoginLogic : NSObject
{
    CDUnknownBlockType _didGetQRCodeLoginLogicBlock;
    CDUnknownBlockType _didScannedQRCodeLoginLogicBlock;
    CDUnknownBlockType _didConfirmQRCodeLoginLogicBlock;
    CDUnknownBlockType _didCancelQRCodeLoginLogicBlock;
    CDUnknownBlockType _handleErrorBlock;
    CDUnknownBlockType _didExpiredQRCodeLoginLogicBlock;
    QRCodeLoginCGI *_qrCodeCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QRCodeLoginCGI *qrCodeCGI; // @synthesize qrCodeCGI=_qrCodeCGI;
@property(copy, nonatomic) CDUnknownBlockType didExpiredQRCodeLoginLogicBlock; // @synthesize didExpiredQRCodeLoginLogicBlock=_didExpiredQRCodeLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType handleErrorBlock; // @synthesize handleErrorBlock=_handleErrorBlock;
@property(copy, nonatomic) CDUnknownBlockType didCancelQRCodeLoginLogicBlock; // @synthesize didCancelQRCodeLoginLogicBlock=_didCancelQRCodeLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType didConfirmQRCodeLoginLogicBlock; // @synthesize didConfirmQRCodeLoginLogicBlock=_didConfirmQRCodeLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType didScannedQRCodeLoginLogicBlock; // @synthesize didScannedQRCodeLoginLogicBlock=_didScannedQRCodeLoginLogicBlock;
@property(copy, nonatomic) CDUnknownBlockType didGetQRCodeLoginLogicBlock; // @synthesize didGetQRCodeLoginLogicBlock=_didGetQRCodeLoginLogicBlock;
- (void)stopCGI;
- (void)cleanupCGICallbacks;
- (void)getQRCode;
- (void)setupQRCodeCGI;
- (void)dealloc;
- (id)init;

@end

