/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:15 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMigrationManager, NSEntityMapping, NSPropertyMapping;

@interface NSMigrationContext : NSObject {

	NSMutableDictionary* _bySourceAssociationTable;
	NSMutableDictionary* _byDestinationAssociationTable;
	NSMutableDictionary* _byMappingBySourceAssociationTable;
	NSMutableDictionary* _byMappingByDestinationAssociationTable;
	NSMigrationManager* _migrationManager;
	NSEntityMapping* _currentMapping;
	unsigned long long _currentStep;
	NSPropertyMapping* _currentPropertyMapping;

}

@property (retain) NSEntityMapping * currentEntityMapping; 
@property (retain) NSPropertyMapping * currentPropertyMapping; 
@property (assign) unsigned long long currentMigrationStep; 
-(void)setCurrentPropertyMapping:(NSPropertyMapping *)arg1 ;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)clearAssociationTables;
-(id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2 ;
-(NSEntityMapping *)currentEntityMapping;
-(NSPropertyMapping *)currentPropertyMapping;
-(id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2 ;
-(unsigned long long)currentMigrationStep;
-(void)setCurrentEntityMapping:(NSEntityMapping *)arg1 ;
-(id)initWithMigrationManager:(id)arg1 ;
-(void)setCurrentMigrationStep:(unsigned long long)arg1 ;
-(void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3 ;
-(void)dealloc;
@end

