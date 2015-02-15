/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:31 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSInspectorBar;

@interface __NSInspectorBarView : NSView {

	NSInspectorBar* _inspectorBar;

}

@property (assign) NSInspectorBar * inspectorBar;              //@synthesize inspectorBar=_inspectorBar - In the implementation block
-(char)accessibilityIsIgnored;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityRoleAttribute;
-(void)_windowChangedKeyState;
-(char)mouseDownCanMoveWindow;
-(NSInspectorBar *)inspectorBar;
-(void)setInspectorBar:(NSInspectorBar *)arg1 ;
-(void)removeItems;
-(void)drawBaselineSeparatorInRect:(CGRect)arg1 ;
@end

