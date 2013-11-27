/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PHVoicemailListViewControllerConcrete <PHVoicemailCellConfigurationDelegate>
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) BOOL popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
@optional
-(void)willShowVoicemails:(id)arg1;
-(id)navigationBarTextWithCountFormat;
-(id)childListControllers;

@required
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1;
-(id)navigationBarText;
-(BOOL)popOffIfEmpty;
-(id)tableViewDestructiveActionText;
-(id)folderName;
@end
