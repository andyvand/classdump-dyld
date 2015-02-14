/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABLinkingInfoDataSource <NSObject>
@required
-(id)allRecords;
-(id)recordsForIdentifiers:(id)arg1;
-(id)linkIdentifierForRecord:(id)arg1;
-(void)linkRecord:(id)arg1 toRecord:(id)arg2;
-(void)setRecordPreferredForName:(id)arg1 linkedRecords:(id)arg2;
-(void)setRecordPreferredForPhoto:(id)arg1 linkedRecords:(id)arg2;
-(id)nameForRecord:(id)arg1;
-(void)unlinkRecord:(id)arg1;
-(id)uniqueIdForRecord:(id)arg1;
-(id)recordsForUniqueIds:(id)arg1;
-(/*^block*/id)recordToUniqueIdTransform;
-(void)setLinkId:(id)arg1 forRecord:(id)arg2;
-(id)nameBasedIndexingKeyForRecord:(id)arg1;
-(/*^block*/id)recordToAccountURITransform;
-(char)personIsMe:(id)arg1;
-(id)nameCollisionMapForRecords:(id)arg1;
-(id)nameCollisionMapForExistingRecords;
-(id)insertedRecords;
-(char)recordSupportsLinking:(id)arg1;
-(char)property:(id)arg1 hasChangedOnRecord:(id)arg2;
-(void)setRecordPreferredForName:(id)arg1;
-(void)setRecordPreferredForPhoto:(id)arg1;
-(id)recordsWithLinkIdentifier:(id)arg1;
-(char)recordIsOnlyRecordInLink:(id)arg1;
-(void)linkInsertedRecords:(id)arg1;
-(id)updatedRecords;
-(id)linkIdentifiersOfDeletedRecords;

@end

