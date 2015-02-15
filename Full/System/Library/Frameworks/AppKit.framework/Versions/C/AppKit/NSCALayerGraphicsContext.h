/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSWindowGraphicsContext.h>

@class NSFocusStack, CALayer;

@interface NSCALayerGraphicsContext : NSWindowGraphicsContext {

	NSFocusStack* _focusStack;
	CALayer* _layer;
	SCD_Struct_NS19 _lgcFlags;

}
-(void)dealloc;
-(char)isFlipped;
-(id)focusStack;
-(id)CALayer;
-(id)_initWithGraphicsPort:(void*)arg1 CALayer:(id)arg2 flipped:(char)arg3 ;
-(void)setFocusStack:(id)arg1 ;
@end

