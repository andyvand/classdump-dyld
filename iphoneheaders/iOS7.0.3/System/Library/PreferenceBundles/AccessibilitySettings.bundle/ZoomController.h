/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:40:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class PSSpecifier;

@interface ZoomController : AccessibilityListController {

	PSSpecifier* _zoomOnSpecifier;

}
+(void)setZoomEnabled:(BOOL)arg1 ;
-(void)_manageSubPreferencesWithEnabled;
-(id)_zoomTouchEnabledSpecifier;
-(void)setZoomTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)allowsTouchToSpeak:(id)arg1 ;
-(void)setAllowsTouchToSpeak:(id)arg1 specifier:(id)arg2 ;
-(id)zoomTouchEnabled:(id)arg1 ;
-(void)_zoomTouchEnabledChange;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(id)specifiers;
@end
