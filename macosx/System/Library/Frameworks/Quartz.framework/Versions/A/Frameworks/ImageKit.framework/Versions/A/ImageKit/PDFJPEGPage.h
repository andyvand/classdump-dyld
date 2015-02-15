/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <PDFKit/PDFPage.h>

@class NSMutableDictionary;

@interface PDFJPEGPage : PDFPage {

	CGImageRef _cgImageRef;
	CGRect _cgImageRect;
	NSMutableDictionary* _metadata;
	long long _orientation;
	long long _dpi;

}
-(CGRect)boundsForBox:(long long)arg1 ;
-(CGAffineTransform)transformForOrientationAndDPIWithTranslationForWidth:(float)arg1 height:(float)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
-(CGRect)boundsAdjustedToOrientation:(char)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 metadata:(id)arg2 ;
-(void)dealloc;
-(id)description;
@end
