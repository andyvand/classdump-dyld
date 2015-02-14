/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAlert, NSString;

@interface TestDriveTerminationPanelController : NSObject {

	NSAlert* _alert;
	long long _trigger;
	NSString* _bundleIdentifierOfBrowserToImportFrom;

}
+(void)runModalTerminationPromptForTestDriveTimeout;
+(void)runModalTerminationPromptForBookmarkMutation;
+(void)runModalTerminationPromptForImportingFromOtherBrowserWithBundleIdentifier:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(id)_initWithTrigger:(long long)arg1 ;
-(id)_initWithBundleIdentifierOfBrowserToImportFrom:(id)arg1 ;
-(id)_informativeTextString;
-(void)_configureAlertForTimeOutTrigger:(id)arg1 ;
-(void)_configureAlertForBookmarkMutationTrigger:(id)arg1 ;
-(void)_configureAlertForManualImportTrigger:(id)arg1 ;
-(void)_endTestDriveKeepingImportedData:(char)arg1 ;
-(id)_keepButtonTitleString;
-(void)_keepImportedData:(id)arg1 ;
-(void)_discardImportedData:(id)arg1 ;
-(void)_configureAlertToAskToMakeSafariTheDefaultBrowser:(id)arg1 ;
-(void)_configureAlertForThreeButtonConfiguration:(id)arg1 ;
-(id)_alert;
@end

