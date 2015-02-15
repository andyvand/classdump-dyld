/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:51 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIBarcodeDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;

}

@property (nonatomic,retain) CIContext * context; 
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(void)finalize;
-(void)dealloc;
-(CIContext *)context;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)setContext:(CIContext *)arg1 ;
@end

