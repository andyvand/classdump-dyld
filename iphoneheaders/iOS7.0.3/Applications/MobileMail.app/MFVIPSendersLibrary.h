/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFMailMessageLibraryDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MFEmailSet, NSUbiquitousKeyValueStore, MFMailMessageLibrary;

@interface MFVIPSendersLibrary : NSObject <MFMailMessageLibraryDelegate> {

	NSObject<OS_dispatch_queue>* _addressBookQueue;
	void* _addressBook;
	int _addressBookResetCount;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _vipSendersByReference;
	MFEmailSet* _vipSenderAddresses;
	NSUbiquitousKeyValueStore* _cloudStore;
	MFMailMessageLibrary* _library;
	NSObject<OS_dispatch_queue>* _pendingAddressQueue;
	MFEmailSet* _pendingAdds;
	MFEmailSet* _pendingRemoves;

}
+(id)defaultMessageLibrary;
+(id)defaultInstance;
-(void)checkForAddressBookChanges;
-(id)allVIPEmailAddressesCriterion;
-(id)allVIPEmailAddresses;
-(id)senderForEmails:(id)arg1 andDisplayNames:(id)arg2 ;
-(BOOL)hasVIPSenders;
-(BOOL)deleteVIPSendersWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveVIPSenders:(id)arg1 error:(id*)arg2 ;
-(id)_pendingVIPChangesPath;
-(id)_readRawVIPSenderRepresentations;
-(void)_performTasksAfterProtectedDataBecomesAvailable;
-(void)_libraryDidFinishReconciliation:(id)arg1 ;
-(void)_checkForAddressBookChangesNeedingRevert:(BOOL)arg1 ;
-(unsigned)_saveVIPSender:(id)arg1 ;
-(void)_deleteVIPSenderWithReferences:(id)arg1 ;
-(void)_enumerateVIPSenders:(/*^block*/ id)arg1 ;
-(void)_syncVIPSender:(id)arg1 withStore:(id)arg2 ;
-(void)_postNotificationsForInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 ;
-(BOOL)_clearVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(BOOL)arg2 ;
-(BOOL)_setVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(BOOL)arg2 ;
-(void)_removePendingVIPChanges;
-(id)_copyCriterionForSenders:(id)arg1 ;
-(id)_messagesForSenders:(id)arg1 success:(BOOL*)arg2 ;
-(void)_savePendingVIPChanges_nts;
-(void)_updateVIPSender:(id)arg1 ;
-(id)_copyRepresentationForVIPSender:(id)arg1 reference:(id*)arg2 ;
-(void)_saveRawVIPSenderRepresentations:(id)arg1 ;
-(void)_insertVIPSender:(id)arg1 ;
-(id)_copyVIPSenderFromRepresentation:(id)arg1 withReference:(id)arg2 ;
-(id)_copyAllVIPSenders;
-(id)_copyAllVIPEmailAddresses;
-(BOOL)_mergeRemoteChanges:(id)arg1 fromStore:(id)arg2 ;
-(id)_copyVIPSenderWithUniqueReference:(id)arg1 ;
-(id)_referenceForVIPWithSubsetOfAddresses:(id)arg1 ;
-(void)_handleAddressBookNotification;
-(id)allVIPSenders;
-(void)dealloc;
-(BOOL)_synchronize;
-(id)library:(id)arg1 willAddMessage:(id)arg2 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)_storeChangedExternally:(id)arg1 ;
@end
