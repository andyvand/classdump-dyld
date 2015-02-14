/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSImage, NSColor;

@interface TintedImageRep : NSImageRep {

	NSImage* _image;
	NSColor* _tintColor;

}
-(id)initWithImage:(id)arg1 tintColor:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)draw;
@end

