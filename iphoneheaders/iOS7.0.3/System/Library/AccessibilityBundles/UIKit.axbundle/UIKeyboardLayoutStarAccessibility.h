/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:37:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayoutStarAccessibility_super.h>

@interface UIKeyboardLayoutStarAccessibility : UIKeyboardLayoutStarAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityInternalData;
-(id)_accessibilityCreateElementForKey:(id)arg1 ;
-(void)_accessibilityResetInternalData;
-(void)_axClearReturnKeyLabel;
-(id)_accessibilityKeys;
-(BOOL)_isCapitalLetterKeyplane:(id)arg1 ;
-(BOOL)_isSmallLetterKeyplane:(id)arg1 ;
-(id)_accessibilityKeyElementForKey:(id)arg1 ;
-(BOOL)_accessibilityFingerIsDown;
-(void)dealloc;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(BOOL)canProduceString:(id)arg1 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(BOOL)accessibilityPerformEscape;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setKeyplaneName:(id)arg1 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)activateCompositeKey:(id)arg1 direction:(int)arg2 flickString:(id)arg3 popupInfo:(id)arg4 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityKeyboardKeyForString:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibiltyAvailableKeyplanes;
-(void)_accessibilityChangeToKeyplane:(id)arg1 ;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityIsScannerGroup;
-(int)_accessibilityScannerGroupTraits;
@end
