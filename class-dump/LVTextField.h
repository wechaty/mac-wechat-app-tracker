//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTextField.h"

@interface LVTextField : MMTextField
{
    CDUnknownBlockType _mouseUpEventBlock;
    CDUnknownBlockType _mouseDownEventBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType mouseDownEventBlock; // @synthesize mouseDownEventBlock=_mouseDownEventBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseUpEventBlock; // @synthesize mouseUpEventBlock=_mouseUpEventBlock;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

