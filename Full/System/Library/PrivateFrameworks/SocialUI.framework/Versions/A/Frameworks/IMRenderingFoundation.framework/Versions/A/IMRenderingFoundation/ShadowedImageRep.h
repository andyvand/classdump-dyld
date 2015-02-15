/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:12 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/Frameworks/IMRenderingFoundation.framework/Versions/A/IMRenderingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMRenderingFoundation/IMRenderingFoundation-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSImage, NSShadow;

@interface ShadowedImageRep : NSImageRep {

	NSImage* _imageToShadow;
	NSShadow* _shadow;

}
-(id)initWithImage:(id)arg1 shadow:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)hasAlpha;
-(char)draw;
@end

