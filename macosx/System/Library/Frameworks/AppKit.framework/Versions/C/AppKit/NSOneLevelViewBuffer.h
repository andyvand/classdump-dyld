/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewBuffer.h>

@class NSWindow;

@interface NSOneLevelViewBuffer : NSViewBuffer {

	NSWindow* _window;
	CGLayerRef _cgLayer;

}
-(void)dealloc;
-(void)invalidate;
-(id)initWithView:(id)arg1 ;
-(char)cacheRect:(CGRect)arg1 ;
-(char)restore;
@end

