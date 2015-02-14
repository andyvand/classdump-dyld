/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Safari/Safari-Structs.h>
@interface VoiceOverInfo : NSObject {

	id _parentOverride;
	AccessibilityObject* _object;

}
+(id)voiceOverRoleForAccessibilityRole:(int)arg1 ;
+(id)voiceOverRoleDescriptionForAccessibilityObject:(AccessibilityObject*)arg1 ;
+(id)voiceOverActionForAction:(int)arg1 ;
+(int)accessibilityActionForVoiceOverAction:(id)arg1 ;
+(id)voiceOverNotificationForNotification:(int)arg1 ;
-(CGRect)accessibilityScreenRectForChild:(id)arg1 ;
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(void)setParentOverride:(id)arg1 ;
-(CGRect)convertRectToScreenCoordinates:(CGRect)arg1 ;
-(CGRect)screenRect;
-(void)dealloc;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)accessibilityPostNotification:(int)arg1 ;
-(id)accessibilityParent;
@end

