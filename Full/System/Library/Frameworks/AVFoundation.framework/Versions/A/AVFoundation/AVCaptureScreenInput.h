/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureScreenInputInternal;

@interface AVCaptureScreenInput : AVCaptureInput {

	AVCaptureScreenInputInternal* _internal;

}

@property (assign,nonatomic) SCD_Struct_CM5 minFrameDuration; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) char capturesMouseClicks; 
@property (assign,nonatomic) char capturesCursor; 
@property (assign,nonatomic) char removesDuplicateFrames; 
+(void)initialize;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(SCD_Struct_CM5)minFrameDuration;
-(id)notReadyError;
-(id)ports;
-(void)removeInputUnitsForInputPort:(id)arg1 fromGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 ;
-(int)graphNodeForInputPort:(id)arg1 ;
-(int)clockProviderNodeForInputPort:(id)arg1 ;
-(char)addInputUnitsForInputPort:(id)arg1 toGraph:(OpaqueCMIOGraphRef)arg2 ofCaptureSession:(id)arg3 error:(id*)arg4 ;
-(unsigned)unitOutputNumberForInputPort:(id)arg1 ;
-(void)sessionWillUseOutputDecompressionOptions:(id)arg1 forPort:(id)arg2 ;
-(OpaqueCMClockRef)inputClock;
-(char)capturesMouseClicks;
-(char)capturesCursor;
-(int)captureTimeScale;
-(char)removesDuplicateFrames;
-(int)_setInputUnitProperty:(unsigned)arg1 bytes:(const void*)arg2 length:(unsigned)arg3 ;
-(int)_getInputUnitProperty:(unsigned)arg1 bytes:(void*)arg2 length:(unsigned)arg3 ;
-(void)_syncScreenInputWithSessionSettings;
-(CGRect)_flippedCropRectForCropRect:(CGRect)arg1 ;
-(unsigned)_mouseClickEffect;
-(void)setMinFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setCapturesMouseClicks:(char)arg1 ;
-(void)setCapturesCursor:(char)arg1 ;
-(void)setCaptureTimeScale:(int)arg1 ;
-(void)setRemovesDuplicateFrames:(char)arg1 ;
-(void)_updateGraphicsSubsystemErrorStatusFromPropertyListener:(id)arg1 ;
-(CGRect)cropRect;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithDisplayID:(unsigned)arg1 ;
@end

