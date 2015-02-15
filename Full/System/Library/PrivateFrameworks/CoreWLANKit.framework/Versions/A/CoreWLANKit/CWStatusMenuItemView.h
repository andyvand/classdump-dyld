/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreWLANKit.framework/Versions/A/CoreWLANKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreWLANKit/CoreWLANKit-Structs.h>
#import <AppKit/NSView.h>

@class NSMenuItem, NSProgressIndicator;

@interface CWStatusMenuItemView : NSView {

	NSMenuItem* _menuItem;
	NSProgressIndicator* _progressIndicator;

}
-(void)__drawRTLRect:(CGRect)arg1 ;
-(void)__drawLTRRect:(CGRect)arg1 ;
-(unsigned long long)idealMenuItemWidth;
-(id)initWithFrame:(CGRect)arg1 menuItem:(id)arg2 ;
-(void)startIndicator;
-(void)stopIndicator;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
@end

