/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AVFoundationCF.framework/Versions/A/AVFoundationCF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundationCF/AVFoundationCF-Structs.h>
#import <QuartzCore/CALayer.h>

@interface AVCFInternalSubtitleLayer : CALayer {

	OpaqueAVCFSubtitleLayerRef _subtitleLayerRef;

}

@property (assign,nonatomic) OpaqueAVCFSubtitleLayerRef subtitleLayerRef;              //@synthesize subtitleLayerRef=_subtitleLayerRef - In the implementation block
-(void)setSubtitleLayerRef:(OpaqueAVCFSubtitleLayerRef)arg1 ;
-(OpaqueAVCFSubtitleLayerRef)subtitleLayerRef;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)layerDidBecomeVisible:(char)arg1 ;
@end

