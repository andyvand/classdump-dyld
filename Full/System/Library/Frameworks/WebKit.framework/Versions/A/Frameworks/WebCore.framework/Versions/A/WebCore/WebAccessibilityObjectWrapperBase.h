/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:02 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityObjectWrapperBase : NSObject {

	AccessibilityObject* m_object;

}
+(void)accessibilitySetShouldRepostNotifications:(char)arg1 ;
-(id)initWithAccessibilityObject:(AccessibilityObject*)arg1 ;
-(id)attachmentView;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(char)fileUploadButtonReturnsValueInTitle;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(char)updateObjectBackingStore;
-(AccessibilityObject*)accessibilityObject;
-(char)titleTagShouldBeUsedInDescriptionField;
-(id)accessibilityHelpText;
-(CGPathRef)convertPathToScreenSpace:(Path*)arg1 ;
-(CGPoint)convertPointToScreenSpace:(FloatPoint*)arg1 ;
-(id)ariaLandmarkRoleDescription;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(id)accessibilityDescription;
-(id)accessibilityTitle;
-(void)detach;
@end

