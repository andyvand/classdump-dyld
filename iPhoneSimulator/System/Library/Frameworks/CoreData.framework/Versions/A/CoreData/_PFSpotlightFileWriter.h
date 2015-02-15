/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSPersistentStoreCoordinator, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary;

@interface _PFSpotlightFileWriter : NSObject {

	NSString* externalRecordsPath;
	NSString* storeUUID;
	NSString* fileExtension;
	unsigned long long externalRecordsFileFormat;
	NSPersistentStoreCoordinator* psc;
	NSManagedObjectContext* moc;
	NSManagedObjectModel* model;
	char useUbiquityExternalRecordsLayout;
	NSMutableDictionary* changedObjectsContent;

}
+(id)directoryPathForPrimaryKey:(id)arg1 ;
-(void)writeSupportFilesWithDict:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)fetchDestinationsForRelationship:(id)arg1 onSource:(id)arg2 ;
-(id)truthContentForInstanceWithData:(id)arg1 entityHasTransformables:(char)arg2 ;
-(void)writeFilesForEntities:(id)arg1 forOperation:(int)arg2 ;
-(void)dealloc;
@end

