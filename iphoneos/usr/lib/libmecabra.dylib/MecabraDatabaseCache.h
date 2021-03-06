/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, MecabraDatabaseCacheIdentifierController, NSArray;

@interface MecabraDatabaseCache : NSObject {

	NSMutableDictionary* _entryToIdentifierMapping;
	MecabraDatabaseCacheIdentifierController* _identifierController;
	NSMutableDictionary* _identifierToEntryMapping;
	NSArray* _uniqueKeys;
	unsigned long long _currentSeed;

}

@property (nonatomic,readonly) NSArray * allIdentifiers; 
@property (nonatomic,retain) NSArray * uniqueKeys;                                                         //@synthesize uniqueKeys=_uniqueKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entryToIdentifierMapping;                               //@synthesize entryToIdentifierMapping=_entryToIdentifierMapping - In the implementation block
@property (nonatomic,retain) MecabraDatabaseCacheIdentifierController * identifierController;              //@synthesize identifierController=_identifierController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToEntryMapping;                               //@synthesize identifierToEntryMapping=_identifierToEntryMapping - In the implementation block
@property (assign,nonatomic) unsigned long long currentSeed;                                               //@synthesize currentSeed=_currentSeed - In the implementation block
-(void)setEntryToIdentifierMapping:(NSMutableDictionary *)arg1 ;
-(void)setIdentifierController:(MecabraDatabaseCacheIdentifierController *)arg1 ;
-(void)setIdentifierToEntryMapping:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToEntryMapping;
-(NSArray *)uniqueKeys;
-(NSMutableDictionary *)entryToIdentifierMapping;
-(id)keyStringForEntry:(id)arg1 ;
-(MecabraDatabaseCacheIdentifierController *)identifierController;
-(unsigned long long)currentSeed;
-(void)setCurrentSeed:(unsigned long long)arg1 ;
-(NSArray *)allIdentifiers;
-(id)partialEntryForEntry:(id)arg1 ;
-(unsigned long long)identifierForEntry:(id)arg1 ;
-(id)entryForIdentifier:(unsigned long long)arg1 ;
-(void)updateEntry:(id)arg1 keyString:(id)arg2 ;
-(void)deleteEntry:(id)arg1 ;
-(void)updateSeedNumber:(unsigned long long)arg1 ;
-(void)setUniqueKeys:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(unsigned long long)nextSeed;
@end

