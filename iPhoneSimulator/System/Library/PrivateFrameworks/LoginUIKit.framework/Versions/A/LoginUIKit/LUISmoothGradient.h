/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <LoginUIKit/LoginUIKit-Structs.h>
@class NSImage;

@interface LUISmoothGradient : NSObject {

	CGColorSpaceRef _colorSpace;
	NSImage* _image;
	CGSize _size;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(id)imageWithSmoothGradient;
-(void)_addGradientsToContext:(CGContextRef)arg1 ;
-(void)_addNoiseToContext:(CGContextRef)arg1 ;
-(void)_addImageToContext:(CGContextRef)arg1 ;
@end

