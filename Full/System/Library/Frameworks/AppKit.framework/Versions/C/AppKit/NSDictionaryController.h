/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSArrayController.h>

@class NSString, NSDictionary, NSArray;

@interface NSDictionaryController : NSArrayController {

	void* _reserved5;
	void* _reserved6;
	void* _reserved7;
	id _contentDictionary;
	NSString* _initialKey;
	id _initialValue;
	unsigned long long _minimumInsertionKeyIndex;
	NSString* _localizedKeyStringsFileName;
	NSDictionary* _localizedKeyForKeyDictionary;
	NSDictionary* _keyForLocalizedKeyDictionary;
	NSArray* _includedKeys;
	NSArray* _excludedKeys;
	struct {
		unsigned _deepCopiesValues : 1;
		unsigned _suppressBuildingDictionary : 1;
		unsigned _reservedDictionaryController : 30;
	}  _dictionaryControllerFlags;

}

@property (copy) NSString * initialKey; 
@property (retain) id initialValue; 
@property (copy) NSArray * includedKeys; 
@property (copy) NSArray * excludedKeys; 
@property (copy) NSDictionary * localizedKeyDictionary; 
@property (copy) NSString * localizedKeyTable; 
+(id)_nonAutomaticObservingKeys;
+(Class)_defaultObjectClass;
-(void)setContent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_init;
-(void)_dealloc;
-(id)_arrayContent;
-(id)_managedProxy;
-(char)_sendsContentChangeNotifications;
-(id)content;
-(void)_insertObject:(id)arg1 atArrangedObjectIndex:(unsigned long long)arg2 objectHandler:(id)arg3 ;
-(void)_insertObjects:(id)arg1 atArrangedObjectIndexes:(id)arg2 objectHandler:(id)arg3 ;
-(void)_removeObjectAtArrangedObjectIndex:(unsigned long long)arg1 objectHandler:(id)arg2 ;
-(void)_removeObjectsAtArrangedObjectIndexes:(id)arg1 contentIndexes:(id)arg2 objectHandler:(id)arg3 ;
-(void)_removeObjects:(id)arg1 objectHandler:(id)arg2 ;
-(id)newObject;
-(char)canRemove;
-(void)_setContentInBackground:(id)arg1 ;
-(void)_prepareContentWithNewObject:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setSingleValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(void)setManagedObjectContext:(id)arg1 ;
-(void)setEntityName:(id)arg1 ;
-(void)setFetchPredicate:(id)arg1 ;
-(void)_setArrayContentInBackground:(id)arg1 ;
-(NSArray *)includedKeys;
-(NSArray *)excludedKeys;
-(id)_keyForLocalizedKey:(id)arg1 ;
-(void)_noteKeyValuePairChangedKey:(id)arg1 ;
-(id)_localizedKeyForKey:(id)arg1 ;
-(void)_noteKeyValuePairChangedValue:(id)arg1 ;
-(void)_updateLocalizedDictionaryForNewLocalizedKeyTable;
-(NSDictionary *)localizedKeyDictionary;
-(id)_transformationForString:(id)arg1 dictionary:(id)arg2 ;
-(id)_keyForLocalizedKeyDictionary;
-(NSString *)initialKey;
-(id)_insertionKeyForDictionary:(id)arg1 minimumIndex:(unsigned long long*)arg2 ;
-(id)initialValue;
-(char)deepCopiesValues;
-(id)_keyValuePairArrayForDictionary:(id)arg1 reuseKeyValuePairsFromArray:(id)arg2 ;
-(void)_recomputeLocalizedKeys;
-(id)_dictionaryForKeyValuePairArray:(id)arg1 pullExcludedKeysFromDictionary:(id)arg2 ;
-(void)_buildAndAssignNewContentDictionary;
-(void)setInitialKey:(NSString *)arg1 ;
-(void)setInitialValue:(id)arg1 ;
-(void)setDeepCopiesValues:(char)arg1 ;
-(void)setIncludedKeys:(NSArray *)arg1 ;
-(void)setExcludedKeys:(NSArray *)arg1 ;
-(void)setLocalizedKeyDictionary:(NSDictionary *)arg1 ;
-(void)setLocalizedKeyTable:(NSString *)arg1 ;
-(NSString *)localizedKeyTable;
@end

