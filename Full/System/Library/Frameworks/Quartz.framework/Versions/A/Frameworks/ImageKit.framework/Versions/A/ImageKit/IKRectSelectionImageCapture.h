/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKRectSelection.h>

@interface IKRectSelectionImageCapture : IKRectSelection {

	long long _scanOrientation;
	char _isBound;

}

@property (assign) long long scanOrientation;              //@synthesize scanOrientation=_scanOrientation - In the implementation block
-(unsigned)defaultKnob;
-(void)doDrawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(unsigned)knobLayerFlags;
-(long long)scanOrientation;
-(void)setScanOrientation:(long long)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)removeFromSuperlayer;
-(void)setup:(id)arg1 ;
-(void)cleanup;
@end

