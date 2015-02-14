/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSMenuItem.h>

@interface _NSNavNodeMenuItem : NSMenuItem {

	char _representedObjectIsObservedNode;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRepresentedObject:(id)arg1 ;
-(void)_setIconRef:(OpaqueIconRefRef)arg1 ;
-(void)stopObservingNode;
-(void)startObservingNode;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 representedNavNode:(id)arg4 ;
@end

