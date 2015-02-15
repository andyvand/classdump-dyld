/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:52 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	float* perMeshPtr;
	void* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)featuresInImageUsingCCRect:(id)arg1 options:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(CIContext *)context;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)setContext:(CIContext *)arg1 ;
@end

