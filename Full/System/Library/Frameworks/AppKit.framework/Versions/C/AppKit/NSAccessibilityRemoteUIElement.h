/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface NSAccessibilityRemoteUIElement : NSObject {

	const AXUIElementRef _elementRef;
	id _windowUIElement;
	id _topLevelUIElement;

}

@property (retain) id windowUIElement;                //@synthesize windowUIElement=_windowUIElement - In the implementation block
@property (retain) id topLevelUIElement;              //@synthesize topLevelUIElement=_topLevelUIElement - In the implementation block
+(char)isRemoteUIApp;
+(void)setRemoteUIApp:(char)arg1 ;
+(id)remoteTokenForLocalUIElement:(id)arg1 ;
+(void)registerRemoteUIProcessIdentifier:(int)arg1 ;
+(void)unregisterRemoteUIProcessIdentifier:(int)arg1 ;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(AXUIElementRef)AXUIElement;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(int)processIdentifier;
-(id)windowUIElement;
-(id)topLevelUIElement;
-(id)initWithRemoteToken:(id)arg1 ;
-(void)setWindowUIElement:(id)arg1 ;
-(void)setTopLevelUIElement:(id)arg1 ;
@end

