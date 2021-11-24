//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface TXCBeautyParams : NSObject
{
    BOOL _enableSharpnessEnhancement;
    BOOL _motionMuted;
    float _beautyLevel;
    float _whiteLevel;
    float _ruddyLevel;
    float _eyeScaleLevel;
    float _faceSlimLevel;
    float _faceBeautyLevel;
    float _faceVLevel;
    float _chinLevel;
    float _faceShortLevel;
    float _narrowFaceLevel;
    float _noseSlimLevel;
    float _eyeLightenLevel;
    float _toothWhitenLevel;
    float _wrinkleRemoveLevel;
    float _pounchRemoveLevel;
    float _smileLinesRemoveLevel;
    float _foreheadLevel;
    float _eyeDistanceLevel;
    float _eyeAngleLevel;
    float _mouthShapeLevel;
    float _noseWingLevel;
    float _nosePositionLevel;
    float _lipsThicknessLevel;
    float _longLegLevel;
    float _thinWaistLevel;
    float _thinBodyLevel;
    float _thinShoulderLevel;
    float _leftFilterStrength;
    float _rightFilterStrength;
    float _leftFilterRatio;
    NSString *_templatePath;
    NSImage *_leftFilter;
    NSImage *_rightFilter;
    NSString *_greenScreenFile;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *greenScreenFile; // @synthesize greenScreenFile=_greenScreenFile;
@property(nonatomic) float leftFilterRatio; // @synthesize leftFilterRatio=_leftFilterRatio;
@property(nonatomic) float rightFilterStrength; // @synthesize rightFilterStrength=_rightFilterStrength;
@property(retain, nonatomic) NSImage *rightFilter; // @synthesize rightFilter=_rightFilter;
@property(nonatomic) float leftFilterStrength; // @synthesize leftFilterStrength=_leftFilterStrength;
@property(retain, nonatomic) NSImage *leftFilter; // @synthesize leftFilter=_leftFilter;
@property(nonatomic) BOOL motionMuted; // @synthesize motionMuted=_motionMuted;
@property(nonatomic) float thinShoulderLevel; // @synthesize thinShoulderLevel=_thinShoulderLevel;
@property(nonatomic) float thinBodyLevel; // @synthesize thinBodyLevel=_thinBodyLevel;
@property(nonatomic) float thinWaistLevel; // @synthesize thinWaistLevel=_thinWaistLevel;
@property(nonatomic) float longLegLevel; // @synthesize longLegLevel=_longLegLevel;
@property(nonatomic) float lipsThicknessLevel; // @synthesize lipsThicknessLevel=_lipsThicknessLevel;
@property(nonatomic) float nosePositionLevel; // @synthesize nosePositionLevel=_nosePositionLevel;
@property(nonatomic) float noseWingLevel; // @synthesize noseWingLevel=_noseWingLevel;
@property(nonatomic) float mouthShapeLevel; // @synthesize mouthShapeLevel=_mouthShapeLevel;
@property(nonatomic) float eyeAngleLevel; // @synthesize eyeAngleLevel=_eyeAngleLevel;
@property(nonatomic) float eyeDistanceLevel; // @synthesize eyeDistanceLevel=_eyeDistanceLevel;
@property(nonatomic) float foreheadLevel; // @synthesize foreheadLevel=_foreheadLevel;
@property(nonatomic) float smileLinesRemoveLevel; // @synthesize smileLinesRemoveLevel=_smileLinesRemoveLevel;
@property(nonatomic) float pounchRemoveLevel; // @synthesize pounchRemoveLevel=_pounchRemoveLevel;
@property(nonatomic) float wrinkleRemoveLevel; // @synthesize wrinkleRemoveLevel=_wrinkleRemoveLevel;
@property(nonatomic) float toothWhitenLevel; // @synthesize toothWhitenLevel=_toothWhitenLevel;
@property(nonatomic) float eyeLightenLevel; // @synthesize eyeLightenLevel=_eyeLightenLevel;
@property(nonatomic) float noseSlimLevel; // @synthesize noseSlimLevel=_noseSlimLevel;
@property(nonatomic) float narrowFaceLevel; // @synthesize narrowFaceLevel=_narrowFaceLevel;
@property(nonatomic) float faceShortLevel; // @synthesize faceShortLevel=_faceShortLevel;
@property(nonatomic) float chinLevel; // @synthesize chinLevel=_chinLevel;
@property(nonatomic) float faceVLevel; // @synthesize faceVLevel=_faceVLevel;
@property(nonatomic) float faceBeautyLevel; // @synthesize faceBeautyLevel=_faceBeautyLevel;
@property(nonatomic) float faceSlimLevel; // @synthesize faceSlimLevel=_faceSlimLevel;
@property(nonatomic) float eyeScaleLevel; // @synthesize eyeScaleLevel=_eyeScaleLevel;
@property(nonatomic) float ruddyLevel; // @synthesize ruddyLevel=_ruddyLevel;
@property(nonatomic) float whiteLevel; // @synthesize whiteLevel=_whiteLevel;
@property(nonatomic) float beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) BOOL enableSharpnessEnhancement; // @synthesize enableSharpnessEnhancement=_enableSharpnessEnhancement;
@property(retain, nonatomic) NSString *templatePath; // @synthesize templatePath=_templatePath;
- (BOOL)needsPitu;

@end

