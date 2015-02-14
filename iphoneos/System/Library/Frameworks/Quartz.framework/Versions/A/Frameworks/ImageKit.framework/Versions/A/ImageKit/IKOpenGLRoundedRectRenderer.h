/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSMutableArray;

@interface IKOpenGLRoundedRectRenderer : NSObject {

	NSMutableArray* _roundedRectCaches;
	id _lastRoundedRectUsed;
	double _scaleFactor;

}

@property (assign) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(id)_findInCacheMapWithRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 mode:(int)arg5 lineWidth:(int)arg6 ;
-(unsigned)_createMapForRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 mode:(int)arg5 lineWidth:(int)arg6 ;
-(unsigned)_mapForRadius:(float)arg1 scaleFactor:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 mode:(int)arg5 lineWidth:(int)arg6 ;
-(void)_drawRoundedBorder:(CGPoint*)arg1 radius:(float)arg2 mapRadius:(float)arg3 groupType:(int)arg4 texOut:(unsigned)arg5 texIn:(unsigned)arg6 lineWidth:(float)arg7 ;
-(char)renderRoundedRect:(CGRect)arg1 radius:(float)arg2 strokeColor:(float*)arg3 fillColor:(float*)arg4 mode:(int)arg5 lineWidth:(int)arg6 ;
-(char)renderBezelGroupWithPoints:(CGPoint*)arg1 count:(int)arg2 radius:(float)arg3 strokeColor:(float*)arg4 fillColor:(float*)arg5 lineWidth:(int)arg6 ;
-(id)init;
-(void)dealloc;
@end

