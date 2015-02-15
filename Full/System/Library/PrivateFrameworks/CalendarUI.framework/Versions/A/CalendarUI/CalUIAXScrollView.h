/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:59 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <AppKit/NSScrollView.h>

@class NSString;

@interface CalUIAXScrollView : NSScrollView {

	char _accessibiltyIgnoredForNodeAndChildren;
	char _accessibiltyIgnoredForNode;
	NSString* _axRoleDescription;

}

@property (assign) char accessibiltyIgnoredForNodeAndChildren;              //@synthesize accessibiltyIgnoredForNodeAndChildren=_accessibiltyIgnoredForNodeAndChildren - In the implementation block
@property (assign) char accessibiltyIgnoredForNode;                         //@synthesize accessibiltyIgnoredForNode=_accessibiltyIgnoredForNode - In the implementation block
@property (retain) NSString * axRoleDescription;                            //@synthesize axRoleDescription=_axRoleDescription - In the implementation block
-(void)setAccessibiltyIgnoredForNodeAndChildren:(char)arg1 ;
-(void)setAxRoleDescription:(NSString *)arg1 ;
-(char)accessibiltyIgnoredForNodeAndChildren;
-(char)accessibiltyIgnoredForNode;
-(NSString *)axRoleDescription;
-(void)setAccessibiltyIgnoredForNode:(char)arg1 ;
-(id)init;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
@end

