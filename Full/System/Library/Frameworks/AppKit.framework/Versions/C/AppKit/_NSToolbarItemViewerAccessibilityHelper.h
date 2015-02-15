/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSToolbarItemViewer;

@interface _NSToolbarItemViewerAccessibilityHelper : NSObject {

	NSToolbarItemViewer* _toolbarItemViewer;
	long long _configuration;

}
+(id)accessibilityHelperForToolbarItemViewer:(id)arg1 ;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(id)accessibilityRoleAttribute;
-(char)accessibilityIsFocusedAttributeSettable;
-(void)accessibilitySetFocusedAttribute:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(id)accessibilityEnabledAttribute;
-(id)accessibilityChildrenAttribute;
-(id)accessibilityTitleAttribute;
-(id)accessibilityValueAttribute;
-(char)accessibilityIsValueAttributeSettable;
-(id)initWithToolbarItemViewer:(id)arg1 ;
@end
