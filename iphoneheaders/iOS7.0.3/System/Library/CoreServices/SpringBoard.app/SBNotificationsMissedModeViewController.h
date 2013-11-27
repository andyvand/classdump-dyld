/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:39:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationsModeViewController.h>

@class NSMutableSet;

@interface SBNotificationsMissedModeViewController : SBNotificationsModeViewController {

	NSMutableSet* _lockScreenBulletinIDs;

}
+(id)_sortByDateForBulletin:(id)arg1 ;
+(id)sharedSectionInfo;
+(id)_referenceDate;
+(void)_sortBulletinsChronologically:(id)arg1 ;
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 ;
-(id)infoForBulletinSection:(id)arg1 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitReloadOfSections:(id)arg1 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned)arg4 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)arg1 ;
-(void)populateBulletinInfo:(id)arg1 inSection:(id)arg2 ;
-(void)willAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)didAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)willDisassociateBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2 ;
-(void)commitMoveOfBulletin:(id)arg1 inSection:(id)arg2 beforeBulletin:(id)arg3 inSection:(id)arg4 ;
-(void)_pruneBulletins;
-(void)populateIconIfNecessaryForBulletinInfo:(id)arg1 ;
-(id)_expiredBulletins;
-(void)_sortSectionIDs;
-(void)_updateSectionOrderForOperationInSection:(id)arg1 ;
-(void)_sortBulletins:(id)arg1 forSection:(id)arg2 ;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)arg1 withProcessingBlock:(/*^block*/ id)arg2 ;
-(void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)arg1 ;
-(void)_updateSectionForChangeInNumberOfLines:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
